#include "tkernel.h"

#define UART0 0x10000000UL
#define POWEROFF 0x00100000UL
#define MAX_TASKS 8
#define MAX_SEMS 8
#define MAX_FLAGS 8
#define MAX_MBX 8
#define MAX_MTX 8
#define MAX_MBF 8
#define MAX_MPF 8
#define MAX_CYC 8
#define STACK_ALIGN 16UL
#define CLINT_MTIMECMP 0x02004000UL
#define CLINT_MTIME 0x0200bff8UL
#define TIMER_INTERVAL 1UL

typedef struct {
    uint64_t pc;
    uint64_t x[32];
} context_t;

typedef enum {
    TS_DORMANT,
    TS_READY,
    TS_RUNNING,
    TS_WAIT_DELAY,
    TS_WAIT_SLEEP,
    TS_WAIT_SEM,
    TS_WAIT_FLG,
    TS_WAIT_MBX,
    TS_WAIT_MTX,
    TS_WAIT_MBF,
    TS_WAIT_MPF,
    TS_EXITED,
} task_state_t;

typedef struct {
    context_t ctx;
    FP entry;
    INTEXINF exinf;
    PRI base_pri;
    PRI pri;
    uint8_t *stack;
    size_t stack_size;
    uint64_t wake_tick;
    task_state_t state;
    ID wait_id;
    FLGPTN wait_pattern;
    uint32_t wait_mode;
    int has_timeout;
    ER wait_status;
    FLGPTN *wait_result;
    T_MSG **wait_msg;
    void **wait_block;
    void *wait_buf;
    int32_t *wait_msgsz;
} tcb_t;

typedef struct {
    int32_t count;
    int32_t max;
    int used;
} sem_t;

typedef struct {
    FLGPTN pattern;
    int used;
} flag_t;

typedef struct {
    T_MSG *head;
    T_MSG *tail;
    int used;
} mbx_t;

typedef struct {
    tcb_t *owner;
    int used;
} mtx_t;

typedef struct {
    uint8_t *buf;
    int32_t size;
    int32_t max_msg;
    int32_t head;
    int32_t tail;
    int32_t used_bytes;
    int used;
} mbf_t;

typedef struct block_link {
    struct block_link *next;
} block_link_t;

typedef struct {
    uint8_t *buffer;
    block_link_t *free_list;
    int32_t blocks;
    int32_t block_size;
    int used;
} mpf_t;

typedef struct {
    INTEXINF exinf;
    CYCHDR handler;
    RELTIM period;
    uint64_t next_tick;
    int active;
    int used;
} cyc_t;

extern void tk_context_switch(context_t *old_ctx, context_t *new_ctx);
extern void tk_app_main(void);

static context_t g_sched_ctx;
static tcb_t g_tasks[MAX_TASKS];
static sem_t g_sems[MAX_SEMS];
static flag_t g_flags[MAX_FLAGS];
static mbx_t g_mbx[MAX_MBX];
static mtx_t g_mtx[MAX_MTX];
static mbf_t g_mbf[MAX_MBF];
static mpf_t g_mpf[MAX_MPF];
static cyc_t g_cycs[MAX_CYC];
static tcb_t *g_current;
static uint64_t g_tick;
static uint64_t g_timer_irq_count;
static int g_running;

static void *mem_set(void *dst, int c, size_t n) {
    unsigned char *p = (unsigned char*)dst;
    while (n--) {
        *p++ = (unsigned char)c;
    }
    return dst;
}

static void *mem_copy(void *dst, const void *src, size_t n) {
    unsigned char *d = (unsigned char*)dst;
    const unsigned char *s = (const unsigned char*)src;
    while (n--) {
        *d++ = *s++;
    }
    return dst;
}

static uint64_t read_mtime(void) {
    volatile uint64_t *mtime = (volatile uint64_t*)CLINT_MTIME;
    return *mtime;
}

static void set_mtimecmp(uint64_t value) {
    volatile uint64_t *mtimecmp = (volatile uint64_t*)CLINT_MTIMECMP;
    *mtimecmp = value;
}

static void write_csr_mtvec(uint64_t value) {
    __asm__ volatile("csrw mtvec, %0" :: "r"(value));
}

static void write_csr_mie(uint64_t value) {
    __asm__ volatile("csrw mie, %0" :: "r"(value));
}

static void enable_machine_interrupts(void) {
    uint64_t bits = 1UL << 3;
    __asm__ volatile("csrs mstatus, %0" :: "r"(bits) : "memory");
}

static uint64_t read_csr_mcause(void) {
    uint64_t value;
    __asm__ volatile("csrr %0, mcause" : "=r"(value));
    return value;
}

extern void tk_trap_entry(void);

void tk_putchar(int ch) {
    volatile uint8_t *uart = (volatile uint8_t*)UART0;
    *uart = (uint8_t)ch;
}

void tk_puts(const char *s) {
    while (*s) {
        if (*s == '\n') {
            tk_putchar('\r');
        }
        tk_putchar(*s++);
    }
}

void tk_puthex(uint64_t v) {
    static const char *hex = "0123456789abcdef";
    tk_puts("0x");
    for (int i = 60; i >= 0; i -= 4) {
        tk_putchar(hex[(v >> i) & 0xf]);
    }
}

void tk_kernel_exit(int code) {
    volatile uint32_t *power = (volatile uint32_t*)POWEROFF;
    *power = (uint32_t)code;
    for (;;) {
    }
}

static int valid_task(ID id) {
    return id > 0 && id <= MAX_TASKS && g_tasks[id - 1].entry != 0;
}

static int valid_sem(ID id) {
    return id > 0 && id <= MAX_SEMS && g_sems[id - 1].used;
}

static int valid_flag(ID id) {
    return id > 0 && id <= MAX_FLAGS && g_flags[id - 1].used;
}

static int valid_mbx(ID id) {
    return id > 0 && id <= MAX_MBX && g_mbx[id - 1].used;
}

static int valid_mtx(ID id) {
    return id > 0 && id <= MAX_MTX && g_mtx[id - 1].used;
}

static int valid_mbf(ID id) {
    return id > 0 && id <= MAX_MBF && g_mbf[id - 1].used;
}

static int valid_mpf(ID id) {
    return id > 0 && id <= MAX_MPF && g_mpf[id - 1].used;
}

static void recompute_inherited_priorities(void) {
    for (int i = 0; i < MAX_TASKS; i++) {
        if (g_tasks[i].entry && g_tasks[i].state != TS_EXITED) {
            g_tasks[i].pri = g_tasks[i].base_pri;
        }
    }

    for (int mid = 1; mid <= MAX_MTX; mid++) {
        mtx_t *m = &g_mtx[mid - 1];
        if (!m->used || !m->owner) {
            continue;
        }
        for (int i = 0; i < MAX_TASKS; i++) {
            tcb_t *t = &g_tasks[i];
            if (t->state == TS_WAIT_MTX && t->wait_id == mid && t->pri < m->owner->pri) {
                m->owner->pri = t->pri;
            }
        }
    }
}

static ER prepare_timeout(TMO tmout) {
    if (tmout == TMO_POL) {
        return E_TMOUT;
    }
    g_current->has_timeout = tmout != TMO_FEVR;
    if (g_current->has_timeout) {
        if (tmout < 0) {
            return E_PAR;
        }
        g_current->wake_tick = g_tick + (uint64_t)tmout + 1;
    }
    g_current->wait_status = E_OK;
    return E_OK;
}

static void finish_wait_success(tcb_t *t) {
    t->has_timeout = 0;
    t->wait_status = E_OK;
    t->state = TS_READY;
}

static int flag_matches(FLGPTN cur, FLGPTN want, uint32_t mode) {
    if ((mode & TWF_ORW) != 0) {
        return (cur & want) != 0;
    }
    return (cur & want) == want;
}

static void task_trampoline(void) {
    if (g_current && g_current->entry) {
        g_current->entry(g_current->exinf);
    }
    tk_ext_tsk();
}

static void make_context(tcb_t *t) {
    uintptr_t top = (uintptr_t)t->stack + t->stack_size;
    top &= ~(STACK_ALIGN - 1);
    mem_set(&t->ctx, 0, sizeof(t->ctx));
    t->ctx.pc = (uint64_t)(uintptr_t)task_trampoline;
    t->ctx.x[2] = (uint64_t)top;
}

static void update_waiters(void) {
    for (int i = 0; i < MAX_CYC; i++) {
        cyc_t *c = &g_cycs[i];
        if (!c->used || !c->active || c->period <= 0) {
            continue;
        }
        if (g_tick >= c->next_tick) {
            c->next_tick = g_tick + (uint64_t)c->period;
            c->handler(c->exinf);
        }
    }

    for (int i = 0; i < MAX_TASKS; i++) {
        tcb_t *t = &g_tasks[i];
        if (t->state == TS_WAIT_DELAY && g_tick >= t->wake_tick) {
            t->state = TS_READY;
        }
        if (t->has_timeout && g_tick >= t->wake_tick) {
            t->has_timeout = 0;
            t->wait_status = E_TMOUT;
            t->wait_id = 0;
            t->wait_msg = 0;
            t->wait_block = 0;
            t->wait_buf = 0;
            t->wait_msgsz = 0;
            t->wait_result = 0;
            t->state = TS_READY;
        }
    }
    recompute_inherited_priorities();
}

static tcb_t *pick_next_task(void) {
    tcb_t *best = 0;
    for (int i = 0; i < MAX_TASKS; i++) {
        tcb_t *t = &g_tasks[i];
        if (t->state != TS_READY) {
            continue;
        }
        if (!best || t->pri < best->pri || (t->pri == best->pri && t < best)) {
            best = t;
        }
    }
    return best;
}

context_t *tk_timer_trap(context_t *frame) {
    uint64_t cause = read_csr_mcause();
    if ((cause >> 63) == 0 || (cause & 0xfff) != 7) {
        tk_puts("unexpected trap mcause=");
        tk_puthex(cause);
        tk_puts("\n");
        tk_kernel_exit(2);
    }

    g_timer_irq_count++;
    g_tick++;
    set_mtimecmp(read_mtime() + TIMER_INTERVAL);

    if (!g_current) {
        update_waiters();
        return frame;
    }

    mem_copy(&g_current->ctx, frame, sizeof(context_t));
    if (g_current->state == TS_RUNNING) {
        g_current->state = TS_READY;
    }

    update_waiters();
    tcb_t *next = pick_next_task();
    if (!next) {
        next = g_current;
    }
    g_current = next;
    next->state = TS_RUNNING;
    return &next->ctx;
}

static void dispatch(void) {
    g_tick++;
    update_waiters();
    tcb_t *prev = g_current;
    tcb_t *next = pick_next_task();
    if (!next) {
        return;
    }
    g_current = next;
    next->state = TS_RUNNING;
    if (prev && prev->state == TS_RUNNING) {
        prev->state = TS_READY;
    }
    tk_context_switch(prev ? &prev->ctx : &g_sched_ctx, &next->ctx);
}

ID tk_cre_tsk(const T_CTSK *pk_ctsk) {
    if (!pk_ctsk || !pk_ctsk->task || !pk_ctsk->stk || pk_ctsk->stksz < 256) {
        return E_PAR;
    }
    for (int i = 0; i < MAX_TASKS; i++) {
        tcb_t *t = &g_tasks[i];
        if (t->entry) {
            continue;
        }
        mem_set(t, 0, sizeof(*t));
        t->entry = pk_ctsk->task;
        t->exinf = pk_ctsk->exinf;
        t->base_pri = pk_ctsk->itskpri;
        t->pri = pk_ctsk->itskpri;
        t->stack = (uint8_t*)pk_ctsk->stk;
        t->stack_size = pk_ctsk->stksz;
        t->state = TS_DORMANT;
        make_context(t);
        return i + 1;
    }
    return E_LIMIT;
}

ER tk_sta_tsk(ID tskid, INTEXINF stacd) {
    if (!valid_task(tskid)) {
        return E_ID;
    }
    tcb_t *t = &g_tasks[tskid - 1];
    if (t->state != TS_DORMANT && t->state != TS_EXITED) {
        return E_OBJ;
    }
    t->exinf = stacd ? stacd : t->exinf;
    t->state = TS_READY;
    make_context(t);
    return E_OK;
}

void tk_ext_tsk(void) {
    if (!g_current) {
        tk_kernel_exit(1);
    }
    g_current->state = TS_EXITED;
    tcb_t *old = g_current;
    g_current = 0;
    tk_context_switch(&old->ctx, &g_sched_ctx);
    tk_kernel_exit(1);
}

ID tk_get_tid(void) {
    if (!g_current) {
        return 0;
    }
    return (ID)(g_current - g_tasks) + 1;
}

PRI tk_get_pri(ID tskid) {
    if (!valid_task(tskid)) {
        return E_ID;
    }
    return g_tasks[tskid - 1].pri;
}

ER tk_dly_tsk(RELTIM dlytim) {
    if (!g_current || dlytim < 0) {
        return E_PAR;
    }
    g_current->wake_tick = g_tick + (uint64_t)dlytim + 1;
    g_current->state = TS_WAIT_DELAY;
    dispatch();
    return E_OK;
}

ER tk_slp_tsk(void) {
    if (!g_current) {
        return E_PAR;
    }
    g_current->state = TS_WAIT_SLEEP;
    dispatch();
    return E_OK;
}

ER tk_wup_tsk(ID tskid) {
    if (!valid_task(tskid)) {
        return E_ID;
    }
    tcb_t *t = &g_tasks[tskid - 1];
    if (t->state == TS_WAIT_SLEEP) {
        t->state = TS_READY;
    }
    return E_OK;
}

ID tk_cre_sem(const T_CSEM *pk_csem) {
    if (!pk_csem || pk_csem->isemcnt < 0 || pk_csem->maxsem <= 0 ||
        pk_csem->isemcnt > pk_csem->maxsem) {
        return E_PAR;
    }
    for (int i = 0; i < MAX_SEMS; i++) {
        if (g_sems[i].used) {
            continue;
        }
        g_sems[i].used = 1;
        g_sems[i].count = pk_csem->isemcnt;
        g_sems[i].max = pk_csem->maxsem;
        return i + 1;
    }
    return E_LIMIT;
}

ER tk_sig_sem(ID semid) {
    if (!valid_sem(semid)) {
        return E_ID;
    }
    sem_t *s = &g_sems[semid - 1];
    tcb_t *best = 0;
    for (int i = 0; i < MAX_TASKS; i++) {
        tcb_t *t = &g_tasks[i];
        if (t->state == TS_WAIT_SEM && t->wait_id == semid) {
            if (!best || t->pri < best->pri) {
                best = t;
            }
        }
    }
    if (best) {
        finish_wait_success(best);
    } else if (s->count < s->max) {
        s->count++;
    }
    return E_OK;
}

ER tk_wai_sem_tmo(ID semid, TMO tmout) {
    if (!g_current || !valid_sem(semid)) {
        return E_ID;
    }
    sem_t *s = &g_sems[semid - 1];
    if (s->count > 0) {
        s->count--;
        return E_OK;
    }
    ER er = prepare_timeout(tmout);
    if (er != E_OK) {
        return er;
    }
    g_current->wait_id = semid;
    g_current->state = TS_WAIT_SEM;
    dispatch();
    return g_current->wait_status;
}

ER tk_wai_sem(ID semid) {
    return tk_wai_sem_tmo(semid, TMO_FEVR);
}

ID tk_cre_flg(const T_CFLG *pk_cflg) {
    if (!pk_cflg) {
        return E_PAR;
    }
    for (int i = 0; i < MAX_FLAGS; i++) {
        if (g_flags[i].used) {
            continue;
        }
        g_flags[i].used = 1;
        g_flags[i].pattern = pk_cflg->iflgptn;
        return i + 1;
    }
    return E_LIMIT;
}

ER tk_set_flg(ID flgid, FLGPTN setptn) {
    if (!valid_flag(flgid)) {
        return E_ID;
    }
    flag_t *f = &g_flags[flgid - 1];
    f->pattern |= setptn;
    for (int i = 0; i < MAX_TASKS; i++) {
        tcb_t *t = &g_tasks[i];
        if (t->state != TS_WAIT_FLG || t->wait_id != flgid) {
            continue;
        }
        if (!flag_matches(f->pattern, t->wait_pattern, t->wait_mode)) {
            continue;
        }
        if (t->wait_result) {
            *t->wait_result = f->pattern;
        }
        if (t->wait_mode & TWF_CLR) {
            f->pattern = 0;
        }
        finish_wait_success(t);
    }
    return E_OK;
}

ER tk_wai_flg_tmo(ID flgid, FLGPTN waiptn, uint32_t wfmode, FLGPTN *p_flgptn, TMO tmout) {
    if (!g_current || !valid_flag(flgid) || waiptn == 0) {
        return E_PAR;
    }
    flag_t *f = &g_flags[flgid - 1];
    if (flag_matches(f->pattern, waiptn, wfmode)) {
        if (p_flgptn) {
            *p_flgptn = f->pattern;
        }
        if (wfmode & TWF_CLR) {
            f->pattern = 0;
        }
        return E_OK;
    }
    ER er = prepare_timeout(tmout);
    if (er != E_OK) {
        return er;
    }
    g_current->wait_id = flgid;
    g_current->wait_pattern = waiptn;
    g_current->wait_mode = wfmode;
    g_current->wait_result = p_flgptn;
    g_current->state = TS_WAIT_FLG;
    dispatch();
    return g_current->wait_status;
}

ER tk_wai_flg(ID flgid, FLGPTN waiptn, uint32_t wfmode, FLGPTN *p_flgptn) {
    return tk_wai_flg_tmo(flgid, waiptn, wfmode, p_flgptn, TMO_FEVR);
}

ID tk_cre_mtx(const T_CMTX *pk_cmtx) {
    (void)pk_cmtx;
    for (int i = 0; i < MAX_MTX; i++) {
        if (g_mtx[i].used) {
            continue;
        }
        g_mtx[i].used = 1;
        g_mtx[i].owner = 0;
        return i + 1;
    }
    return E_LIMIT;
}

ER tk_loc_mtx_tmo(ID mtxid, TMO tmout) {
    if (!g_current || !valid_mtx(mtxid)) {
        return E_ID;
    }
    mtx_t *m = &g_mtx[mtxid - 1];
    if (!m->owner) {
        m->owner = g_current;
        return E_OK;
    }
    if (m->owner == g_current) {
        return E_OBJ;
    }
    ER er = prepare_timeout(tmout);
    if (er != E_OK) {
        return er;
    }
    g_current->wait_id = mtxid;
    g_current->state = TS_WAIT_MTX;
    if (g_current->pri < m->owner->pri) {
        m->owner->pri = g_current->pri;
    }
    dispatch();
    return g_current->wait_status;
}

ER tk_loc_mtx(ID mtxid) {
    return tk_loc_mtx_tmo(mtxid, TMO_FEVR);
}

ER tk_unl_mtx(ID mtxid) {
    if (!g_current || !valid_mtx(mtxid)) {
        return E_ID;
    }
    mtx_t *m = &g_mtx[mtxid - 1];
    if (m->owner != g_current) {
        return E_OBJ;
    }

    tcb_t *best = 0;
    for (int i = 0; i < MAX_TASKS; i++) {
        tcb_t *t = &g_tasks[i];
        if (t->state == TS_WAIT_MTX && t->wait_id == mtxid) {
            if (!best || t->pri < best->pri) {
                best = t;
            }
        }
    }

    if (best) {
        m->owner = best;
        finish_wait_success(best);
    } else {
        m->owner = 0;
    }
    recompute_inherited_priorities();
    return E_OK;
}

ID tk_cre_mbx(const T_CMBX *pk_cmbx) {
    (void)pk_cmbx;
    for (int i = 0; i < MAX_MBX; i++) {
        if (g_mbx[i].used) {
            continue;
        }
        g_mbx[i].used = 1;
        g_mbx[i].head = 0;
        g_mbx[i].tail = 0;
        return i + 1;
    }
    return E_LIMIT;
}

ER tk_snd_mbx(ID mbxid, T_MSG *pk_msg) {
    if (!valid_mbx(mbxid) || !pk_msg) {
        return E_PAR;
    }
    mbx_t *m = &g_mbx[mbxid - 1];
    tcb_t *best = 0;
    for (int i = 0; i < MAX_TASKS; i++) {
        tcb_t *t = &g_tasks[i];
        if (t->state == TS_WAIT_MBX && t->wait_id == mbxid) {
            if (!best || t->pri < best->pri) {
                best = t;
            }
        }
    }
    pk_msg->next = 0;
    if (best) {
        if (best->wait_msg) {
            *best->wait_msg = pk_msg;
        }
        finish_wait_success(best);
        return E_OK;
    }
    if (m->tail) {
        m->tail->next = pk_msg;
    } else {
        m->head = pk_msg;
    }
    m->tail = pk_msg;
    return E_OK;
}

ER tk_rcv_mbx_tmo(ID mbxid, T_MSG **ppk_msg, TMO tmout) {
    if (!g_current || !valid_mbx(mbxid) || !ppk_msg) {
        return E_PAR;
    }
    mbx_t *m = &g_mbx[mbxid - 1];
    if (m->head) {
        T_MSG *msg = m->head;
        m->head = msg->next;
        if (!m->head) {
            m->tail = 0;
        }
        msg->next = 0;
        *ppk_msg = msg;
        return E_OK;
    }
    ER er = prepare_timeout(tmout);
    if (er != E_OK) {
        return er;
    }
    g_current->wait_id = mbxid;
    g_current->wait_msg = ppk_msg;
    g_current->state = TS_WAIT_MBX;
    dispatch();
    return g_current->wait_status;
}

ER tk_rcv_mbx(ID mbxid, T_MSG **ppk_msg) {
    return tk_rcv_mbx_tmo(mbxid, ppk_msg, TMO_FEVR);
}

static void mbf_write_byte(mbf_t *m, uint8_t value) {
    m->buf[m->tail] = value;
    m->tail = (m->tail + 1) % m->size;
    m->used_bytes++;
}

static uint8_t mbf_read_byte(mbf_t *m) {
    uint8_t value = m->buf[m->head];
    m->head = (m->head + 1) % m->size;
    m->used_bytes--;
    return value;
}

static void mbf_write_i32(mbf_t *m, int32_t value) {
    for (int i = 0; i < 4; i++) {
        mbf_write_byte(m, (uint8_t)(((uint32_t)value >> (i * 8)) & 0xff));
    }
}

static int32_t mbf_read_i32(mbf_t *m) {
    uint32_t value = 0;
    for (int i = 0; i < 4; i++) {
        value |= (uint32_t)mbf_read_byte(m) << (i * 8);
    }
    return (int32_t)value;
}

ID tk_cre_mbf(const T_CMBF *pk_cmbf) {
    if (!pk_cmbf || !pk_cmbf->bufptr || pk_cmbf->bufsz < 8 ||
        pk_cmbf->maxmsz <= 0 || pk_cmbf->maxmsz + 4 > pk_cmbf->bufsz) {
        return E_PAR;
    }
    for (int i = 0; i < MAX_MBF; i++) {
        mbf_t *m = &g_mbf[i];
        if (m->used) {
            continue;
        }
        m->used = 1;
        m->buf = (uint8_t*)pk_cmbf->bufptr;
        m->size = pk_cmbf->bufsz;
        m->max_msg = pk_cmbf->maxmsz;
        m->head = 0;
        m->tail = 0;
        m->used_bytes = 0;
        return i + 1;
    }
    return E_LIMIT;
}

ER tk_snd_mbf(ID mbfid, const void *msg, int32_t msgsz) {
    if (!valid_mbf(mbfid) || !msg || msgsz < 0) {
        return E_PAR;
    }
    mbf_t *m = &g_mbf[mbfid - 1];
    if (msgsz > m->max_msg) {
        return E_PAR;
    }

    tcb_t *best = 0;
    for (int i = 0; i < MAX_TASKS; i++) {
        tcb_t *t = &g_tasks[i];
        if (t->state == TS_WAIT_MBF && t->wait_id == mbfid) {
            if (!best || t->pri < best->pri) {
                best = t;
            }
        }
    }
    if (best) {
        mem_copy(best->wait_buf, msg, (size_t)msgsz);
        if (best->wait_msgsz) {
            *best->wait_msgsz = msgsz;
        }
        finish_wait_success(best);
        return E_OK;
    }

    if (m->size - m->used_bytes < msgsz + 4) {
        return E_LIMIT;
    }
    mbf_write_i32(m, msgsz);
    const uint8_t *p = (const uint8_t*)msg;
    for (int32_t i = 0; i < msgsz; i++) {
        mbf_write_byte(m, p[i]);
    }
    return E_OK;
}

ER tk_rcv_mbf_tmo(ID mbfid, void *msg, int32_t *p_msgsz, TMO tmout) {
    if (!g_current || !valid_mbf(mbfid) || !msg || !p_msgsz) {
        return E_PAR;
    }
    mbf_t *m = &g_mbf[mbfid - 1];
    if (m->used_bytes >= 4) {
        int32_t msgsz = mbf_read_i32(m);
        for (int32_t i = 0; i < msgsz; i++) {
            ((uint8_t*)msg)[i] = mbf_read_byte(m);
        }
        *p_msgsz = msgsz;
        return E_OK;
    }

    ER er = prepare_timeout(tmout);
    if (er != E_OK) {
        return er;
    }
    g_current->wait_id = mbfid;
    g_current->wait_buf = msg;
    g_current->wait_msgsz = p_msgsz;
    g_current->state = TS_WAIT_MBF;
    dispatch();
    return g_current->wait_status;
}

ER tk_rcv_mbf(ID mbfid, void *msg, int32_t *p_msgsz) {
    return tk_rcv_mbf_tmo(mbfid, msg, p_msgsz, TMO_FEVR);
}

ID tk_cre_mpf(const T_CMPF *pk_cmpf) {
    if (!pk_cmpf || pk_cmpf->mpfcnt <= 0 || pk_cmpf->blfsz < (int32_t)sizeof(block_link_t) ||
        !pk_cmpf->bufptr) {
        return E_PAR;
    }
    for (int i = 0; i < MAX_MPF; i++) {
        mpf_t *p = &g_mpf[i];
        if (p->used) {
            continue;
        }
        int32_t block_size = (pk_cmpf->blfsz + 15) & ~15;
        uint8_t *buf = (uint8_t*)pk_cmpf->bufptr;
        p->used = 1;
        p->buffer = buf;
        p->blocks = pk_cmpf->mpfcnt;
        p->block_size = block_size;
        p->free_list = 0;
        for (int32_t n = 0; n < pk_cmpf->mpfcnt; n++) {
            block_link_t *b = (block_link_t*)(buf + (size_t)n * (size_t)block_size);
            b->next = p->free_list;
            p->free_list = b;
        }
        return i + 1;
    }
    return E_LIMIT;
}

ER tk_get_mpf_tmo(ID mpfid, void **p_blf, TMO tmout) {
    if (!g_current || !valid_mpf(mpfid) || !p_blf) {
        return E_PAR;
    }
    mpf_t *p = &g_mpf[mpfid - 1];
    if (p->free_list) {
        block_link_t *b = p->free_list;
        p->free_list = b->next;
        *p_blf = b;
        return E_OK;
    }
    ER er = prepare_timeout(tmout);
    if (er != E_OK) {
        return er;
    }
    g_current->wait_id = mpfid;
    g_current->wait_block = p_blf;
    g_current->state = TS_WAIT_MPF;
    dispatch();
    return g_current->wait_status;
}

ER tk_get_mpf(ID mpfid, void **p_blf) {
    return tk_get_mpf_tmo(mpfid, p_blf, TMO_FEVR);
}

ER tk_rel_mpf(ID mpfid, void *blf) {
    if (!valid_mpf(mpfid) || !blf) {
        return E_PAR;
    }
    mpf_t *p = &g_mpf[mpfid - 1];
    tcb_t *best = 0;
    for (int i = 0; i < MAX_TASKS; i++) {
        tcb_t *t = &g_tasks[i];
        if (t->state == TS_WAIT_MPF && t->wait_id == mpfid) {
            if (!best || t->pri < best->pri) {
                best = t;
            }
        }
    }
    if (best) {
        if (best->wait_block) {
            *best->wait_block = blf;
        }
        finish_wait_success(best);
        return E_OK;
    }
    block_link_t *b = (block_link_t*)blf;
    b->next = p->free_list;
    p->free_list = b;
    return E_OK;
}

ID tk_cre_cyc(const T_CCYC *pk_ccyc) {
    if (!pk_ccyc || !pk_ccyc->cyhdr || pk_ccyc->cyctim <= 0) {
        return E_PAR;
    }
    for (int i = 0; i < MAX_CYC; i++) {
        cyc_t *c = &g_cycs[i];
        if (c->used) {
            continue;
        }
        c->used = 1;
        c->active = 0;
        c->exinf = pk_ccyc->exinf;
        c->handler = pk_ccyc->cyhdr;
        c->period = pk_ccyc->cyctim;
        c->next_tick = g_tick + (uint64_t)pk_ccyc->cycphs;
        return i + 1;
    }
    return E_LIMIT;
}

ER tk_sta_cyc(ID cycid) {
    if (cycid <= 0 || cycid > MAX_CYC || !g_cycs[cycid - 1].used) {
        return E_ID;
    }
    cyc_t *c = &g_cycs[cycid - 1];
    c->active = 1;
    c->next_tick = g_tick + (uint64_t)c->period;
    return E_OK;
}

ER tk_stp_cyc(ID cycid) {
    if (cycid <= 0 || cycid > MAX_CYC || !g_cycs[cycid - 1].used) {
        return E_ID;
    }
    g_cycs[cycid - 1].active = 0;
    return E_OK;
}

uint64_t tk_get_tick(void) {
    return g_tick;
}

uint64_t tk_get_timer_irq_count(void) {
    return g_timer_irq_count;
}

static void timer_start(void) {
    write_csr_mtvec((uint64_t)(uintptr_t)tk_trap_entry);
    write_csr_mie(1UL << 7);
    set_mtimecmp(read_mtime() + TIMER_INTERVAL);
    enable_machine_interrupts();
}

void tk_start(void) {
    g_running = 1;
    timer_start();
    while (g_running) {
        tcb_t *next = pick_next_task();
        if (!next) {
            g_tick++;
            update_waiters();
            continue;
        }
        g_current = next;
        next->state = TS_RUNNING;
        tk_context_switch(&g_sched_ctx, &next->ctx);
    }
}

void tk_boot(void) {
    mem_set(g_tasks, 0, sizeof(g_tasks));
    mem_set(g_sems, 0, sizeof(g_sems));
    mem_set(g_flags, 0, sizeof(g_flags));
    mem_set(g_mbx, 0, sizeof(g_mbx));
    mem_set(g_mtx, 0, sizeof(g_mtx));
    mem_set(g_mbf, 0, sizeof(g_mbf));
    mem_set(g_mpf, 0, sizeof(g_mpf));
    mem_set(g_cycs, 0, sizeof(g_cycs));
    g_current = 0;
    g_tick = 0;
    g_timer_irq_count = 0;
    g_running = 0;

    tk_puts("\nMINUX9 riscv-emu uT-Kernel boot\n");
    tk_app_main();
    tk_start();
    tk_kernel_exit(0);
}
