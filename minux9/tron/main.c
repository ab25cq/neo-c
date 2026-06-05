#include "tkernel.h"

#define STACK_SIZE 2048
#define MSG_COUNT 3

typedef struct {
    T_MSG hdr;
    int value;
} app_msg_t;

static uint8_t producer_stack[STACK_SIZE] __attribute__((aligned(16)));
static uint8_t worker_stack[STACK_SIZE] __attribute__((aligned(16)));
static uint8_t preempt_stack[STACK_SIZE] __attribute__((aligned(16)));
static uint8_t low_mutex_stack[STACK_SIZE] __attribute__((aligned(16)));
static uint8_t high_mutex_stack[STACK_SIZE] __attribute__((aligned(16)));
static uint8_t hog_stack[STACK_SIZE] __attribute__((aligned(16)));
static uint8_t monitor_stack[STACK_SIZE] __attribute__((aligned(16)));
static uint8_t msg_pool[MSG_COUNT * 64] __attribute__((aligned(16)));
static uint8_t mbf_buffer[128] __attribute__((aligned(16)));

static ID g_sem;
static ID g_timeout_sem;
static ID g_flag;
static ID g_mbx;
static ID g_mtx;
static ID g_mbf;
static ID g_mpf;
static ID g_cyc;
static int g_cycle_count;
static int g_msg_sum;
static int g_preempt_seen;
static int g_inherit_seen;

static int bytes_equal(const char *a, const char *b, int n) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1;
}

static void cyclic(INTEXINF exinf) {
    (void)exinf;
    g_cycle_count++;
}

static void producer(INTEXINF exinf) {
    (void)exinf;
    for (int i = 0; i < MSG_COUNT; i++) {
        app_msg_t *msg = 0;
        tk_get_mpf(g_mpf, (void**)&msg);
        msg->value = i + 1;
        tk_snd_mbx(g_mbx, &msg->hdr);
        tk_sig_sem(g_sem);
        tk_puts("producer: sent message\n");
        tk_dly_tsk(2);
    }
    {
        const char mbf_msg[4] = { 'm', 'b', 'f', '!' };
        if (tk_snd_mbf(g_mbf, mbf_msg, 4) != E_OK) {
            tk_puts("producer: message buffer send failed\n");
            tk_kernel_exit(1);
        }
    }
    tk_set_flg(g_flag, 0x01);
    tk_puts("producer: done\n");
    tk_ext_tsk();
}

static void worker(INTEXINF exinf) {
    (void)exinf;
    for (int i = 0; i < MSG_COUNT; i++) {
        T_MSG *raw = 0;
        tk_wai_sem(g_sem);
        tk_rcv_mbx(g_mbx, &raw);
        app_msg_t *msg = (app_msg_t*)raw;
        g_msg_sum += msg->value;
        tk_rel_mpf(g_mpf, msg);
        tk_puts("worker: received message\n");
    }
    {
        char mbf_msg[8];
        int32_t mbf_len = 0;
        const char expected[4] = { 'm', 'b', 'f', '!' };
        if (tk_rcv_mbf(g_mbf, mbf_msg, &mbf_len) == E_OK &&
            mbf_len == 4 &&
            bytes_equal(mbf_msg, expected, 4)) {
            tk_puts("worker: received message buffer\n");
            tk_set_flg(g_flag, 0x20);
        }
    }
    tk_set_flg(g_flag, 0x02);
    tk_puts("worker: done\n");
    tk_ext_tsk();
}

static void preempt_waiter(INTEXINF exinf) {
    (void)exinf;
    tk_dly_tsk(1);
    g_preempt_seen = 1;
    tk_puts("preempt: timer woke high-priority task\n");
    tk_set_flg(g_flag, 0x04);
    tk_ext_tsk();
}

static void low_mutex_task(INTEXINF exinf) {
    (void)exinf;
    tk_loc_mtx(g_mtx);
    tk_puts("mutex-low: locked\n");
    for (uint64_t i = 0; i < 5000000ULL; i++) {
        if (tk_get_pri(tk_get_tid()) == 2) {
            g_inherit_seen = 1;
        }
    }
    tk_unl_mtx(g_mtx);
    tk_puts("mutex-low: unlocked\n");
    tk_ext_tsk();
}

static void high_mutex_task(INTEXINF exinf) {
    (void)exinf;
    tk_dly_tsk(2);
    if (tk_loc_mtx(g_mtx) == E_OK) {
        tk_puts("mutex-high: acquired after inheritance\n");
        tk_unl_mtx(g_mtx);
    }
    if (g_inherit_seen) {
        tk_set_flg(g_flag, 0x10);
    }
    if (tk_wai_sem_tmo(g_timeout_sem, 3) == E_TMOUT) {
        tk_puts("timeout: semaphore wait timed out\n");
        tk_set_flg(g_flag, 0x40);
    }
    tk_ext_tsk();
}

static void cpu_hog(INTEXINF exinf) {
    (void)exinf;
    volatile uint64_t spin = 0;
    for (uint64_t i = 0; i < 6000000ULL; i++) {
        spin += i;
    }
    if (g_preempt_seen) {
        tk_puts("hog: was preempted\n");
    } else {
        tk_puts("hog: preempt flag missing\n");
    }
    tk_set_flg(g_flag, 0x08);
    tk_ext_tsk();
}

static void monitor(INTEXINF exinf) {
    (void)exinf;
    FLGPTN pattern = 0;

    tk_wai_flg(g_flag, 0x7f, TWF_ANDW | TWF_CLR, &pattern);
    tk_puts("monitor: flags=");
    tk_puthex(pattern);
    tk_puts("\n");
    tk_puts("monitor: msg sum=");
    tk_puthex((uint64_t)g_msg_sum);
    tk_puts("\n");
    tk_puts("monitor: tick=");
    tk_puthex(tk_get_tick());
    tk_puts(" irq=");
    tk_puthex(tk_get_timer_irq_count());
    tk_puts(" cyclic=");
    tk_puthex((uint64_t)g_cycle_count);
    tk_puts("\n");

    if ((pattern & 0x7f) == 0x7f &&
        g_msg_sum == 6 &&
        g_preempt_seen &&
        g_inherit_seen &&
        tk_get_timer_irq_count() > 0 &&
        g_cycle_count > 0) {
        tk_puts("uT-Kernel demo PASS\n");
        tk_kernel_exit(0);
    }

    tk_puts("uT-Kernel demo FAIL\n");
    tk_kernel_exit(1);
}

static void create_task(FP entry, PRI pri, uint8_t *stack, size_t stack_size) {
    T_CTSK ctsk;
    ID id;

    ctsk.exinf = 0;
    ctsk.task = entry;
    ctsk.itskpri = pri;
    ctsk.stk = stack;
    ctsk.stksz = stack_size;
    id = tk_cre_tsk(&ctsk);
    if (id < 0 || tk_sta_tsk(id, 0) != E_OK) {
        tk_puts("task create failed\n");
        tk_kernel_exit(1);
    }
}

void tk_app_main(void) {
    T_CSEM csem = { .isemcnt = 0, .maxsem = MSG_COUNT };
    T_CSEM timeout_sem = { .isemcnt = 0, .maxsem = 1 };
    T_CFLG cflg = { .iflgptn = 0 };
    T_CMBX cmbx = { .unused = 0 };
    T_CMTX cmtx = { .ceilpri = 0 };
    T_CMBF cmbf = { .bufsz = sizeof(mbf_buffer), .maxmsz = 32, .bufptr = mbf_buffer };
    T_CMPF cmpf = { .mpfcnt = MSG_COUNT, .blfsz = 64, .bufptr = msg_pool };
    T_CCYC ccyc = { .exinf = 0, .cyhdr = cyclic, .cyctim = 2, .cycphs = 1 };

    tk_puts("create kernel objects\n");
    g_sem = tk_cre_sem(&csem);
    g_timeout_sem = tk_cre_sem(&timeout_sem);
    g_flag = tk_cre_flg(&cflg);
    g_mbx = tk_cre_mbx(&cmbx);
    g_mtx = tk_cre_mtx(&cmtx);
    g_mbf = tk_cre_mbf(&cmbf);
    g_mpf = tk_cre_mpf(&cmpf);
    g_cyc = tk_cre_cyc(&ccyc);
    if (g_sem < 0 || g_timeout_sem < 0 || g_flag < 0 || g_mbx < 0 ||
        g_mtx < 0 || g_mbf < 0 || g_mpf < 0 ||
        g_cyc < 0 || tk_sta_cyc(g_cyc) != E_OK) {
        tk_puts("object create failed\n");
        tk_kernel_exit(1);
    }

    create_task(monitor, 1, monitor_stack, sizeof(monitor_stack));
    create_task(preempt_waiter, 2, preempt_stack, sizeof(preempt_stack));
    create_task(high_mutex_task, 2, high_mutex_stack, sizeof(high_mutex_stack));
    create_task(low_mutex_task, 3, low_mutex_stack, sizeof(low_mutex_stack));
    create_task(worker, 4, worker_stack, sizeof(worker_stack));
    create_task(producer, 5, producer_stack, sizeof(producer_stack));
    create_task(cpu_hog, 6, hog_stack, sizeof(hog_stack));
}
