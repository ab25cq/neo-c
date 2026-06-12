#include "neo-c.h"

#define PICO_UART0_DR 0x40034000u
#define PICO_EMU_EXIT 0x40000000u
#define PICO_SYST_CSR 0xe000e010u
#define PICO_SYST_RVR 0xe000e014u
#define PICO_SYST_CVR 0xe000e018u

#define MAX_TASKS 8
#define MAX_SEMS 4
#define MAX_FLGS 4
#define MAX_MBX 4
#define MAX_MTX 4
#define MAX_DTQ 4
#define MAX_PDQ 2
#define MAX_MBF 2
#define MAX_MPF 2
#define MAX_MPL 2
#define MAX_ALM 4
#define MAX_CYC 4
#define DTQ_CAPACITY 8
#define PDQ_CAPACITY 8
#define MPF_BLOCKS 4
#define MPF_BLOCK_SIZE 32
#define MBF_STORAGE_SIZE 128
#define MPL_STORAGE_SIZE 128
#define MPL_REGIONS 8

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
typedef uint32_t SYSTIM;
typedef intptr_t INTEXINF;
typedef intptr_t VP_INT;
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

typedef struct {
    ATR mtxatr;
    PRI ceilpri;
} T_CMTX;

typedef struct {
    ATR dtqatr;
    int32_t dtqcnt;
    void *dtq;
} T_CDTQ;

typedef struct {
    ATR pdqatr;
    int32_t pdqcnt;
    PRI maxdpri;
    void *pdq;
} T_CPDQ;

typedef struct {
    int32_t msgcnt;
} T_RPDQ;

typedef struct {
    ATR mbfatr;
    int32_t bufsz;
    int32_t maxmsz;
    void *bufptr;
} T_CMBF;

typedef struct {
    int32_t frbufsz;
    int32_t msgcnt;
} T_RMBF;

typedef struct {
    ATR mpfatr;
    int32_t blkcnt;
    int32_t blksz;
    void *mpf;
} T_CMPF;

typedef struct {
    ATR mplatr;
    int32_t mplsz;
    void *mpl;
} T_CMPL;

typedef struct {
    int32_t frsz;
    int32_t maxsz;
} T_RMPL;

typedef struct {
    ATR almatr;
    INTEXINF exinf;
    FP almhdr;
} T_CALM;

typedef struct {
    ATR cycatr;
    INTEXINF exinf;
    FP cychdr;
    RELTIM cyctim;
    RELTIM cycphs;
} T_CCYC;

typedef enum {
    TS_DORMANT,
    TS_READY,
    TS_RUNNING,
    TS_EXITED
} task_state_t;

typedef struct {
    task_state_t tskstat;
    PRI tskpri;
    INTEXINF exinf;
} T_RTSK;

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

typedef struct {
    ID owner;
    int locked;
    int used;
} mtx_t;

typedef struct {
    VP_INT data[DTQ_CAPACITY];
    int head;
    int tail;
    int count;
    int capacity;
    int used;
} dtq_t;

typedef struct {
    VP_INT data[PDQ_CAPACITY];
    PRI priority[PDQ_CAPACITY];
    int count;
    int capacity;
    PRI max_priority;
    int used;
} pdq_t;

typedef struct {
    uint8_t storage[MBF_STORAGE_SIZE];
    int head;
    int tail;
    int used_bytes;
    int message_count;
    int capacity;
    int max_message;
    int used;
} mbf_t;

typedef struct {
    uint8_t storage[MPF_BLOCKS * MPF_BLOCK_SIZE];
    uint8_t used_blocks[MPF_BLOCKS];
    int block_count;
    int block_size;
    int used;
} mpf_t;

typedef struct {
    uint8_t storage[MPL_STORAGE_SIZE];
    int offsets[MPL_REGIONS];
    int sizes[MPL_REGIONS];
    int allocated[MPL_REGIONS];
    int region_count;
    int pool_size;
    int used;
} mpl_t;

typedef struct {
    FP handler;
    INTEXINF exinf;
    SYSTIM due;
    int active;
    int used;
} alm_t;

typedef struct {
    FP handler;
    INTEXINF exinf;
    RELTIM interval;
    SYSTIM next;
    int active;
    int used;
} cyc_t;

extern uint32_t __bss_start__;
extern uint32_t __bss_end__;

static tcb_t g_tasks[MAX_TASKS];
static sem_t g_sems[MAX_SEMS];
static flg_t g_flgs[MAX_FLGS];
static mbx_t g_mbx[MAX_MBX];
static mtx_t g_mtx[MAX_MTX];
static dtq_t g_dtq[MAX_DTQ];
static pdq_t g_pdq[MAX_PDQ];
static mbf_t g_mbf[MAX_MBF];
static mpf_t g_mpf[MAX_MPF];
static mpl_t g_mpl[MAX_MPL];
static alm_t g_alm[MAX_ALM];
static cyc_t g_cyc[MAX_CYC];
static uint32_t g_tick;
static ID g_current_tid;

static ID g_sem;
static ID g_flag;
static ID g_mbox;
static ID g_mutex;
static ID g_dataq;
static ID g_pridataq;
static ID g_messagebuf;
static ID g_mempool;
static ID g_varpool;
static ID g_alarm;
static ID g_cyclic;
static void *g_varblock;
static int g_msg_value;
static int g_worker_sum;
static int g_pdq_score;
static int g_messagebuf_score;
static int g_varpool_score;
static int g_mutex_score;
static int g_pri_changed;
static int g_alarm_count;
static int g_cyclic_count;

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

static int valid_mtx(ID id)
{
    return id > 0 && id <= MAX_MTX && g_mtx[id - 1].used != 0;
}

static int valid_dtq(ID id)
{
    return id > 0 && id <= MAX_DTQ && g_dtq[id - 1].used != 0;
}

static int valid_pdq(ID id)
{
    return id > 0 && id <= MAX_PDQ && g_pdq[id - 1].used != 0;
}

static int valid_mbf(ID id)
{
    return id > 0 && id <= MAX_MBF && g_mbf[id - 1].used != 0;
}

static int valid_mpf(ID id)
{
    return id > 0 && id <= MAX_MPF && g_mpf[id - 1].used != 0;
}

static int valid_mpl(ID id)
{
    return id > 0 && id <= MAX_MPL && g_mpl[id - 1].used != 0;
}

static int valid_alm(ID id)
{
    return id > 0 && id <= MAX_ALM && g_alm[id - 1].used != 0;
}

static int valid_cyc(ID id)
{
    return id > 0 && id <= MAX_CYC && g_cyc[id - 1].used != 0;
}

static void process_time_events(void)
{
    for (int i = 0; i < MAX_ALM; i++) {
        if (g_alm[i].used != 0 && g_alm[i].active != 0 && g_tick >= g_alm[i].due) {
            FP handler = g_alm[i].handler;
            INTEXINF exinf = g_alm[i].exinf;
            g_alm[i].active = 0;
            handler(exinf);
        }
    }
    for (int i = 0; i < MAX_CYC; i++) {
        if (g_cyc[i].used != 0 && g_cyc[i].active != 0 && g_tick >= g_cyc[i].next) {
            FP handler = g_cyc[i].handler;
            INTEXINF exinf = g_cyc[i].exinf;
            handler(exinf);
            if (g_cyc[i].interval == 0) {
                g_cyc[i].interval = 1;
            }
            g_cyc[i].next += g_cyc[i].interval;
        }
    }
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

ER tk_chg_pri(ID tskid, PRI tskpri)
{
    if (!valid_task(tskid)) {
        return E_ID;
    }
    if (tskpri <= 0) {
        return E_ID;
    }
    g_tasks[tskid - 1].pri = tskpri;
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
    for (RELTIM i = 0; i < dlytim; i++) {
        g_tick++;
        mmio_write32(PICO_SYST_CVR, g_tick);
        process_time_events();
    }
}

uint32_t tk_get_tick(void)
{
    return g_tick;
}

ID tk_get_tid(void)
{
    return g_current_tid;
}

ER tk_ref_tsk(ID tskid, T_RTSK *pk_rtsk)
{
    if (!valid_task(tskid)) {
        return E_ID;
    }
    pk_rtsk->tskstat = g_tasks[tskid - 1].state;
    pk_rtsk->tskpri = g_tasks[tskid - 1].pri;
    pk_rtsk->exinf = g_tasks[tskid - 1].exinf;
    return E_OK;
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

ID tk_cre_mtx(const T_CMTX *pk_cmtx)
{
    (void)pk_cmtx;
    for (int i = 0; i < MAX_MTX; i++) {
        if (g_mtx[i].used == 0) {
            g_mtx[i].used = 1;
            g_mtx[i].locked = 0;
            g_mtx[i].owner = 0;
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_loc_mtx(ID mtxid)
{
    if (!valid_mtx(mtxid)) {
        return E_ID;
    }
    mtx_t *mtx = &g_mtx[mtxid - 1];
    if (mtx->locked != 0) {
        return E_TMOUT;
    }
    mtx->locked = 1;
    mtx->owner = g_current_tid;
    return E_OK;
}

ER tk_unl_mtx(ID mtxid)
{
    if (!valid_mtx(mtxid)) {
        return E_ID;
    }
    mtx_t *mtx = &g_mtx[mtxid - 1];
    if (mtx->locked == 0 || mtx->owner != g_current_tid) {
        return E_NOEXS;
    }
    mtx->locked = 0;
    mtx->owner = 0;
    return E_OK;
}

ID tk_cre_dtq(const T_CDTQ *pk_cdtq)
{
    (void)pk_cdtq->dtq;
    for (int i = 0; i < MAX_DTQ; i++) {
        if (g_dtq[i].used == 0) {
            int capacity = pk_cdtq->dtqcnt;
            if (capacity <= 0) {
                capacity = 1;
            }
            if (capacity > DTQ_CAPACITY) {
                capacity = DTQ_CAPACITY;
            }
            g_dtq[i].used = 1;
            g_dtq[i].head = 0;
            g_dtq[i].tail = 0;
            g_dtq[i].count = 0;
            g_dtq[i].capacity = capacity;
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_snd_dtq(ID dtqid, VP_INT data)
{
    if (!valid_dtq(dtqid)) {
        return E_ID;
    }
    dtq_t *dtq = &g_dtq[dtqid - 1];
    if (dtq->count >= dtq->capacity) {
        return E_TMOUT;
    }
    dtq->data[dtq->tail] = data;
    dtq->tail = (dtq->tail + 1) % dtq->capacity;
    dtq->count++;
    return E_OK;
}

ER tk_rcv_dtq(ID dtqid, VP_INT *p_data)
{
    if (!valid_dtq(dtqid)) {
        return E_ID;
    }
    dtq_t *dtq = &g_dtq[dtqid - 1];
    if (dtq->count <= 0) {
        return E_TMOUT;
    }
    *p_data = dtq->data[dtq->head];
    dtq->head = (dtq->head + 1) % dtq->capacity;
    dtq->count--;
    return E_OK;
}

ID tk_cre_pdq(const T_CPDQ *pk_cpdq)
{
    (void)pk_cpdq->pdq;
    for (int i = 0; i < MAX_PDQ; i++) {
        if (g_pdq[i].used == 0) {
            int capacity = pk_cpdq->pdqcnt;
            PRI max_priority = pk_cpdq->maxdpri;
            if (capacity <= 0) {
                capacity = 1;
            }
            if (capacity > PDQ_CAPACITY) {
                capacity = PDQ_CAPACITY;
            }
            if (max_priority <= 0) {
                max_priority = 1;
            }
            g_pdq[i].used = 1;
            g_pdq[i].count = 0;
            g_pdq[i].capacity = capacity;
            g_pdq[i].max_priority = max_priority;
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_snd_pdq(ID pdqid, VP_INT data, PRI datapri)
{
    if (!valid_pdq(pdqid)) {
        return E_ID;
    }
    pdq_t *pdq = &g_pdq[pdqid - 1];
    if (datapri <= 0 || datapri > pdq->max_priority) {
        return E_ID;
    }
    if (pdq->count >= pdq->capacity) {
        return E_TMOUT;
    }
    pdq->data[pdq->count] = data;
    pdq->priority[pdq->count] = datapri;
    pdq->count++;
    return E_OK;
}

ER tk_rcv_pdq(ID pdqid, VP_INT *p_data, PRI *p_datapri)
{
    if (!valid_pdq(pdqid)) {
        return E_ID;
    }
    pdq_t *pdq = &g_pdq[pdqid - 1];
    if (pdq->count <= 0) {
        return E_TMOUT;
    }
    int best = 0;
    for (int i = 1; i < pdq->count; i++) {
        if (pdq->priority[i] < pdq->priority[best]) {
            best = i;
        }
    }
    *p_data = pdq->data[best];
    *p_datapri = pdq->priority[best];
    for (int i = best; i + 1 < pdq->count; i++) {
        pdq->data[i] = pdq->data[i + 1];
        pdq->priority[i] = pdq->priority[i + 1];
    }
    pdq->count--;
    return E_OK;
}

ER tk_ref_pdq(ID pdqid, T_RPDQ *pk_rpdq)
{
    if (!valid_pdq(pdqid)) {
        return E_ID;
    }
    pk_rpdq->msgcnt = g_pdq[pdqid - 1].count;
    return E_OK;
}

ID tk_cre_mbf(const T_CMBF *pk_cmbf)
{
    (void)pk_cmbf->bufptr;
    for (int i = 0; i < MAX_MBF; i++) {
        if (g_mbf[i].used == 0) {
            int capacity = pk_cmbf->bufsz;
            int max_message = pk_cmbf->maxmsz;
            if (capacity <= 0) {
                capacity = 1;
            }
            if (capacity > MBF_STORAGE_SIZE) {
                capacity = MBF_STORAGE_SIZE;
            }
            if (max_message <= 0) {
                max_message = 1;
            }
            if (max_message > capacity - 1) {
                max_message = capacity - 1;
            }
            g_mbf[i].used = 1;
            g_mbf[i].head = 0;
            g_mbf[i].tail = 0;
            g_mbf[i].used_bytes = 0;
            g_mbf[i].message_count = 0;
            g_mbf[i].capacity = capacity;
            g_mbf[i].max_message = max_message;
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_snd_mbf(ID mbfid, const void *msg, int32_t msgsz)
{
    if (!valid_mbf(mbfid)) {
        return E_ID;
    }
    mbf_t *mbf = &g_mbf[mbfid - 1];
    if (msgsz <= 0 || msgsz > mbf->max_message || msgsz > 255) {
        return E_ID;
    }
    if (mbf->capacity - mbf->used_bytes < msgsz + 1) {
        return E_TMOUT;
    }
    const uint8_t *src = (const uint8_t*)msg;
    mbf->storage[mbf->tail] = (uint8_t)msgsz;
    mbf->tail = (mbf->tail + 1) % mbf->capacity;
    for (int i = 0; i < msgsz; i++) {
        mbf->storage[mbf->tail] = src[i];
        mbf->tail = (mbf->tail + 1) % mbf->capacity;
    }
    mbf->used_bytes += msgsz + 1;
    mbf->message_count++;
    return E_OK;
}

ER tk_rcv_mbf(ID mbfid, void *msg)
{
    if (!valid_mbf(mbfid)) {
        return E_ID;
    }
    mbf_t *mbf = &g_mbf[mbfid - 1];
    if (mbf->message_count <= 0) {
        return E_TMOUT;
    }
    uint8_t *dst = (uint8_t*)msg;
    int msgsz = mbf->storage[mbf->head];
    mbf->head = (mbf->head + 1) % mbf->capacity;
    for (int i = 0; i < msgsz; i++) {
        dst[i] = mbf->storage[mbf->head];
        mbf->head = (mbf->head + 1) % mbf->capacity;
    }
    mbf->used_bytes -= msgsz + 1;
    mbf->message_count--;
    return msgsz;
}

ER tk_ref_mbf(ID mbfid, T_RMBF *pk_rmbf)
{
    if (!valid_mbf(mbfid)) {
        return E_ID;
    }
    mbf_t *mbf = &g_mbf[mbfid - 1];
    pk_rmbf->frbufsz = mbf->capacity - mbf->used_bytes;
    pk_rmbf->msgcnt = mbf->message_count;
    return E_OK;
}

ID tk_cre_mpf(const T_CMPF *pk_cmpf)
{
    (void)pk_cmpf->mpf;
    for (int i = 0; i < MAX_MPF; i++) {
        if (g_mpf[i].used == 0) {
            int block_count = pk_cmpf->blkcnt;
            int block_size = pk_cmpf->blksz;
            if (block_count <= 0) {
                block_count = 1;
            }
            if (block_count > MPF_BLOCKS) {
                block_count = MPF_BLOCKS;
            }
            if (block_size <= 0) {
                block_size = 1;
            }
            if (block_size > MPF_BLOCK_SIZE) {
                block_size = MPF_BLOCK_SIZE;
            }
            g_mpf[i].used = 1;
            g_mpf[i].block_count = block_count;
            g_mpf[i].block_size = block_size;
            for (int n = 0; n < MPF_BLOCKS; n++) {
                g_mpf[i].used_blocks[n] = 0;
            }
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_get_mpf(ID mpfid, void **p_blk)
{
    if (!valid_mpf(mpfid)) {
        return E_ID;
    }
    mpf_t *mpf = &g_mpf[mpfid - 1];
    for (int i = 0; i < mpf->block_count; i++) {
        if (mpf->used_blocks[i] == 0) {
            mpf->used_blocks[i] = 1;
            *p_blk = (void*)(mpf->storage + i * mpf->block_size);
            return E_OK;
        }
    }
    return E_TMOUT;
}

ER tk_rel_mpf(ID mpfid, void *blk)
{
    if (!valid_mpf(mpfid)) {
        return E_ID;
    }
    mpf_t *mpf = &g_mpf[mpfid - 1];
    uint8_t *base = mpf->storage;
    uint8_t *p = (uint8_t*)blk;
    for (int i = 0; i < mpf->block_count; i++) {
        if (p == base + i * mpf->block_size) {
            if (mpf->used_blocks[i] == 0) {
                return E_NOEXS;
            }
            mpf->used_blocks[i] = 0;
            return E_OK;
        }
    }
    return E_ID;
}

ID tk_cre_mpl(const T_CMPL *pk_cmpl)
{
    (void)pk_cmpl->mpl;
    for (int i = 0; i < MAX_MPL; i++) {
        if (g_mpl[i].used == 0) {
            int pool_size = pk_cmpl->mplsz;
            if (pool_size <= 0) {
                pool_size = 1;
            }
            if (pool_size > MPL_STORAGE_SIZE) {
                pool_size = MPL_STORAGE_SIZE;
            }
            g_mpl[i].used = 1;
            g_mpl[i].pool_size = pool_size;
            g_mpl[i].region_count = 1;
            g_mpl[i].offsets[0] = 0;
            g_mpl[i].sizes[0] = pool_size;
            g_mpl[i].allocated[0] = 0;
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_get_mpl(ID mplid, int32_t blksz, void **p_blk)
{
    if (!valid_mpl(mplid)) {
        return E_ID;
    }
    if (blksz <= 0) {
        return E_ID;
    }
    mpl_t *mpl = &g_mpl[mplid - 1];
    int size = (blksz + 3) & ~3;
    for (int i = 0; i < mpl->region_count; i++) {
        if (mpl->allocated[i] == 0 && mpl->sizes[i] >= size) {
            if (mpl->sizes[i] > size && mpl->region_count < MPL_REGIONS) {
                for (int n = mpl->region_count; n > i + 1; n--) {
                    mpl->offsets[n] = mpl->offsets[n - 1];
                    mpl->sizes[n] = mpl->sizes[n - 1];
                    mpl->allocated[n] = mpl->allocated[n - 1];
                }
                mpl->offsets[i + 1] = mpl->offsets[i] + size;
                mpl->sizes[i + 1] = mpl->sizes[i] - size;
                mpl->allocated[i + 1] = 0;
                mpl->region_count++;
                mpl->sizes[i] = size;
            }
            mpl->allocated[i] = 1;
            *p_blk = (void*)(mpl->storage + mpl->offsets[i]);
            return E_OK;
        }
    }
    return E_TMOUT;
}

ER tk_rel_mpl(ID mplid, void *blk)
{
    if (!valid_mpl(mplid)) {
        return E_ID;
    }
    mpl_t *mpl = &g_mpl[mplid - 1];
    uint8_t *p = (uint8_t*)blk;
    for (int i = 0; i < mpl->region_count; i++) {
        if (p == mpl->storage + mpl->offsets[i]) {
            if (mpl->allocated[i] == 0) {
                return E_NOEXS;
            }
            mpl->allocated[i] = 0;
            if (i + 1 < mpl->region_count && mpl->allocated[i + 1] == 0) {
                mpl->sizes[i] += mpl->sizes[i + 1];
                for (int n = i + 1; n + 1 < mpl->region_count; n++) {
                    mpl->offsets[n] = mpl->offsets[n + 1];
                    mpl->sizes[n] = mpl->sizes[n + 1];
                    mpl->allocated[n] = mpl->allocated[n + 1];
                }
                mpl->region_count--;
            }
            if (i > 0 && mpl->allocated[i - 1] == 0) {
                mpl->sizes[i - 1] += mpl->sizes[i];
                for (int n = i; n + 1 < mpl->region_count; n++) {
                    mpl->offsets[n] = mpl->offsets[n + 1];
                    mpl->sizes[n] = mpl->sizes[n + 1];
                    mpl->allocated[n] = mpl->allocated[n + 1];
                }
                mpl->region_count--;
            }
            return E_OK;
        }
    }
    return E_ID;
}

ER tk_ref_mpl(ID mplid, T_RMPL *pk_rmpl)
{
    if (!valid_mpl(mplid)) {
        return E_ID;
    }
    mpl_t *mpl = &g_mpl[mplid - 1];
    int free_size = 0;
    int max_size = 0;
    for (int i = 0; i < mpl->region_count; i++) {
        if (mpl->allocated[i] == 0) {
            free_size += mpl->sizes[i];
            if (mpl->sizes[i] > max_size) {
                max_size = mpl->sizes[i];
            }
        }
    }
    pk_rmpl->frsz = free_size;
    pk_rmpl->maxsz = max_size;
    return E_OK;
}

ID tk_cre_alm(const T_CALM *pk_calm)
{
    for (int i = 0; i < MAX_ALM; i++) {
        if (g_alm[i].used == 0) {
            g_alm[i].used = 1;
            g_alm[i].active = 0;
            g_alm[i].handler = pk_calm->almhdr;
            g_alm[i].exinf = pk_calm->exinf;
            g_alm[i].due = 0;
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_sta_alm(ID almid, RELTIM almtim)
{
    if (!valid_alm(almid)) {
        return E_ID;
    }
    if (almtim == 0) {
        almtim = 1;
    }
    g_alm[almid - 1].due = g_tick + almtim;
    g_alm[almid - 1].active = 1;
    return E_OK;
}

ER tk_stp_alm(ID almid)
{
    if (!valid_alm(almid)) {
        return E_ID;
    }
    g_alm[almid - 1].active = 0;
    return E_OK;
}

ID tk_cre_cyc(const T_CCYC *pk_ccyc)
{
    for (int i = 0; i < MAX_CYC; i++) {
        if (g_cyc[i].used == 0) {
            RELTIM interval = pk_ccyc->cyctim;
            if (interval == 0) {
                interval = 1;
            }
            g_cyc[i].used = 1;
            g_cyc[i].active = 0;
            g_cyc[i].handler = pk_ccyc->cychdr;
            g_cyc[i].exinf = pk_ccyc->exinf;
            g_cyc[i].interval = interval;
            g_cyc[i].next = g_tick + pk_ccyc->cycphs;
            if (g_cyc[i].next == g_tick) {
                g_cyc[i].next++;
            }
            return i + 1;
        }
    }
    return E_LIMIT;
}

ER tk_sta_cyc(ID cycid)
{
    if (!valid_cyc(cycid)) {
        return E_ID;
    }
    if (g_cyc[cycid - 1].next <= g_tick) {
        g_cyc[cycid - 1].next = g_tick + g_cyc[cycid - 1].interval;
    }
    g_cyc[cycid - 1].active = 1;
    return E_OK;
}

ER tk_stp_cyc(ID cycid)
{
    if (!valid_cyc(cycid)) {
        return E_ID;
    }
    g_cyc[cycid - 1].active = 0;
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

static void alarm_handler(INTEXINF exinf)
{
    g_alarm_count += (int)exinf;
    tk_puts("alarm fired\n");
}

static void cyclic_handler(INTEXINF exinf)
{
    g_cyclic_count += (int)exinf;
    tk_puts("cyclic fired\n");
}

static void producer_task(INTEXINF exinf)
{
    (void)exinf;
    void *blk = 0;
    tk_puts("task producer start\n");
    if (tk_loc_mtx(g_mutex) == E_OK) {
        g_mutex_score += 10;
        tk_puts("task producer locked mutex\n");
        tk_unl_mtx(g_mutex);
    }
    g_msg.value = 42;
    g_msg_value = 42;
    tk_snd_mbx(g_mbox, &g_msg.hdr);
    if (tk_get_mpf(g_mempool, &blk) == E_OK) {
        int *value = (int*)blk;
        *value = 7;
        tk_snd_dtq(g_dataq, (VP_INT)blk);
        tk_puts("task producer sent dtq\n");
    }
    if (tk_get_mpl(g_varpool, 12, &g_varblock) == E_OK) {
        int *values = (int*)g_varblock;
        values[0] = 11;
        values[1] = 13;
        tk_puts("task producer allocated mpl\n");
    }
    if (tk_snd_mbf(g_messagebuf, "neo-c", 5) == E_OK) {
        tk_puts("task producer sent mbf\n");
    }
    if (tk_snd_pdq(g_pridataq, 100, 5) == E_OK
        && tk_snd_pdq(g_pridataq, 7, 1) == E_OK) {
        tk_puts("task producer sent pdq\n");
    }
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
    VP_INT data = 0;
    VP_INT priority_data = 0;
    PRI data_priority = 0;
    char message[8];
    tk_puts("task worker start\n");
    if (tk_loc_mtx(g_mutex) == E_OK) {
        g_mutex_score += 20;
        tk_puts("task worker locked mutex\n");
        tk_unl_mtx(g_mutex);
    }
    if (tk_wai_sem(g_sem) == E_OK && tk_rcv_mbx(g_mbox, &raw) == E_OK) {
        demo_msg_t *msg = (demo_msg_t*)raw;
        g_worker_sum += msg->value;
        tk_puts("task worker got message\n");
    }
    if (tk_rcv_dtq(g_dataq, &data) == E_OK) {
        int *value = (int*)data;
        g_worker_sum += *value;
        tk_rel_mpf(g_mempool, (void*)data);
        tk_puts("task worker got dtq\n");
    }
    if (g_varblock != 0) {
        int *values = (int*)g_varblock;
        g_varpool_score = values[0] + values[1];
        tk_rel_mpl(g_varpool, g_varblock);
        g_varblock = 0;
        tk_puts("task worker released mpl\n");
    }
    ER msgsz = tk_rcv_mbf(g_messagebuf, message);
    if (msgsz == 5) {
        g_messagebuf_score = (int)message[0] + (int)message[4];
        tk_puts("task worker received mbf\n");
    }
    if (tk_rcv_pdq(g_pridataq, &priority_data, &data_priority) == E_OK
        && priority_data == 7 && data_priority == 1
        && tk_rcv_pdq(g_pridataq, &data, &data_priority) == E_OK
        && data == 100 && data_priority == 5) {
        g_pdq_score = (int)priority_data * 100 + (int)data;
        tk_puts("task worker received pdq priority order\n");
    }
    tk_set_flg(g_flag, 0x02);
    tk_ext_tsk();
}

static void monitor_task(INTEXINF exinf)
{
    (void)exinf;
    FLGPTN pattern = 0;
    T_RTSK rtsk;
    T_RPDQ rpdq;
    T_RMBF rmbf;
    T_RMPL rmpl;
    rpdq.msgcnt = 0;
    rmbf.frbufsz = 0;
    rmbf.msgcnt = 0;
    rmpl.frsz = 0;
    rmpl.maxsz = 0;
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
    tk_puts("monitor alarms=");
    tk_puthex((uint32_t)g_alarm_count);
    tk_puts(" cyclic=");
    tk_puthex((uint32_t)g_cyclic_count);
    tk_puts("\n");
    tk_puts("monitor mutex=");
    tk_puthex((uint32_t)g_mutex_score);
    tk_puts(" pri_changed=");
    tk_puthex((uint32_t)g_pri_changed);
    tk_puts("\n");
    if (tk_ref_mpl(g_varpool, &rmpl) == E_OK) {
        tk_puts("monitor mpl_score=");
        tk_puthex((uint32_t)g_varpool_score);
        tk_puts(" free=");
        tk_puthex((uint32_t)rmpl.frsz);
        tk_puts(" max=");
        tk_puthex((uint32_t)rmpl.maxsz);
        tk_puts("\n");
    }
    if (tk_ref_mbf(g_messagebuf, &rmbf) == E_OK) {
        tk_puts("monitor mbf_score=");
        tk_puthex((uint32_t)g_messagebuf_score);
        tk_puts(" free=");
        tk_puthex((uint32_t)rmbf.frbufsz);
        tk_puts(" count=");
        tk_puthex((uint32_t)rmbf.msgcnt);
        tk_puts("\n");
    }
    if (tk_ref_pdq(g_pridataq, &rpdq) == E_OK) {
        tk_puts("monitor pdq_score=");
        tk_puthex((uint32_t)g_pdq_score);
        tk_puts(" count=");
        tk_puthex((uint32_t)rpdq.msgcnt);
        tk_puts("\n");
    }

    if (tk_ref_tsk(tk_get_tid(), &rtsk) == E_OK) {
        tk_puts("monitor self state=");
        tk_puthex((uint32_t)rtsk.tskstat);
        tk_puts(" pri=");
        tk_puthex((uint32_t)rtsk.tskpri);
        tk_puts("\n");
    }

    if (g_msg_value == 42 && g_worker_sum == 49 && pattern == 0x03
        && g_alarm_count == 5 && g_cyclic_count == 3
        && g_mutex_score == 30 && g_pri_changed == 1
        && g_varpool_score == 24
        && rmpl.frsz == 64 && rmpl.maxsz == 64
        && g_messagebuf_score == 209
        && rmbf.frbufsz == 64 && rmbf.msgcnt == 0
        && g_pdq_score == 800 && rpdq.msgcnt == 0) {
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
    T_CMTX cmtx;
    T_CDTQ cdtq;
    T_CPDQ cpdq;
    T_CMBF cmbf;
    T_CMPF cmpf;
    T_CMPL cmpl;
    T_CALM calm;
    T_CCYC ccyc;
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

    cmtx.mtxatr = TA_HLNG;
    cmtx.ceilpri = 0;
    g_mutex = tk_cre_mtx(&cmtx);

    cdtq.dtqatr = TA_HLNG;
    cdtq.dtqcnt = 4;
    cdtq.dtq = 0;
    g_dataq = tk_cre_dtq(&cdtq);

    cpdq.pdqatr = TA_HLNG;
    cpdq.pdqcnt = 4;
    cpdq.maxdpri = 8;
    cpdq.pdq = 0;
    g_pridataq = tk_cre_pdq(&cpdq);

    cmbf.mbfatr = TA_HLNG;
    cmbf.bufsz = 64;
    cmbf.maxmsz = 16;
    cmbf.bufptr = 0;
    g_messagebuf = tk_cre_mbf(&cmbf);

    cmpf.mpfatr = TA_HLNG;
    cmpf.blkcnt = 2;
    cmpf.blksz = 16;
    cmpf.mpf = 0;
    g_mempool = tk_cre_mpf(&cmpf);

    cmpl.mplatr = TA_HLNG;
    cmpl.mplsz = 64;
    cmpl.mpl = 0;
    g_varpool = tk_cre_mpl(&cmpl);

    calm.almatr = TA_HLNG;
    calm.exinf = 5;
    calm.almhdr = alarm_handler;
    g_alarm = tk_cre_alm(&calm);
    tk_sta_alm(g_alarm, 2);

    ccyc.cycatr = TA_HLNG;
    ccyc.exinf = 1;
    ccyc.cychdr = cyclic_handler;
    ccyc.cyctim = 1;
    ccyc.cycphs = 1;
    g_cyclic = tk_cre_cyc(&ccyc);
    tk_sta_cyc(g_cyclic);

    mmio_write32(PICO_SYST_RVR, 1000);
    mmio_write32(PICO_SYST_CVR, 0);
    mmio_write32(PICO_SYST_CSR, 5);

    ctsk.tskatr = TA_HLNG;
    ctsk.stk = 0;
    ctsk.stksz = 0;

    ctsk.exinf = 0;
    ctsk.task = producer_task;
    ctsk.itskpri = 1;
    producer = tk_cre_tsk(&ctsk);

    ctsk.task = worker_task;
    ctsk.itskpri = 4;
    worker = tk_cre_tsk(&ctsk);
    if (tk_chg_pri(worker, 2) == E_OK) {
        g_pri_changed = 1;
    }

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
