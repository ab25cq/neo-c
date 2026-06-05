#ifndef TRON_TKERNEL_H
#define TRON_TKERNEL_H

#include <stdint.h>
#include <stddef.h>

typedef int32_t ER;
typedef int32_t ID;
typedef int32_t PRI;
typedef int32_t RELTIM;
typedef int32_t TMO;
typedef uint32_t FLGPTN;
typedef intptr_t INTEXINF;

#define E_OK       0
#define E_ID      (-18)
#define E_LIMIT   (-34)
#define E_OBJ     (-41)
#define E_PAR     (-17)
#define E_TMOUT   (-50)

#define TMO_POL   0
#define TMO_FEVR  (-1)

#define TWF_ANDW  0x00
#define TWF_ORW   0x01
#define TWF_CLR   0x10

typedef void (*FP)(INTEXINF exinf);
typedef void (*CYCHDR)(INTEXINF exinf);

typedef struct {
    INTEXINF exinf;
    FP task;
    PRI itskpri;
    void *stk;
    size_t stksz;
} T_CTSK;

typedef struct {
    int32_t isemcnt;
    int32_t maxsem;
} T_CSEM;

typedef struct {
    FLGPTN iflgptn;
} T_CFLG;

typedef struct t_msg {
    struct t_msg *next;
} T_MSG;

typedef struct {
    int32_t unused;
} T_CMBX;

typedef struct {
    int32_t ceilpri;
} T_CMTX;

typedef struct {
    int32_t bufsz;
    int32_t maxmsz;
    void *bufptr;
} T_CMBF;

typedef struct {
    int32_t mpfcnt;
    int32_t blfsz;
    void *bufptr;
} T_CMPF;

typedef struct {
    INTEXINF exinf;
    CYCHDR cyhdr;
    RELTIM cyctim;
    int32_t cycphs;
} T_CCYC;

void tk_boot(void);
void tk_start(void);
void tk_kernel_exit(int code);

ID tk_cre_tsk(const T_CTSK *pk_ctsk);
ER tk_sta_tsk(ID tskid, INTEXINF stacd);
void tk_ext_tsk(void);
ID tk_get_tid(void);
PRI tk_get_pri(ID tskid);
ER tk_dly_tsk(RELTIM dlytim);
ER tk_slp_tsk(void);
ER tk_wup_tsk(ID tskid);

ID tk_cre_sem(const T_CSEM *pk_csem);
ER tk_sig_sem(ID semid);
ER tk_wai_sem(ID semid);
ER tk_wai_sem_tmo(ID semid, TMO tmout);

ID tk_cre_flg(const T_CFLG *pk_cflg);
ER tk_set_flg(ID flgid, FLGPTN setptn);
ER tk_wai_flg(ID flgid, FLGPTN waiptn, uint32_t wfmode, FLGPTN *p_flgptn);
ER tk_wai_flg_tmo(ID flgid, FLGPTN waiptn, uint32_t wfmode, FLGPTN *p_flgptn, TMO tmout);

ID tk_cre_mtx(const T_CMTX *pk_cmtx);
ER tk_loc_mtx(ID mtxid);
ER tk_loc_mtx_tmo(ID mtxid, TMO tmout);
ER tk_unl_mtx(ID mtxid);

ID tk_cre_mbx(const T_CMBX *pk_cmbx);
ER tk_snd_mbx(ID mbxid, T_MSG *pk_msg);
ER tk_rcv_mbx(ID mbxid, T_MSG **ppk_msg);
ER tk_rcv_mbx_tmo(ID mbxid, T_MSG **ppk_msg, TMO tmout);

ID tk_cre_mbf(const T_CMBF *pk_cmbf);
ER tk_snd_mbf(ID mbfid, const void *msg, int32_t msgsz);
ER tk_rcv_mbf(ID mbfid, void *msg, int32_t *p_msgsz);
ER tk_rcv_mbf_tmo(ID mbfid, void *msg, int32_t *p_msgsz, TMO tmout);

ID tk_cre_mpf(const T_CMPF *pk_cmpf);
ER tk_get_mpf(ID mpfid, void **p_blf);
ER tk_get_mpf_tmo(ID mpfid, void **p_blf, TMO tmout);
ER tk_rel_mpf(ID mpfid, void *blf);

ID tk_cre_cyc(const T_CCYC *pk_ccyc);
ER tk_sta_cyc(ID cycid);
ER tk_stp_cyc(ID cycid);

uint64_t tk_get_tick(void);
uint64_t tk_get_timer_irq_count(void);

void tk_puts(const char *s);
void tk_puthex(uint64_t v);
void tk_putchar(int ch);

#endif
