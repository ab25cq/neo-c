#include "neo-c.h"

#define PICO_UART0_DR 0x40034000u
#define PICO_EMU_EXIT 0x40000000u
#define PICO_SYST_CVR 0xe000e018u

#define MAX_TASKS 8
#define MAX_SEMS 4
#define MAX_FLGS 4
#define MAX_MBX 4

#define E_OK 0
#define E_ID (-18)
#define E_NOEXS (-52)
#define E_LIMIT (-34)
#define E_TMOUT (-50)

#define TA_HLNG 0
#define TWF_ANDW 0x00
#define TWF_ORW 0x01
#define TWF_CLR 0x10

typedef int32_t ER;
typedef int32_t ID;
typedef int32_t PRI;
typedef uint32_t ATR;
typedef uint32_t RELTIM;
typedef uint32_t FLGPTN;
typedef intptr_t INTEXINF;
typedef void (*FP)(INTEXINF exinf);

typedef struct {
    ATR tskatr;
    INTEXINF exinf;
    FP task;
    PRI itskpri;
    void *stk;
    int32_t stksz;
} T_CTSK;

typedef struct {
    ATR sematr;
    int32_t isemcnt;
    int32_t maxsem;
} T_CSEM;

typedef struct {
    ATR flgatr;
    FLGPTN iflgptn;
} T_CFLG;

typedef struct T_MSG {
    struct T_MSG *next;
} T_MSG;

typedef struct {
    ATR mbxatr;
} T_CMBX;

typedef enum {
    TS_DORMANT,
    TS_READY,
    TS_RUNNING,
    TS_EXITED
} task_state_t;

typedef struct {
    FP task;
    INTEXINF exinf;
    PRI pri;
    task_state_t state;
} tcb_t;

typedef struct {
    int32_t count;
    int32_t max;
    int used;
} sem_t;

typedef struct {
    FLGPTN pattern;
    int used;
} flg_t;

typedef struct {
    T_MSG *head;
    T_MSG *tail;
    int used;
} mbx_t;

extern uint32_t __bss_start__;
extern uint32_t __bss_end__;

static tcb_t g_tasks[MAX_TASKS];
static sem_t g_sems[MAX_SEMS];
static flg_t g_flgs[MAX_FLGS];
static mbx_t g_mbx[MAX_MBX];
static uint32_t g_tick;
static ID g_current_tid;

static ID g_sem;
static ID g_flag;
static ID g_mbox;
static int g_msg_value;
static int g_worker_sum;

static void mmio_write32(uint32_t addr, uint32_t value)
{
    volatile uint32_t *p = (volatile uint32_t*)addr;
    *p = value;
}

void tk_putchar(int ch)
{
    volatile uint32_t *uart = (volatile uint32_t*)PICO_UART0_DR;
    *uart = (uint32_t)(uint8_t)ch;
}

void putchar(char ch)
{
    tk_putchar((int)ch);
}

void tk_puts(const char *s)
{
    while (*s != 0) {
        if (*s == '\n') {
            tk_putchar('\r');
        }
        tk_putchar((int)*s);
        s++;
    }
}

void tk_puthex(uint32_t value)
{
    static const char *hex = "0123456789abcdef";
    tk_puts("0x");
    for (int i = 28; i >= 0; i -= 4) {
        tk_putchar(hex[(value >> i) & 0xfu]);
    }
}

void tk_kernel_exit(int code)
{
    mmio_write32(PICO_EMU_EXIT, (uint32_t)code);
    for (;;) {
    }
}

static int valid_task(ID id)
{
    return id > 0 && id <= MAX_TASKS && g_tasks[id - 1].task != 0;
}

static int valid_sem(ID id)
{
    return id > 0 && id <= MAX_SEMS && g_sems[id - 1].used != 0;
}

static int valid_flg(ID id)
{
    return id > 0 && id <= MAX_FLGS && g_flgs[id - 1].used != 0;
}

static int valid_mbx(ID id)
{
    return id > 0 && id <= MAX_MBX && g_mbx[id - 1].used != 0;
}

ID tk_cre_tsk(const T_CTSK *pk_ctsk)
{
    for (int i = 0; i < MAX_TASKS; i++) {
        if (g_tasks[i].task == 0) {
            g_tasks[i].task = pk_ctsk->task;
            g_tasks[i].exinf = pk_ctsk->exinf;
            g_tasks[i].pri = pk_ctsk->itskpri;
            g_tasks[i].state = TS_DORMANT;
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_sta_tsk(ID tskid, INTEXINF stacd)
{
    if (!valid_task(tskid)) {
        return E_ID;
    }
    g_tasks[tskid - 1].exinf = stacd;
    g_tasks[tskid - 1].state = TS_READY;
    return E_OK;
}

void tk_ext_tsk(void)
{
    if (valid_task(g_current_tid)) {
        g_tasks[g_current_tid - 1].state = TS_EXITED;
    }
}

void tk_dly_tsk(RELTIM dlytim)
{
    g_tick += dlytim;
    mmio_write32(PICO_SYST_CVR, g_tick);
}

uint32_t tk_get_tick(void)
{
    return g_tick;
}

ID tk_get_tid(void)
{
    return g_current_tid;
}

ID tk_cre_sem(const T_CSEM *pk_csem)
{
    for (int i = 0; i < MAX_SEMS; i++) {
        if (g_sems[i].used == 0) {
            g_sems[i].used = 1;
            g_sems[i].count = pk_csem->isemcnt;
            g_sems[i].max = pk_csem->maxsem;
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_sig_sem(ID semid)
{
    if (!valid_sem(semid)) {
        return E_ID;
    }
    sem_t *sem = &g_sems[semid - 1];
    if (sem->count < sem->max) {
        sem->count++;
    }
    return E_OK;
}

ER tk_wai_sem(ID semid)
{
    if (!valid_sem(semid)) {
        return E_ID;
    }
    sem_t *sem = &g_sems[semid - 1];
    if (sem->count <= 0) {
        return E_TMOUT;
    }
    sem->count--;
    return E_OK;
}

ID tk_cre_flg(const T_CFLG *pk_cflg)
{
    for (int i = 0; i < MAX_FLGS; i++) {
        if (g_flgs[i].used == 0) {
            g_flgs[i].used = 1;
            g_flgs[i].pattern = pk_cflg->iflgptn;
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_set_flg(ID flgid, FLGPTN setptn)
{
    if (!valid_flg(flgid)) {
        return E_ID;
    }
    g_flgs[flgid - 1].pattern |= setptn;
    return E_OK;
}

ER tk_wai_flg(ID flgid, FLGPTN waiptn, uint32_t wfmode, FLGPTN *p_flgptn)
{
    if (!valid_flg(flgid)) {
        return E_ID;
    }
    flg_t *flg = &g_flgs[flgid - 1];
    FLGPTN hit;
    if ((wfmode & TWF_ORW) != 0) {
        hit = flg->pattern & waiptn;
    }
    else {
        hit = ((flg->pattern & waiptn) == waiptn) ? waiptn : 0;
    }
    if (hit == 0) {
        return E_TMOUT;
    }
    *p_flgptn = flg->pattern;
    if ((wfmode & TWF_CLR) != 0) {
        flg->pattern = 0;
    }
    return E_OK;
}

ID tk_cre_mbx(const T_CMBX *pk_cmbx)
{
    (void)pk_cmbx;
    for (int i = 0; i < MAX_MBX; i++) {
        if (g_mbx[i].used == 0) {
            g_mbx[i].used = 1;
            g_mbx[i].head = 0;
            g_mbx[i].tail = 0;
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_snd_mbx(ID mbxid, T_MSG *pk_msg)
{
    if (!valid_mbx(mbxid)) {
        return E_ID;
    }
    mbx_t *mbx = &g_mbx[mbxid - 1];
    pk_msg->next = 0;
    if (mbx->tail != 0) {
        mbx->tail->next = pk_msg;
    }
    else {
        mbx->head = pk_msg;
    }
    mbx->tail = pk_msg;
    return E_OK;
}

ER tk_rcv_mbx(ID mbxid, T_MSG **ppk_msg)
{
    if (!valid_mbx(mbxid)) {
        return E_ID;
    }
    mbx_t *mbx = &g_mbx[mbxid - 1];
    if (mbx->head == 0) {
        return E_TMOUT;
    }
    *ppk_msg = mbx->head;
    mbx->head = mbx->head->next;
    if (mbx->head == 0) {
        mbx->tail = 0;
    }
    return E_OK;
}

static void tk_sta_ker(void)
{
    for (;;) {
        ID best = 0;
        PRI best_pri = 0x7fffffff;
        for (int i = 0; i < MAX_TASKS; i++) {
            if (g_tasks[i].state == TS_READY && g_tasks[i].pri < best_pri) {
                best = i + 1;
                best_pri = g_tasks[i].pri;
            }
        }
        if (best == 0) {
            break;
        }
        g_current_tid = best;
        g_tasks[best - 1].state = TS_RUNNING;
        FP entry = g_tasks[best - 1].task;
        INTEXINF exinf = g_tasks[best - 1].exinf;
        entry(exinf);
        if (g_tasks[best - 1].state == TS_RUNNING) {
            g_tasks[best - 1].state = TS_EXITED;
        }
    }
}

typedef struct {
    T_MSG hdr;
    int value;
} demo_msg_t;

static demo_msg_t g_msg;

static void producer_task(INTEXINF exinf)
{
    (void)exinf;
    tk_puts("task producer start\n");
    g_msg.value = 42;
    g_msg_value = 42;
    tk_snd_mbx(g_mbox, &g_msg.hdr);
    tk_sig_sem(g_sem);
    tk_set_flg(g_flag, 0x01);
    tk_dly_tsk(3);
    tk_puts("task producer done\n");
    tk_ext_tsk();
}

static void worker_task(INTEXINF exinf)
{
    (void)exinf;
    T_MSG *raw = 0;
    tk_puts("task worker start\n");
    if (tk_wai_sem(g_sem) == E_OK && tk_rcv_mbx(g_mbox, &raw) == E_OK) {
        demo_msg_t *msg = (demo_msg_t*)raw;
        g_worker_sum += msg->value;
        tk_puts("task worker got message\n");
    }
    tk_set_flg(g_flag, 0x02);
    tk_ext_tsk();
}

static void monitor_task(INTEXINF exinf)
{
    (void)exinf;
    FLGPTN pattern = 0;
    tk_puts("task monitor start\n");
    if (tk_wai_flg(g_flag, 0x03, TWF_ANDW | TWF_CLR, &pattern) != E_OK) {
        tk_puts("monitor flag wait failed\n");
        tk_kernel_exit(1);
    }
    tk_puts("monitor flags=");
    tk_puthex(pattern);
    tk_puts(" tick=");
    tk_puthex(tk_get_tick());
    tk_puts(" tid=");
    tk_puthex((uint32_t)tk_get_tid());
    tk_puts("\n");

    if (g_msg_value == 42 && g_worker_sum == 42 && pattern == 0x03) {
        tk_puts("uT-Kernel demo PASS\n");
        tk_kernel_exit(0);
    }
    tk_puts("uT-Kernel demo FAIL\n");
    tk_kernel_exit(1);
}

static void tk_app_main(void)
{
    T_CSEM csem;
    T_CFLG cflg;
    T_CMBX cmbx;
    T_CTSK ctsk;
    ID producer;
    ID worker;
    ID monitor;

    tk_puts("uT-Kernel on neo-c Pico emulator\n");

    csem.sematr = TA_HLNG;
    csem.isemcnt = 0;
    csem.maxsem = 1;
    g_sem = tk_cre_sem(&csem);

    cflg.flgatr = TA_HLNG;
    cflg.iflgptn = 0;
    g_flag = tk_cre_flg(&cflg);

    cmbx.mbxatr = TA_HLNG;
    g_mbox = tk_cre_mbx(&cmbx);

    ctsk.tskatr = TA_HLNG;
    ctsk.stk = 0;
    ctsk.stksz = 0;

    ctsk.exinf = 0;
    ctsk.task = producer_task;
    ctsk.itskpri = 1;
    producer = tk_cre_tsk(&ctsk);

    ctsk.task = worker_task;
    ctsk.itskpri = 2;
    worker = tk_cre_tsk(&ctsk);

    ctsk.task = monitor_task;
    ctsk.itskpri = 3;
    monitor = tk_cre_tsk(&ctsk);

    tk_sta_tsk(producer, 0);
    tk_sta_tsk(worker, 0);
    tk_sta_tsk(monitor, 0);
    tk_sta_ker();
    tk_kernel_exit(2);
}

void default_handler(void)
{
    tk_puts("default exception\n");
    tk_kernel_exit(3);
}

void reset_handler(void)
{
    uint32_t *p = &__bss_start__;
    while (p < &__bss_end__) {
        *p = 0;
        p++;
    }
    tk_app_main();
    tk_kernel_exit(4);
}
