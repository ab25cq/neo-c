/// c_include definition ///
#ifndef __BAREMETAL__
#define __BAREMETAL__ 1
#endif

#ifndef __NEO_MICRO__
#define __NEO_MICRO__ 1
#endif


extern int errno;
extern void putchar(char c);

#ifndef NEO_MICRO_HEAP_SIZE
#define NEO_MICRO_HEAP_SIZE (64 * 1024)
#endif

static unsigned char __neo_micro_heap[NEO_MICRO_HEAP_SIZE];
static unsigned long __neo_micro_brk_offset = 0;

unsigned long brk(unsigned long addr)
{
    unsigned long base = (unsigned long)__neo_micro_heap;
    unsigned long limit = base + (unsigned long)NEO_MICRO_HEAP_SIZE;
    unsigned long request = (unsigned long)addr;

    if(addr == 0) {
        return base + __neo_micro_brk_offset;
    }
    if(request < base || request > limit) {
        errno = 12;
        return (unsigned long)-1;
    }

    __neo_micro_brk_offset = request - base;
    return addr;
}

void exit(int status)
{
    (void)status;
    for(;;) {
    }
}

/// typedef definition ///
typedef unsigned long size_t;

typedef __builtin_va_list __gnuc_va_list;

typedef char* string;

typedef __builtin_va_list va_list;

typedef unsigned long  long    ;

typedef long ptrdiff_t;

typedef unsigned long  int uintptr_t;

typedef long intptr_t;

typedef char int8_t;

typedef short int16_t;

typedef int int32_t;

typedef long long int64_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  long uint64_t;

typedef int wchar_t;

typedef _Bool bool;

typedef struct anonymous_typeX1 glob_t;

typedef struct mem_block  mem_block_t  ;

typedef struct anonymous_typeX2 __buf_ctx_t;

typedef struct anonymous_typeX3 __str_ctx_t;

typedef struct anonymous_typeX4 __fmt_out_t;

typedef int*  wstring  ;

typedef int  ER  ;

typedef int  ID  ;

typedef int  PRI  ;

typedef unsigned int  ATR  ;

typedef unsigned int  RELTIM  ;

typedef unsigned int  FLGPTN  ;

typedef unsigned int  SYSTIM  ;

typedef long  INTEXINF  ;

typedef long  VP_INT  ;

typedef void (*FP)(long );

typedef struct anonymous_typeX5 T_CTSK;

typedef struct anonymous_typeX6 T_CSEM;

typedef struct anonymous_typeX7 T_CFLG;

typedef struct T_MSG  T_MSG  ;

typedef struct anonymous_typeX8 T_CMBX;

typedef struct anonymous_typeX9 T_CMTX;

typedef struct anonymous_typeX10 T_CDTQ;

typedef struct anonymous_typeX11 T_CPDQ;

typedef struct anonymous_typeX12 T_RPDQ;

typedef struct anonymous_typeX13 T_CMBF;

typedef struct anonymous_typeX14 T_RMBF;

typedef struct anonymous_typeX15 T_CMPF;

typedef struct anonymous_typeX16 T_CMPL;

typedef struct anonymous_typeX17 T_RMPL;

typedef struct anonymous_typeX18 T_CALM;

typedef struct anonymous_typeX19 T_CCYC;

typedef enum anonymous_typeY20 task_state_t;

typedef struct anonymous_typeX21 T_RTSK;

typedef struct anonymous_typeX22 tcb_t;

typedef struct anonymous_typeX23 sem_t;

typedef struct anonymous_typeX24 flg_t;

typedef struct anonymous_typeX25 mbx_t;

typedef struct anonymous_typeX26 mtx_t;

typedef struct anonymous_typeX27 dtq_t;

typedef struct anonymous_typeX28 pdq_t;

typedef struct anonymous_typeX29 mbf_t;

typedef struct anonymous_typeX30 mpf_t;

typedef struct anonymous_typeX31 mpl_t;

typedef struct anonymous_typeX32 alm_t;

typedef struct anonymous_typeX33 cyc_t;

typedef struct anonymous_typeX34 demo_msg_t;

/// previous struct definition ///
/// struct definition ///
struct anonymous_typeX1
{
    unsigned long  gl_pathc  ;
    char** gl_pathv;
};

struct mem_block
{
    unsigned long  size  ;
    struct mem_block*  next  ;
};

enum  arg_kind { ARG_KIND_LIT=(1),
ARG_KIND_FILE=(2),
ARG_KIND_END=(3)
};

struct arg_hdr
{
    enum arg_kind  kind  ;
    const char* shortopts;
    const char* longopts;
    const char* datatype;
    const char* glossary;
    int mincount;
    int maxcount;
};

struct arg_lit
{
    struct arg_hdr  hdr  ;
    int count;
};

struct arg_file
{
    struct arg_hdr  hdr  ;
    int count;
    const char** filename;
};

struct arg_error
{
    const char* msg;
    const char* argval;
    const struct arg_hdr*  hdr  ;
};

struct arg_end
{
    struct arg_hdr  hdr  ;
    int count;
    int maxerrors;
    struct arg_error*  errors  ;
};

struct anonymous_typeX2
{
    char* p;
    unsigned long  int rem;
};

struct anonymous_typeX3
{
    char* p;
};

struct anonymous_typeX4
{
    int mode;
    void* ctx;
    int count;
};

struct buffer
{
    char* buf;
    int len;
    int size;
};

struct neo_frame
{
    struct neo_frame*  prev  ;
    char* fun_name;
    unsigned long  int frame_id;
};

struct sMemHeader
{
    long size;
    long compiletime_size;
    long alloc_size;
    int allocated;
    int alive;
    struct sMemHeader*  next  ;
    struct sMemHeader*  prev  ;
    struct sMemHeader*  free_next  ;
    char* fun_name[8];
    const char* class_name;
    const char* sname;
    int sline;
    int id;
};

struct list_item$1char$
{
    char item;
    struct list_item$1char$* prev;
    struct list_item$1char$* next;
};

struct list$1char$
{
    struct list_item$1char$* head;
    struct list_item$1char$* tail;
    int len;
    struct list_item$1char$* it;
};

struct list_item$1char$p
{
    char* item;
    struct list_item$1char$p* prev;
    struct list_item$1char$p* next;
};

struct list$1char$p
{
    struct list_item$1char$p* head;
    struct list_item$1char$p* tail;
    int len;
    struct list_item$1char$p* it;
};

struct list_item$1short$
{
    short item;
    struct list_item$1short$* prev;
    struct list_item$1short$* next;
};

struct list$1short$
{
    struct list_item$1short$* head;
    struct list_item$1short$* tail;
    int len;
    struct list_item$1short$* it;
};

struct list_item$1int$
{
    int item;
    struct list_item$1int$* prev;
    struct list_item$1int$* next;
};

struct list$1int$
{
    struct list_item$1int$* head;
    struct list_item$1int$* tail;
    int len;
    struct list_item$1int$* it;
};

struct list_item$1long$
{
    long item;
    struct list_item$1long$* prev;
    struct list_item$1long$* next;
};

struct list$1long$
{
    struct list_item$1long$* head;
    struct list_item$1long$* tail;
    int len;
    struct list_item$1long$* it;
};

struct list_item$1float$
{
    float item;
    struct list_item$1float$* prev;
    struct list_item$1float$* next;
};

struct list$1float$
{
    struct list_item$1float$* head;
    struct list_item$1float$* tail;
    int len;
    struct list_item$1float$* it;
};

struct list_item$1double$
{
    double item;
    struct list_item$1double$* prev;
    struct list_item$1double$* next;
};

struct list$1double$
{
    struct list_item$1double$* head;
    struct list_item$1double$* tail;
    int len;
    struct list_item$1double$* it;
};

struct list_item$1char$ph
{
    char*  item  ;
    struct list_item$1char$ph* prev;
    struct list_item$1char$ph* next;
};

struct list$1char$ph
{
    struct list_item$1char$ph* head;
    struct list_item$1char$ph* tail;
    int len;
    struct list_item$1char$ph* it;
};

struct anonymous_typeX5
{
    unsigned int  tskatr  ;
    long  exinf  ;
    void (*task)(long )  ;
    int  itskpri  ;
    void* stk;
    int  stksz  ;
};

struct anonymous_typeX6
{
    unsigned int  sematr  ;
    int  isemcnt  ;
    int  maxsem  ;
};

struct anonymous_typeX7
{
    unsigned int  flgatr  ;
    unsigned int  iflgptn  ;
};

struct T_MSG
{
    struct T_MSG*  next  ;
};

struct anonymous_typeX8
{
    unsigned int  mbxatr  ;
};

struct anonymous_typeX9
{
    unsigned int  mtxatr  ;
    int  ceilpri  ;
};

struct anonymous_typeX10
{
    unsigned int  dtqatr  ;
    int  dtqcnt  ;
    void* dtq;
};

struct anonymous_typeX11
{
    unsigned int  pdqatr  ;
    int  pdqcnt  ;
    int  maxdpri  ;
    void* pdq;
};

struct anonymous_typeX12
{
    int  msgcnt  ;
};

struct anonymous_typeX13
{
    unsigned int  mbfatr  ;
    int  bufsz  ;
    int  maxmsz  ;
    void* bufptr;
};

struct anonymous_typeX14
{
    int  frbufsz  ;
    int  msgcnt  ;
};

struct anonymous_typeX15
{
    unsigned int  mpfatr  ;
    int  blkcnt  ;
    int  blksz  ;
    void* mpf;
};

struct anonymous_typeX16
{
    unsigned int  mplatr  ;
    int  mplsz  ;
    void* mpl;
};

struct anonymous_typeX17
{
    int  frsz  ;
    int  maxsz  ;
};

struct anonymous_typeX18
{
    unsigned int  almatr  ;
    long  exinf  ;
    void (*almhdr)(long )  ;
};

struct anonymous_typeX19
{
    unsigned int  cycatr  ;
    long  exinf  ;
    void (*cychdr)(long )  ;
    unsigned int  cyctim  ;
    unsigned int  cycphs  ;
};

enum  anonymous_typeY20 { TS_DORMANT
,TS_READY
,TS_RUNNING
,TS_EXITED
};

struct anonymous_typeX21
{
    enum anonymous_typeY20  tskstat  ;
    int  tskpri  ;
    long  exinf  ;
};

struct anonymous_typeX22
{
    void (*task)(long )  ;
    long  exinf  ;
    int  pri  ;
    enum anonymous_typeY20  state  ;
};

struct anonymous_typeX23
{
    int  count  ;
    int  max  ;
    int used;
};

struct anonymous_typeX24
{
    unsigned int  pattern  ;
    int used;
};

struct anonymous_typeX25
{
    struct T_MSG*  head  ;
    struct T_MSG*  tail  ;
    int used;
};

struct anonymous_typeX26
{
    int  owner  ;
    int locked;
    int used;
};

struct anonymous_typeX27
{
    long  data[8]  ;
    int head;
    int tail;
    int count;
    int capacity;
    int used;
};

struct anonymous_typeX28
{
    long  data[8]  ;
    int  priority[8]  ;
    int count;
    int capacity;
    int  max_priority  ;
    int used;
};

struct anonymous_typeX29
{
    unsigned char  storage[128]  ;
    int head;
    int tail;
    int used_bytes;
    int message_count;
    int capacity;
    int max_message;
    int used;
};

struct anonymous_typeX30
{
    unsigned char  storage[4*32]  ;
    unsigned char  used_blocks[4]  ;
    int block_count;
    int block_size;
    int used;
};

struct anonymous_typeX31
{
    unsigned char  storage[128]  ;
    int offsets[8];
    int sizes[8];
    int allocated[8];
    int region_count;
    int pool_size;
    int used;
};

struct anonymous_typeX32
{
    void (*handler)(long )  ;
    long  exinf  ;
    unsigned int  due  ;
    int active;
    int used;
};

struct anonymous_typeX33
{
    void (*handler)(long )  ;
    long  exinf  ;
    unsigned int  interval  ;
    unsigned int  next  ;
    int active;
    int used;
};

struct anonymous_typeX34
{
    struct T_MSG  hdr  ;
    int value;
};

/// variable definition ///
extern int errno;

extern struct mem_block*  free_list  ;

extern unsigned long  int  __neo_sbrk_cur  ;

extern int __neo_sbrk_inited;

void (*__atexit_funcs[32])();
extern int __atexit_count;

extern char* __strtok_save;

extern struct neo_frame*  neo_current_frame  ;

extern unsigned long  int neo_frame_id;

extern struct sMemHeader*  gAllocMem  ;

extern struct sMemHeader*  gFreeMem  ;

extern int gNumAlloc;

extern int gNumFree;

extern unsigned int  __bss_start__  ;
extern unsigned int  __bss_end__  ;
static struct anonymous_typeX22  g_tasks[8]  ;
static struct anonymous_typeX23  g_sems[4]  ;
static struct anonymous_typeX24  g_flgs[4]  ;
static struct anonymous_typeX25  g_mbx[4]  ;
static struct anonymous_typeX26  g_mtx[4]  ;
static struct anonymous_typeX27  g_dtq[4]  ;
static struct anonymous_typeX28  g_pdq[2]  ;
static struct anonymous_typeX29  g_mbf[2]  ;
static struct anonymous_typeX30  g_mpf[2]  ;
static struct anonymous_typeX31  g_mpl[2]  ;
static struct anonymous_typeX32  g_alm[4]  ;
static struct anonymous_typeX33  g_cyc[4]  ;
static unsigned int  g_tick  ;
static int  g_current_tid  ;
static int  g_sem  ;
static int  g_flag  ;
static int  g_mbox  ;
static int  g_mutex  ;
static int  g_dataq  ;
static int  g_pridataq  ;
static int  g_messagebuf  ;
static int  g_mempool  ;
static int  g_varpool  ;
static int  g_alarm  ;
static int  g_cyclic  ;
static void* g_varblock;
static int g_msg_value;
static int g_worker_sum;
static int g_pdq_score;
static int g_messagebuf_score;
static int g_varpool_score;
static int g_mutex_score;
static int g_pri_changed;
static int g_alarm_count;
static int g_cyclic_count;
static struct anonymous_typeX34  g_msg  ;
// source head

// header function
unsigned long  int brk(unsigned long  int addr);
void exit(int status);
int charp_index_regex(const char* self, const char* reg, int default_value, _Bool  ignore_case  );
int charp_rindex_regex(const char* self, const char* reg, int default_value, _Bool  ignore_case  );
char*  string_chomp(const char* str);
int string_rindex_regex(char* self, const char* reg, int default_value, _Bool  ignore_case  );
int string_index_regex(char* self, const char* reg, int default_value, _Bool  ignore_case  );
_Bool  charp_match(char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* charp_scan(const char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* charp_split(const char* self, const char* reg, _Bool  ignore_case  );
char*  string_sub(char* self, const char* reg, const char* replace, _Bool  ignore_case  );
struct list$1char$ph* string_scan(char* self, const char* reg, _Bool  ignore_case  );
struct list$1char$ph* string_split(char* self, const char* reg, _Bool  ignore_case  );
_Bool  string_match(char* self, const char* reg, _Bool  ignore_case  );
char*  charp_sub(char* self, const char* reg, const char* replace, _Bool  global  , _Bool  ignore_case  );
char*  charp_sub_block(char* self, const char* reg, _Bool  global  , _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
struct list$1char$ph* charp_scan_block(const char* self, const char* reg, _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
char*  string_sub_block(char* self, const char* reg, _Bool  global  , _Bool  ignore_case  , void* parent, char* (*block)(void*,char*,struct list$1char$ph*));
int*  __builtin_wstring(const char* str, char* sname, int sline);
int wchar_tp_length(const int*  str  );
int wchar_ta_length(const int*  str  );
int wstring_length(const int*  str  );
char*  string_lower_case(char* str);
char*  string_upper_case(char* str);
int*  wchar_tp_substring(const int*  str  , int head, int tail);
int charp_index_count(const char* str, const char* search_str, int count, int default_value);
int charp_rindex(const char* str, const char* search_str, int default_value);
int charp_rindex_count(const char* str, const char* search_str, int count, int default_value);
char*  charp_strip(const char* self);
char*  wchar_tp_to_string(const int*  wstr  );
char*  wchar_ta_to_string(const int*  wstr  );
int*  charp_to_wstring(const char* str);
int*  chara_to_wstring(char* str);
int*  wchar_tp_delete(int*  str  , int head, int tail);
int wchar_tp_index(const int*  str  , const int*  search_str  , int default_value);
int wchar_tp_rindex(const int*  str  , const int*  search_str  , int default_value);
int*  wchar_tp_reverse(const int*  str  );
int*  wchar_tp_multiply(const int*  str  , int n);
int*  wchar_tp_printable(const int*  str  );
int wchar_tp_compare(const int*  left  , int*  right  );
int wstring_compare(const int*  left  , const int*  right  );
int*  wchar_tp_operator_mult(const int*  str  , int n);
int*  wstring_operator_mult(const int*  str  , int n);
_Bool  wstring_operator_equals(const int*  left  , const int*  right  );
_Bool  wstring_operator_not_equals(const int*  left  , const int*  right  );
int*  wchar_tp_operator_add(const int*  left  , const int*  right  );
int*  wstring_operator_add(const int*  left  , const int*  right  );
char*  charp_replace(char* self, int index, char c);
char*  charp_multiply(const char* str, int n);
struct list$1char$ph* charp_split_str(const char* self, const char* str);
unsigned int wchar_tp_get_hash_key(const int*  value  );
_Bool  wstring_equals(const int*  left  , const int*  right  );
_Bool  wchar_t_operator_equals(int  left  , int  right  );
_Bool  wchar_t_operator_not_equals(int  left  , int  right  );
unsigned int wchar_t_get_hash_key(int  value  );
_Bool  wchar_t_equals(int  left  , int  right  );
char*  wchar_t_to_string(int  wc  );
char*  xrealpath(const char* path);
char*  xdirname(const char* path);
unsigned long  xwcslen(const int*  wstr  );
int*  wstring_substring(const int*  str  , int head, int tail);
int string_index_count(const char* str, const char* search_str, int count, int default_value);
int string_rindex(const char* str, const char* search_str, int default_value);
int string_rindex_count(const char* str, const char* search_str, int count, int default_value);
char*  string_strip(const char* self);
char*  wstring_to_string(const int*  wstr  );
int*  int_to_wstring(int self);
int*  wstring_delete(int*  str  , int head, int tail);
int wstring_index(const int*  str  , const int*  search_str  , int default_value);
int wstring_rindex(const int*  str  , const int*  search_str  , int default_value);
int*  wstring_reverse(const int*  str  );
int*  wstring_multiply(const int*  str  , int n);
int*  wstring_printable(const int*  str  );
unsigned int wstring_get_hash_key(const int*  value  );
char*  string_replace(char* self, int index, char c);
char*  string_multiply(const char* str, int n);
struct list$1char$ph* string_split_str(const char* self, const char* str);
int*  string_to_wstring(const char* str);
char*  charp_chomp(const char* str);
_Bool  wchar_tp_equals(const int*  left  , const int*  right  );
_Bool  wchar_tp_operator_equals(const int*  left  , const int*  right  );
_Bool  wchar_tp_operator_not_equals(const int*  left  , const int*  right  );
static void mmio_write32(unsigned int  addr  , unsigned int  value  );
void tk_putchar(int ch);
void putchar(char ch);
void tk_puts(const char* s);
void tk_puthex(unsigned int  value  );
void tk_kernel_exit(int code);
static int valid_task(int  id  );
static int valid_sem(int  id  );
static int valid_flg(int  id  );
static int valid_mbx(int  id  );
static int valid_mtx(int  id  );
static int valid_dtq(int  id  );
static int valid_pdq(int  id  );
static int valid_mbf(int  id  );
static int valid_mpf(int  id  );
static int valid_mpl(int  id  );
static int valid_alm(int  id  );
static int valid_cyc(int  id  );
static void process_time_events();
int  tk_cre_tsk(const struct anonymous_typeX5*  pk_ctsk  );
int  tk_sta_tsk(int  tskid  , long  stacd  );
int  tk_chg_pri(int  tskid  , int  tskpri  );
void tk_ext_tsk();
void tk_dly_tsk(unsigned int  dlytim  );
unsigned int  tk_get_tick();
int  tk_get_tid();
int  tk_ref_tsk(int  tskid  , struct anonymous_typeX21*  pk_rtsk  );
int  tk_cre_sem(const struct anonymous_typeX6*  pk_csem  );
int  tk_sig_sem(int  semid  );
int  tk_wai_sem(int  semid  );
int  tk_cre_flg(const struct anonymous_typeX7*  pk_cflg  );
int  tk_set_flg(int  flgid  , unsigned int  setptn  );
int  tk_wai_flg(int  flgid  , unsigned int  waiptn  , unsigned int  wfmode  , unsigned int*  p_flgptn  );
int  tk_cre_mbx(const struct anonymous_typeX8*  pk_cmbx  );
int  tk_snd_mbx(int  mbxid  , struct T_MSG*  pk_msg  );
int  tk_rcv_mbx(int  mbxid  , struct T_MSG**  ppk_msg  );
int  tk_cre_mtx(const struct anonymous_typeX9*  pk_cmtx  );
int  tk_loc_mtx(int  mtxid  );
int  tk_unl_mtx(int  mtxid  );
int  tk_cre_dtq(const struct anonymous_typeX10*  pk_cdtq  );
int  tk_snd_dtq(int  dtqid  , long  data  );
int  tk_rcv_dtq(int  dtqid  , long*  p_data  );
int  tk_cre_pdq(const struct anonymous_typeX11*  pk_cpdq  );
int  tk_snd_pdq(int  pdqid  , long  data  , int  datapri  );
int  tk_rcv_pdq(int  pdqid  , long*  p_data  , int*  p_datapri  );
int  tk_ref_pdq(int  pdqid  , struct anonymous_typeX12*  pk_rpdq  );
int  tk_cre_mbf(const struct anonymous_typeX13*  pk_cmbf  );
int  tk_snd_mbf(int  mbfid  , const void* msg, int  msgsz  );
int  tk_rcv_mbf(int  mbfid  , void* msg);
int  tk_ref_mbf(int  mbfid  , struct anonymous_typeX14*  pk_rmbf  );
int  tk_cre_mpf(const struct anonymous_typeX15*  pk_cmpf  );
int  tk_get_mpf(int  mpfid  , void** p_blk);
int  tk_rel_mpf(int  mpfid  , void* blk);
int  tk_cre_mpl(const struct anonymous_typeX16*  pk_cmpl  );
int  tk_get_mpl(int  mplid  , int  blksz  , void** p_blk);
int  tk_rel_mpl(int  mplid  , void* blk);
int  tk_ref_mpl(int  mplid  , struct anonymous_typeX17*  pk_rmpl  );
int  tk_cre_alm(const struct anonymous_typeX18*  pk_calm  );
int  tk_sta_alm(int  almid  , unsigned int  almtim  );
int  tk_stp_alm(int  almid  );
int  tk_cre_cyc(const struct anonymous_typeX19*  pk_ccyc  );
int  tk_sta_cyc(int  cycid  );
int  tk_stp_cyc(int  cycid  );
static void tk_sta_ker();
static void alarm_handler(long  exinf  );
static void cyclic_handler(long  exinf  );
static void producer_task(long  exinf  );
static void worker_task(long  exinf  );
static void monitor_task(long  exinf  );
static void T_RTSK_finalize(struct anonymous_typeX21*  self  );
static void T_RPDQ_finalize(struct anonymous_typeX12*  self  );
static void T_RMBF_finalize(struct anonymous_typeX14*  self  );
static void T_RMPL_finalize(struct anonymous_typeX17*  self  );
static void tk_app_main();
static void T_CSEM_finalize(struct anonymous_typeX6*  self  );
static void T_CFLG_finalize(struct anonymous_typeX7*  self  );
static void T_CMBX_finalize(struct anonymous_typeX8*  self  );
static void T_CMTX_finalize(struct anonymous_typeX9*  self  );
static void T_CDTQ_finalize(struct anonymous_typeX10*  self  );
static void T_CPDQ_finalize(struct anonymous_typeX11*  self  );
static void T_CMBF_finalize(struct anonymous_typeX13*  self  );
static void T_CMPF_finalize(struct anonymous_typeX15*  self  );
static void T_CMPL_finalize(struct anonymous_typeX16*  self  );
static void T_CALM_finalize(struct anonymous_typeX18*  self  );
static void T_CCYC_finalize(struct anonymous_typeX19*  self  );
static void T_CTSK_finalize(struct anonymous_typeX5*  self  );
void default_handler();
void reset_handler();
int __append_char(char** p, unsigned long  int* rem, char c);
void __append_str(char** p, unsigned long  int* rem, const char* s);
void* sbrk(long  increment  );
void* malloc(unsigned long  size  );
void free(void* ptr);
void* calloc(unsigned long  nmemb  , unsigned long  size  );
void* realloc(void* ptr, unsigned long  size  );
char* strdup(const char* s);
int strcmp(const char* s1, const char* s2);
char* strstr(const char* haystack, const char* needle);
void* memset(void* dst, int c, unsigned int n);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memchr(const void* s, int c, unsigned long  n  );
void* memmove(void* dst, const void* src, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strncmp(const char* p, const char* q, unsigned int n);
char* strcpy(char* dest, const char* src);
char* strncpy(char* s, const char* t, int n);
int strlen(const char* s);
char* strchr(const char* s, int c);
char* strrchr(const char* s, int c);
char* strndup(const char* s, unsigned long  n  );
unsigned long  arg_file_capacity(const struct arg_file*  file  );
void arg_lit_reset(struct arg_lit*  lit  );
void arg_file_reset(struct arg_file*  file  );
void arg_end_reset(struct arg_end*  end  );
void arg_add_error(struct arg_end*  end  , const char* msg, const char* arg, const struct arg_hdr*  hdr  );
int arg_has_capacity(int count, int maxcount);
struct arg_lit*  arg_litn(const char* shortopts, const char* longopts, int mincount, int maxcount, const char* glossary);
struct arg_file*  arg_filen(const char* shortopts, const char* longopts, const char* datatype, int mincount, int maxcount, const char* glossary);
struct arg_end*  arg_end(int maxerrors);
int argtable_reset(void** argtable, struct arg_end**  end_out  );
int argtable_entries(void** argtable, struct arg_end**  end_out  );
int arg_long_match(const char* options, const char* name);
struct arg_hdr*  arg_find_short(void** argtable, int entries, char short_opt);
struct arg_hdr*  arg_find_long(void** argtable, int entries, const char* name);
struct arg_file*  arg_find_positional(void** argtable, int entries);
int arg_file_add(struct arg_file*  file  , const char* value, struct arg_end*  end  , const char* errmsg);
int arg_parse(int argc, char** argv, void** argtable);
void arg_print_joined_option(char* buf, unsigned long  bufsz  , const struct arg_hdr*  hdr  );
void arg_print_syntax(void** argtable, const char* suffix);
void arg_print_glossary(void** argtable, const char* format);
void arg_print_errors(struct arg_end*  end  , const char* progname);
void arg_freetable(void** argtable, unsigned long  n  );
int isprint(int c);
int isspace(int c);
int isalpha(int c);
int isdigit(int c);
int isalnum(int c);
int puts(const char* s);
char* strcat(char* dest, const char* src);
char* strncat(char* dest, const char* src, unsigned long  n  );
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, __builtin_va_list  ap  );
int __utoa_ull(char* dst, unsigned long  long v, int base, int lower);
void __fmt_num(char** p, unsigned long  int* rem, unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower);
void __fmt_putc(struct anonymous_typeX4*  o  , char c);
int __is_digit(char c);
void __emit_pad(struct anonymous_typeX4*  o  , char pad, int n);
void __emit_num(struct anonymous_typeX4*  o  , unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower, int left);
void __vformat(struct anonymous_typeX4*  o  , const char* fmt, __builtin_va_list  ap  );
static void __builtin_va_list_finalize(__builtin_va_list*  self  );
int printf(const char* fmt, ...);
void __buf_putc(void* ctx, char ch);
void __str_putc(void* ctx, char ch);
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, __builtin_va_list  ap  );
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
int vsprintf(char* out, const char* fmt, __builtin_va_list  ap  );
int sprintf(char* out, const char* fmt, ...);
int atexit(void (*func)());
void __run_atexit();
double strtod(const char* nptr, char** endptr);
unsigned long  long __minux_parse_unsigned(const char* nptr, char** endptr, int base, int* neg_out, int* any_out);
unsigned long  int strtoul(const char* nptr, char** endptr, int base);
unsigned long  long strtoull(const char* nptr, char** endptr, int base);
long strtol(const char* nptr, char** endptr, int base);
long long strtoll(const char* nptr, char** endptr, int base);
long atol(const char* nptr);
int atoi(const char* nptr);
int __tolower(int c);
int strncasecmp(const char* a, const char* b, unsigned long  n  );
char* strerror(int errnum);
int ispunct(int c);
char* strtok(char* s, const char* delim);
int isxdigit(int c);
int __minux_isspace(int c);
int sscanf(const char* str, const char* fmt, ...);
_Bool  neo_frame_is_alive(unsigned long  int frame_id);
void stackframe();
void stackframe2(void* mem);
_Bool  die(const char* msg, char* sname, int sline);
void come_memleak_checker();
void* alloc_from_pages(unsigned long  size  );
void come_free_mem_of_heap_pool(void* mem);
void* come_alloc_mem_from_heap_pool(unsigned long  compiletime_size  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
char* come_dynamic_typeof(void* mem);
unsigned long  dynamic_sizeof(void* mem);
void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
_Bool  come_is_alive(void* mem);
void come_free(void* mem);
void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name);
void* come_increment_ref_count(void* mem, char* sname, int sline, int id);
void* come_print_ref_count(void* mem);
int come_get_ref_count(void* mem);
void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool  no_decrement  , _Bool  no_free  , void* result_obj, char* sname, int sline, int id);
void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id);
void xassert(const char* msg, _Bool  test  );
void* come_null_checker(void* mem, const char* sname, int sline, int id);
void* come_heap_checker(void* mem, const char* sname, int sline, int id);
char*  __builtin_string(const char* str, char* sname, int sline);
void stackframe_v2();
void* come_calloc_v2(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name);
void come_free_v2(void* mem);
struct buffer*  buffer_initialize(struct buffer*  self  );
struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  size  );
void buffer_finalize(struct buffer*  self  );
struct buffer*  buffer_clone(struct buffer*  self  );
_Bool  buffer_equals(struct buffer*  left  , struct buffer*  right  );
int buffer_length(struct buffer*  self  );
void buffer_reset(struct buffer*  self  );
void buffer_trim(struct buffer*  self  , int len);
struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  size  );
struct buffer*  buffer_append_char(struct buffer*  self  , char c);
struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem);
struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...);
struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem);
struct buffer*  buffer_append_int(struct buffer*  self  , int value);
struct buffer*  buffer_append_long(struct buffer*  self  , long value);
struct buffer*  buffer_append_short(struct buffer*  self  , short value);
struct buffer*  buffer_alignment(struct buffer*  self  );
int buffer_compare(struct buffer*  left  , struct buffer*  right  );
struct buffer*  charp_to_buffer(const char* self);
char*  buffer_to_string(struct buffer*  self  );
unsigned char* buffer_head_pointer(struct buffer*  self  );
struct buffer*  chara_to_buffer(char* self, unsigned long  len  );
struct buffer*  charpa_to_buffer(char** self, unsigned long  len  );
struct buffer*  shorta_to_buffer(short* self, unsigned long  len  );
struct buffer*  inta_to_buffer(int* self, unsigned long  len  );
struct buffer*  longa_to_buffer(long* self, unsigned long  len  );
struct buffer*  floata_to_buffer(float* self, unsigned long  len  );
struct buffer*  doublea_to_buffer(double* self, unsigned long  len  );
char*  buffer_printable(struct buffer*  self  );
static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values);
static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item);
static void list$1char$$p_finalize(struct list$1char$* self);
static void list_item$1char$$p_finalize(struct list_item$1char$* self);
struct list$1char$* chara_to_list(char* self, unsigned long  len  );
static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values);
static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item);
static void list$1char$p$p_finalize(struct list$1char$p* self);
static void list_item$1char$p$p_finalize(struct list_item$1char$p* self);
struct list$1char$p* charpa_to_list(char** self, unsigned long  len  );
static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values);
static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item);
static void list$1short$$p_finalize(struct list$1short$* self);
static void list_item$1short$$p_finalize(struct list_item$1short$* self);
struct list$1short$* shorta_to_list(short* self, unsigned long  len  );
static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values);
static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item);
static void list$1int$$p_finalize(struct list$1int$* self);
static void list_item$1int$$p_finalize(struct list_item$1int$* self);
struct list$1int$* inta_to_list(int* self, unsigned long  len  );
static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values);
static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item);
static void list$1long$$p_finalize(struct list$1long$* self);
static void list_item$1long$$p_finalize(struct list_item$1long$* self);
struct list$1long$* longa_to_list(long* self, unsigned long  len  );
static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values);
static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item);
static void list$1float$$p_finalize(struct list$1float$* self);
static void list_item$1float$$p_finalize(struct list_item$1float$* self);
struct list$1float$* floata_to_list(float* self, unsigned long  len  );
static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values);
static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item);
static void list$1double$$p_finalize(struct list$1double$* self);
static void list_item$1double$$p_finalize(struct list_item$1double$* self);
struct list$1double$* doublea_to_list(double* self, unsigned long  len  );
_Bool  bool_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_equals(_Bool self, _Bool right);
_Bool  char_equals(char self, char right);
_Bool  short_equals(short self, short right);
_Bool  int_equals(int self, int right);
_Bool  long_equals(long self, long right);
_Bool  size_t_equals(unsigned long  self  , unsigned long  right  );
_Bool  float_equals(float self, float right);
_Bool  double_equals(double self, double right);
_Bool  bool_operator_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_operator_equals(_Bool  self  , _Bool  right  );
_Bool  char_operator_equals(char self, char right);
_Bool  short_operator_equals(short self, short right);
_Bool  int_operator_equals(int self, int right);
_Bool  long_operator_equals(long self, long right);
_Bool  bool_operator_not_equals(_Bool  self  , _Bool  right  );
_Bool  _Bool_operator_not_equals(_Bool  self  , _Bool  right  );
_Bool  char_operator_not_equals(char self, char right);
_Bool  short_operator_not_equals(short self, short right);
_Bool  int_operator_not_equals(int self, int right);
_Bool  long_operator_not_equals(long self, long right);
_Bool  charp_equals(const char* self, const char* right);
_Bool  string_equals(char* self, const char* right);
_Bool  voidp_equals(void* self, void* right);
_Bool  boolp_equals(_Bool*  self  , _Bool*  right  );
_Bool  string_operator_equals(char* self, const char* right);
_Bool  charp_operator_equals(const char* self, const char* right);
_Bool  chara_operator_equals(char* self, const char* right);
_Bool  voidp_operator_equals(const char* self, const char* right);
_Bool  voidp_operator_not_equals(const char* self, const char* right);
_Bool  string_operator_not_equals(char* self, const char* right);
_Bool  charp_operator_not_equals(const char* self, const char* right);
_Bool  chara_operator_not_equals(char* self, const char* right);
char*  charp_operator_add(const char* self, const char* right);
char*  string_operator_add(char* self, const char* right);
char*  charp_operator_mult(const char* self, int right);
char*  string_operator_mult(const char* self, int right);
_Bool  charpa_contained(const char* self[], unsigned long  len  , const char* str);
unsigned long  shorta_length(short* self, unsigned long  len  );
unsigned long  inta_length(int* self, unsigned long  len  );
unsigned long  longa_length(long* self, unsigned long  len  );
unsigned long  floata_length(float* self, unsigned long  len  );
unsigned long  doublea_length(double* self, unsigned long  len  );
unsigned int bool_get_hash_key(_Bool  value  );
unsigned int _Bool_get_hash_key(_Bool  value  );
unsigned int char_get_hash_key(char value);
unsigned int short_get_hash_key(short int value);
unsigned int int_get_hash_key(int value);
unsigned int long_get_hash_key(long value);
unsigned int size_t_get_hash_key(unsigned long  value  );
unsigned int float_get_hash_key(float value);
unsigned int double_get_hash_key(double value);
unsigned int charp_get_hash_key(const char* value);
unsigned int string_get_hash_key(char* value);
unsigned int voidp_get_hash_key(void* value);
_Bool  bool_clone(_Bool  self  );
_Bool  _Bool_clone(_Bool  self  );
char char_clone(char self);
short int short_clone(short self);
int int_clone(int self);
long  int long_clone(long self);
unsigned long  size_t_clone(unsigned long  self  );
double double_clone(double self);
float float_clone(float self);
_Bool  xisalpha(char c);
_Bool  xisblank(char c);
_Bool  xisdigit(char c);
_Bool  xisspace(char c);
_Bool  xisalnum(char c);
_Bool  xisascii(char c);
_Bool  xispunct(char c);
int string_length(const char* str);
int charp_length(const char* str);
int chara_length(const char* str);
char*  charp_reverse(const char* str);
char*  string_operator_load_range_element(char* str, int head, int tail);
char*  charp_operator_load_range_element(char* str, int head, int tail);
char*  charp_substring(const char* str, int head, int tail);
char*  xsprintf(const char* msg, ...);
char*  charp_delete(char* str, int head, int tail);
static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self);
static void list$1char$ph$p_finalize(struct list$1char$ph* self);
static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self);
static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  );
struct list$1char$ph* charp_split_char(char* self, char c);
char*  charp_xsprintf(char* self, const char* msg, ...);
char*  int_xsprintf(int self, const char* msg, ...);
char*  charp_printable(char* str);
char*  chara_printable(char* str);
char*  charp_sub_plain(char* self, char* str, char* replace);
char*  xbasename(char* path);
char*  xnoextname(char* path);
char*  xextname(char* path);
char*  bool_to_string(_Bool  self  );
char*  _Bool_to_string(_Bool  self  );
char*  char_to_string(char self);
char*  short_to_string(short self);
char*  int_to_string(int self);
char*  long_to_string(long self);
char*  size_t_to_string(unsigned long  self  );
char*  float_to_string(float self);
char*  double_to_string(double self);
char*  string_to_string(char* self);
char*  charp_to_string(const char* self);
int bool_compare(_Bool  left  , _Bool  right  );
int _Bool_compare(_Bool  left  , _Bool  right  );
int char_compare(char left, char right);
int short_compare(short left, short right);
int int_compare(int left, int right);
int long_compare(long left, long right);
int size_t_compare(unsigned long  left  , unsigned long  right  );
int float_compare(float left, float right);
int double_compare(double left, double right);
int string_compare(char* left, char* right);
int charp_compare(char* left, char* right);
char*  charp_puts(char* self);
char*  charp_print(char* self);
char*  charp_printf(char* self, ...);
int int_printf(int self, char* msg);
long long_printf(long self, char* msg);
void int_times(int self, void* parent, void (*block)(void*,int));
int string_index(char* str, const char* search_str, int default_value);
int charp_index(const char* str, const char* search_str, int default_value);
// uniq global variable
const char _ctype_[1+256]={
     0,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 40, 40, 40, 40, 40, 32,
    32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32,
    32,-120, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16,
    16,  4,  4,  4,  4,  4,  4,  4,  4,  4,  4, 16, 16, 16, 16, 16,
    16, 16, 65, 65, 65, 65, 65, 65,  1,  1,  1,  1,  1,  1,  1,  1,
     1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1, 16, 16, 16, 16,
    16, 16, 66, 66, 66, 66, 66, 66,  2,  2,  2,  2,  2,  2,  2,  2,
     2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2,  2, 16, 16, 16, 16,
    32,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
     0
};

int errno;

struct mem_block*  free_list  =((void*)0);

unsigned long  int  __neo_sbrk_cur  =0;

int __neo_sbrk_inited=0;

int __atexit_count=0;

char* __strtok_save;

struct neo_frame*  neo_current_frame  =(void*)0;

unsigned long  int neo_frame_id=0;

struct sMemHeader*  gAllocMem  =(void*)0;

struct sMemHeader*  gFreeMem  =(void*)0;

int gNumAlloc=0;

int gNumFree=0;

// inline function

// body function
static void mmio_write32(unsigned int  addr  , unsigned int  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "mmio_write32"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    volatile unsigned int*  p  ;
    memset(&p, 0, sizeof(p));
    p=(volatile unsigned int* )addr;
    *p=value;
    neo_current_frame = fr.prev;
}

void tk_putchar(int ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_putchar"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    volatile unsigned int*  uart  ;
    memset(&uart, 0, sizeof(uart));
    uart=(volatile unsigned int* )0x40034000u;
    *uart=(unsigned int )(unsigned char )ch;
    neo_current_frame = fr.prev;
}

void putchar(char ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "putchar"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    tk_putchar((int)ch);
    neo_current_frame = fr.prev;
}

void tk_puts(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_puts"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s!=0) {
        if(*s==10) {
            tk_putchar(13);
        }
        tk_putchar((int)*s);
        s++;
    }
    neo_current_frame = fr.prev;
}

void tk_puthex(unsigned int  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_puthex"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    static const char* hex="0123456789abcdef";
    tk_puts("0x");
    for(i=28    ;i>=0;i-=4){
        tk_putchar(hex[(value>>i)&0xfu]);
    }
    neo_current_frame = fr.prev;
}

void tk_kernel_exit(int code)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_kernel_exit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    mmio_write32(0x40000000u,(unsigned int )code);
    for(;;){
    }
    neo_current_frame = fr.prev;
}

static int valid_task(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=8&&(*({ long long __neo_array_index1_0 = (long long)(id-1); if(__neo_array_index1_0 < 0 || __neo_array_index1_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index1_0]; })).task /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_sem(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index2_0 = (long long)(id-1); if(__neo_array_index2_0 < 0 || __neo_array_index2_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index2_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_flg(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index3_0 = (long long)(id-1); if(__neo_array_index3_0 < 0 || __neo_array_index3_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index3_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_mbx(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index4_0 = (long long)(id-1); if(__neo_array_index4_0 < 0 || __neo_array_index4_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index4_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_mtx(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_mtx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index5_0 = (long long)(id-1); if(__neo_array_index5_0 < 0 || __neo_array_index5_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mtx[__neo_array_index5_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_dtq(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_dtq"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index6_0 = (long long)(id-1); if(__neo_array_index6_0 < 0 || __neo_array_index6_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dtq[__neo_array_index6_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_pdq(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_pdq"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=2&&(*({ long long __neo_array_index7_0 = (long long)(id-1); if(__neo_array_index7_0 < 0 || __neo_array_index7_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_pdq[__neo_array_index7_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_mbf(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_mbf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=2&&(*({ long long __neo_array_index8_0 = (long long)(id-1); if(__neo_array_index8_0 < 0 || __neo_array_index8_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbf[__neo_array_index8_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_mpf(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_mpf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=2&&(*({ long long __neo_array_index9_0 = (long long)(id-1); if(__neo_array_index9_0 < 0 || __neo_array_index9_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpf[__neo_array_index9_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_mpl(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_mpl"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=2&&(*({ long long __neo_array_index10_0 = (long long)(id-1); if(__neo_array_index10_0 < 0 || __neo_array_index10_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpl[__neo_array_index10_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_alm(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_alm"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index11_0 = (long long)(id-1); if(__neo_array_index11_0 < 0 || __neo_array_index11_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index11_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static int valid_cyc(int  id  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "valid_cyc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return id>0&&id<=4&&(*({ long long __neo_array_index12_0 = (long long)(id-1); if(__neo_array_index12_0 < 0 || __neo_array_index12_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index12_0]; })).used /* uho */!=0;
    neo_current_frame = fr.prev;
}

static void process_time_events()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "process_time_events"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    void (*handler)(long )  ;
    long  exinf  ;
    int i_0;
    void (*handler_1)(long )  ;
    long  exinf_2  ;
    memset(&i, 0, sizeof(i));
    memset(&handler, 0, sizeof(handler));
    memset(&exinf, 0, sizeof(exinf));
    memset(&i_0, 0, sizeof(i_0));
    memset(&handler_1, 0, sizeof(handler_1));
    memset(&exinf_2, 0, sizeof(exinf_2));
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index13_0 = (long long)(i); if(__neo_array_index13_0 < 0 || __neo_array_index13_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index13_0]; })).used /* uho */!=0&&(*({ long long __neo_array_index14_0 = (long long)(i); if(__neo_array_index14_0 < 0 || __neo_array_index14_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index14_0]; })).active /* uho */!=0&&g_tick>=(*({ long long __neo_array_index15_0 = (long long)(i); if(__neo_array_index15_0 < 0 || __neo_array_index15_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index15_0]; })).due /* uho */) {
            handler=(*({ long long __neo_array_index16_0 = (long long)(i); if(__neo_array_index16_0 < 0 || __neo_array_index16_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index16_0]; })).handler /* uho */;
            exinf=(*({ long long __neo_array_index17_0 = (long long)(i); if(__neo_array_index17_0 < 0 || __neo_array_index17_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index17_0]; })).exinf /* uho */;
            (*({ long long __neo_array_index18_0 = (long long)(i); if(__neo_array_index18_0 < 0 || __neo_array_index18_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index18_0]; })).active=0;
            handler(exinf);
        }
    }
    for(i_0=0    ;i_0<4;i_0++){
        if((*({ long long __neo_array_index19_0 = (long long)(i_0); if(__neo_array_index19_0 < 0 || __neo_array_index19_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index19_0]; })).used /* uho */!=0&&(*({ long long __neo_array_index20_0 = (long long)(i_0); if(__neo_array_index20_0 < 0 || __neo_array_index20_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index20_0]; })).active /* uho */!=0&&g_tick>=(*({ long long __neo_array_index21_0 = (long long)(i_0); if(__neo_array_index21_0 < 0 || __neo_array_index21_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index21_0]; })).next /* uho */) {
            handler_1=(*({ long long __neo_array_index22_0 = (long long)(i_0); if(__neo_array_index22_0 < 0 || __neo_array_index22_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index22_0]; })).handler /* uho */;
            exinf_2=(*({ long long __neo_array_index23_0 = (long long)(i_0); if(__neo_array_index23_0 < 0 || __neo_array_index23_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index23_0]; })).exinf /* uho */;
            handler_1(exinf_2);
            if((*({ long long __neo_array_index24_0 = (long long)(i_0); if(__neo_array_index24_0 < 0 || __neo_array_index24_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index24_0]; })).interval /* uho */==0) {
                (*({ long long __neo_array_index25_0 = (long long)(i_0); if(__neo_array_index25_0 < 0 || __neo_array_index25_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index25_0]; })).interval=1;
            }
            (*({ long long __neo_array_index26_0 = (long long)(i_0); if(__neo_array_index26_0 < 0 || __neo_array_index26_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index26_0]; })).next /* uho */+=(*({ long long __neo_array_index27_0 = (long long)(i_0); if(__neo_array_index27_0 < 0 || __neo_array_index27_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index27_0]; })).interval /* uho */;
        }
    }
    neo_current_frame = fr.prev;
}

int  tk_cre_tsk(const struct anonymous_typeX5*  pk_ctsk  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<8;i++){
        if((*({ long long __neo_array_index28_0 = (long long)(i); if(__neo_array_index28_0 < 0 || __neo_array_index28_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index28_0]; })).task /* uho */==0) {
            (*({ long long __neo_array_index29_0 = (long long)(i); if(__neo_array_index29_0 < 0 || __neo_array_index29_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index29_0]; })).task=pk_ctsk->task;
            (*({ long long __neo_array_index30_0 = (long long)(i); if(__neo_array_index30_0 < 0 || __neo_array_index30_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index30_0]; })).exinf=pk_ctsk->exinf;
            (*({ long long __neo_array_index31_0 = (long long)(i); if(__neo_array_index31_0 < 0 || __neo_array_index31_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index31_0]; })).pri=pk_ctsk->itskpri;
            (*({ long long __neo_array_index32_0 = (long long)(i); if(__neo_array_index32_0 < 0 || __neo_array_index32_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index32_0]; })).state=(0);
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_sta_tsk(int  tskid  , long  stacd  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_sta_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_task(tskid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    (*({ long long __neo_array_index33_0 = (long long)(tskid-1); if(__neo_array_index33_0 < 0 || __neo_array_index33_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index33_0]; })).exinf=stacd;
    (*({ long long __neo_array_index34_0 = (long long)(tskid-1); if(__neo_array_index34_0 < 0 || __neo_array_index34_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index34_0]; })).state=(1);
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_chg_pri(int  tskid  , int  tskpri  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_chg_pri"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_task(tskid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    if(tskpri<=0) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    (*({ long long __neo_array_index35_0 = (long long)(tskid-1); if(__neo_array_index35_0 < 0 || __neo_array_index35_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index35_0]; })).pri=tskpri;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void tk_ext_tsk()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_ext_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(valid_task(g_current_tid)) {
        (*({ long long __neo_array_index36_0 = (long long)(g_current_tid-1); if(__neo_array_index36_0 < 0 || __neo_array_index36_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index36_0]; })).state=(3);
    }
    neo_current_frame = fr.prev;
}

void tk_dly_tsk(unsigned int  dlytim  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_dly_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned int  i  ;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<dlytim;i++){
        g_tick++;
        mmio_write32(0xe000e018u,g_tick);
        process_time_events();
    }
    neo_current_frame = fr.prev;
}

unsigned int  tk_get_tick()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_get_tick"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return g_tick;
    neo_current_frame = fr.prev;
}

int  tk_get_tid()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_get_tid"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return g_current_tid;
    neo_current_frame = fr.prev;
}

int  tk_ref_tsk(int  tskid  , struct anonymous_typeX21*  pk_rtsk  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_ref_tsk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_task(tskid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    pk_rtsk->tskstat=(*({ long long __neo_array_index37_0 = (long long)(tskid-1); if(__neo_array_index37_0 < 0 || __neo_array_index37_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index37_0]; })).state /* uho */;
    pk_rtsk->tskpri=(*({ long long __neo_array_index38_0 = (long long)(tskid-1); if(__neo_array_index38_0 < 0 || __neo_array_index38_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index38_0]; })).pri /* uho */;
    pk_rtsk->exinf=(*({ long long __neo_array_index39_0 = (long long)(tskid-1); if(__neo_array_index39_0 < 0 || __neo_array_index39_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index39_0]; })).exinf /* uho */;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_sem(const struct anonymous_typeX6*  pk_csem  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index40_0 = (long long)(i); if(__neo_array_index40_0 < 0 || __neo_array_index40_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index40_0]; })).used /* uho */==0) {
            (*({ long long __neo_array_index41_0 = (long long)(i); if(__neo_array_index41_0 < 0 || __neo_array_index41_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index41_0]; })).used=1;
            (*({ long long __neo_array_index42_0 = (long long)(i); if(__neo_array_index42_0 < 0 || __neo_array_index42_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index42_0]; })).count=pk_csem->isemcnt;
            (*({ long long __neo_array_index43_0 = (long long)(i); if(__neo_array_index43_0 < 0 || __neo_array_index43_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_sems[__neo_array_index43_0]; })).max=pk_csem->maxsem;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_sig_sem(int  semid  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_sig_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX23*  sem  ;
    memset(&sem, 0, sizeof(sem));
    if(!valid_sem(semid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    sem=&g_sems[semid-1];
    if(sem->count<sem->max) {
        sem->count++;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_wai_sem(int  semid  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_wai_sem"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX23*  sem  ;
    memset(&sem, 0, sizeof(sem));
    if(!valid_sem(semid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    sem=&g_sems[semid-1];
    if(sem->count<=0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    sem->count--;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_flg(const struct anonymous_typeX7*  pk_cflg  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index46_0 = (long long)(i); if(__neo_array_index46_0 < 0 || __neo_array_index46_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index46_0]; })).used /* uho */==0) {
            (*({ long long __neo_array_index47_0 = (long long)(i); if(__neo_array_index47_0 < 0 || __neo_array_index47_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index47_0]; })).used=1;
            (*({ long long __neo_array_index48_0 = (long long)(i); if(__neo_array_index48_0 < 0 || __neo_array_index48_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index48_0]; })).pattern=pk_cflg->iflgptn;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_set_flg(int  flgid  , unsigned int  setptn  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_set_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_flg(flgid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    (*({ long long __neo_array_index49_0 = (long long)(flgid-1); if(__neo_array_index49_0 < 0 || __neo_array_index49_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_flgs[__neo_array_index49_0]; })).pattern /* uho */|=setptn;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_wai_flg(int  flgid  , unsigned int  waiptn  , unsigned int  wfmode  , unsigned int*  p_flgptn  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_wai_flg"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX24*  flg  ;
    unsigned int  hit  ;
    memset(&flg, 0, sizeof(flg));
    memset(&hit, 0, sizeof(hit));
    if(!valid_flg(flgid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    flg=&g_flgs[flgid-1];
    if((wfmode&0x01)!=0) {
        hit=flg->pattern&waiptn;
    }
    else {
        hit=((((flg->pattern&waiptn)==waiptn))?(waiptn):(0));
    }
    if(hit==0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    *p_flgptn=flg->pattern;
    if((wfmode&0x10)!=0) {
        flg->pattern=0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_mbx(const struct anonymous_typeX8*  pk_cmbx  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    (void)pk_cmbx;
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index51_0 = (long long)(i); if(__neo_array_index51_0 < 0 || __neo_array_index51_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index51_0]; })).used /* uho */==0) {
            (*({ long long __neo_array_index52_0 = (long long)(i); if(__neo_array_index52_0 < 0 || __neo_array_index52_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index52_0]; })).used=1;
            (*({ long long __neo_array_index53_0 = (long long)(i); if(__neo_array_index53_0 < 0 || __neo_array_index53_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index53_0]; })).head=0;
            (*({ long long __neo_array_index54_0 = (long long)(i); if(__neo_array_index54_0 < 0 || __neo_array_index54_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbx[__neo_array_index54_0]; })).tail=0;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_snd_mbx(int  mbxid  , struct T_MSG*  pk_msg  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_snd_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX25*  mbx  ;
    memset(&mbx, 0, sizeof(mbx));
    if(!valid_mbx(mbxid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mbx=&g_mbx[mbxid-1];
    pk_msg->next=0;
    if(mbx->tail!=0) {
        mbx->tail->next=pk_msg;
    }
    else {
        mbx->head=pk_msg;
    }
    mbx->tail=pk_msg;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_rcv_mbx(int  mbxid  , struct T_MSG**  ppk_msg  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_rcv_mbx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX25*  mbx  ;
    memset(&mbx, 0, sizeof(mbx));
    if(!valid_mbx(mbxid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mbx=&g_mbx[mbxid-1];
    if(mbx->head==0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    *ppk_msg=mbx->head;
    mbx->head=mbx->head->next;
    if(mbx->head==0) {
        mbx->tail=0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_mtx(const struct anonymous_typeX9*  pk_cmtx  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_mtx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    (void)pk_cmtx;
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index57_0 = (long long)(i); if(__neo_array_index57_0 < 0 || __neo_array_index57_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mtx[__neo_array_index57_0]; })).used /* uho */==0) {
            (*({ long long __neo_array_index58_0 = (long long)(i); if(__neo_array_index58_0 < 0 || __neo_array_index58_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mtx[__neo_array_index58_0]; })).used=1;
            (*({ long long __neo_array_index59_0 = (long long)(i); if(__neo_array_index59_0 < 0 || __neo_array_index59_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mtx[__neo_array_index59_0]; })).locked=0;
            (*({ long long __neo_array_index60_0 = (long long)(i); if(__neo_array_index60_0 < 0 || __neo_array_index60_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mtx[__neo_array_index60_0]; })).owner=0;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_loc_mtx(int  mtxid  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_loc_mtx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX26*  mtx  ;
    memset(&mtx, 0, sizeof(mtx));
    if(!valid_mtx(mtxid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mtx=&g_mtx[mtxid-1];
    if(mtx->locked!=0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    mtx->locked=1;
    mtx->owner=g_current_tid;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_unl_mtx(int  mtxid  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_unl_mtx"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX26*  mtx  ;
    memset(&mtx, 0, sizeof(mtx));
    if(!valid_mtx(mtxid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mtx=&g_mtx[mtxid-1];
    if(mtx->locked==0||mtx->owner!=g_current_tid) {
                neo_current_frame = fr.prev;
        return (-52);
    }
    mtx->locked=0;
    mtx->owner=0;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_dtq(const struct anonymous_typeX10*  pk_cdtq  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_dtq"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int capacity;
    memset(&i, 0, sizeof(i));
    memset(&capacity, 0, sizeof(capacity));
    (void)pk_cdtq->dtq;
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index63_0 = (long long)(i); if(__neo_array_index63_0 < 0 || __neo_array_index63_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dtq[__neo_array_index63_0]; })).used /* uho */==0) {
            capacity=pk_cdtq->dtqcnt;
            if(capacity<=0) {
                capacity=1;
            }
            if(capacity>8) {
                capacity=8;
            }
            (*({ long long __neo_array_index64_0 = (long long)(i); if(__neo_array_index64_0 < 0 || __neo_array_index64_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dtq[__neo_array_index64_0]; })).used=1;
            (*({ long long __neo_array_index65_0 = (long long)(i); if(__neo_array_index65_0 < 0 || __neo_array_index65_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dtq[__neo_array_index65_0]; })).head=0;
            (*({ long long __neo_array_index66_0 = (long long)(i); if(__neo_array_index66_0 < 0 || __neo_array_index66_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dtq[__neo_array_index66_0]; })).tail=0;
            (*({ long long __neo_array_index67_0 = (long long)(i); if(__neo_array_index67_0 < 0 || __neo_array_index67_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dtq[__neo_array_index67_0]; })).count=0;
            (*({ long long __neo_array_index68_0 = (long long)(i); if(__neo_array_index68_0 < 0 || __neo_array_index68_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_dtq[__neo_array_index68_0]; })).capacity=capacity;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_snd_dtq(int  dtqid  , long  data  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_snd_dtq"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX27*  dtq  ;
    memset(&dtq, 0, sizeof(dtq));
    if(!valid_dtq(dtqid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    dtq=&g_dtq[dtqid-1];
    if(dtq->count>=dtq->capacity) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    ({ long long __neo_array_index70_0 = (long long)(dtq->tail); if(__neo_array_index70_0 < 0 || __neo_array_index70_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } dtq->data[__neo_array_index70_0] = data; });
    dtq->tail=({ __typeof__(dtq->capacity) __neo_div_right1 = (dtq->capacity); if(__neo_div_right1 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((dtq->tail+1)) % __neo_div_right1; });
    dtq->count++;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_rcv_dtq(int  dtqid  , long*  p_data  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_rcv_dtq"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX27*  dtq  ;
    memset(&dtq, 0, sizeof(dtq));
    if(!valid_dtq(dtqid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    dtq=&g_dtq[dtqid-1];
    if(dtq->count<=0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    *p_data=(*({ long long __neo_array_index72_0 = (long long)(dtq->head); if(__neo_array_index72_0 < 0 || __neo_array_index72_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &dtq->data[__neo_array_index72_0]; }));
    dtq->head=({ __typeof__(dtq->capacity) __neo_div_right2 = (dtq->capacity); if(__neo_div_right2 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((dtq->head+1)) % __neo_div_right2; });
    dtq->count--;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_pdq(const struct anonymous_typeX11*  pk_cpdq  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_pdq"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int capacity;
    int  max_priority  ;
    memset(&i, 0, sizeof(i));
    memset(&capacity, 0, sizeof(capacity));
    memset(&max_priority, 0, sizeof(max_priority));
    (void)pk_cpdq->pdq;
    for(i=0    ;i<2;i++){
        if((*({ long long __neo_array_index73_0 = (long long)(i); if(__neo_array_index73_0 < 0 || __neo_array_index73_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_pdq[__neo_array_index73_0]; })).used /* uho */==0) {
            capacity=pk_cpdq->pdqcnt;
            max_priority=pk_cpdq->maxdpri;
            if(capacity<=0) {
                capacity=1;
            }
            if(capacity>8) {
                capacity=8;
            }
            if(max_priority<=0) {
                max_priority=1;
            }
            (*({ long long __neo_array_index74_0 = (long long)(i); if(__neo_array_index74_0 < 0 || __neo_array_index74_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_pdq[__neo_array_index74_0]; })).used=1;
            (*({ long long __neo_array_index75_0 = (long long)(i); if(__neo_array_index75_0 < 0 || __neo_array_index75_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_pdq[__neo_array_index75_0]; })).count=0;
            (*({ long long __neo_array_index76_0 = (long long)(i); if(__neo_array_index76_0 < 0 || __neo_array_index76_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_pdq[__neo_array_index76_0]; })).capacity=capacity;
            (*({ long long __neo_array_index77_0 = (long long)(i); if(__neo_array_index77_0 < 0 || __neo_array_index77_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_pdq[__neo_array_index77_0]; })).max_priority=max_priority;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_snd_pdq(int  pdqid  , long  data  , int  datapri  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_snd_pdq"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX28*  pdq  ;
    memset(&pdq, 0, sizeof(pdq));
    if(!valid_pdq(pdqid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    pdq=&g_pdq[pdqid-1];
    if(datapri<=0||datapri>pdq->max_priority) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    if(pdq->count>=pdq->capacity) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    ({ long long __neo_array_index79_0 = (long long)(pdq->count); if(__neo_array_index79_0 < 0 || __neo_array_index79_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } pdq->data[__neo_array_index79_0] = data; });
    ({ long long __neo_array_index80_0 = (long long)(pdq->count); if(__neo_array_index80_0 < 0 || __neo_array_index80_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } pdq->priority[__neo_array_index80_0] = datapri; });
    pdq->count++;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_rcv_pdq(int  pdqid  , long*  p_data  , int*  p_datapri  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_rcv_pdq"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX28*  pdq  ;
    int best;
    int i;
    int i_3;
    memset(&pdq, 0, sizeof(pdq));
    memset(&best, 0, sizeof(best));
    memset(&i, 0, sizeof(i));
    memset(&i_3, 0, sizeof(i_3));
    if(!valid_pdq(pdqid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    pdq=&g_pdq[pdqid-1];
    if(pdq->count<=0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    best=0;
    for(i=1    ;i<pdq->count;i++){
        if((*({ long long __neo_array_index82_0 = (long long)(i); if(__neo_array_index82_0 < 0 || __neo_array_index82_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &pdq->priority[__neo_array_index82_0]; }))<(*({ long long __neo_array_index83_0 = (long long)(best); if(__neo_array_index83_0 < 0 || __neo_array_index83_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &pdq->priority[__neo_array_index83_0]; }))) {
            best=i;
        }
    }
    *p_data=(*({ long long __neo_array_index84_0 = (long long)(best); if(__neo_array_index84_0 < 0 || __neo_array_index84_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &pdq->data[__neo_array_index84_0]; }));
    *p_datapri=(*({ long long __neo_array_index85_0 = (long long)(best); if(__neo_array_index85_0 < 0 || __neo_array_index85_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &pdq->priority[__neo_array_index85_0]; }));
    for(i_3=best    ;i_3+1<pdq->count;i_3++){
        ({ long long __neo_array_index87_0 = (long long)(i_3); if(__neo_array_index87_0 < 0 || __neo_array_index87_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } pdq->data[__neo_array_index87_0] = (*({ long long __neo_array_index86_0 = (long long)(i_3+1); if(__neo_array_index86_0 < 0 || __neo_array_index86_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &pdq->data[__neo_array_index86_0]; })); });
        ({ long long __neo_array_index89_0 = (long long)(i_3); if(__neo_array_index89_0 < 0 || __neo_array_index89_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } pdq->priority[__neo_array_index89_0] = (*({ long long __neo_array_index88_0 = (long long)(i_3+1); if(__neo_array_index88_0 < 0 || __neo_array_index88_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &pdq->priority[__neo_array_index88_0]; })); });
    }
    pdq->count--;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_ref_pdq(int  pdqid  , struct anonymous_typeX12*  pk_rpdq  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_ref_pdq"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_pdq(pdqid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    pk_rpdq->msgcnt=(*({ long long __neo_array_index90_0 = (long long)(pdqid-1); if(__neo_array_index90_0 < 0 || __neo_array_index90_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_pdq[__neo_array_index90_0]; })).count /* uho */;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_mbf(const struct anonymous_typeX13*  pk_cmbf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_mbf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int capacity;
    int max_message;
    memset(&i, 0, sizeof(i));
    memset(&capacity, 0, sizeof(capacity));
    memset(&max_message, 0, sizeof(max_message));
    (void)pk_cmbf->bufptr;
    for(i=0    ;i<2;i++){
        if((*({ long long __neo_array_index91_0 = (long long)(i); if(__neo_array_index91_0 < 0 || __neo_array_index91_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbf[__neo_array_index91_0]; })).used /* uho */==0) {
            capacity=pk_cmbf->bufsz;
            max_message=pk_cmbf->maxmsz;
            if(capacity<=0) {
                capacity=1;
            }
            if(capacity>128) {
                capacity=128;
            }
            if(max_message<=0) {
                max_message=1;
            }
            if(max_message>capacity-1) {
                max_message=capacity-1;
            }
            (*({ long long __neo_array_index92_0 = (long long)(i); if(__neo_array_index92_0 < 0 || __neo_array_index92_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbf[__neo_array_index92_0]; })).used=1;
            (*({ long long __neo_array_index93_0 = (long long)(i); if(__neo_array_index93_0 < 0 || __neo_array_index93_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbf[__neo_array_index93_0]; })).head=0;
            (*({ long long __neo_array_index94_0 = (long long)(i); if(__neo_array_index94_0 < 0 || __neo_array_index94_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbf[__neo_array_index94_0]; })).tail=0;
            (*({ long long __neo_array_index95_0 = (long long)(i); if(__neo_array_index95_0 < 0 || __neo_array_index95_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbf[__neo_array_index95_0]; })).used_bytes=0;
            (*({ long long __neo_array_index96_0 = (long long)(i); if(__neo_array_index96_0 < 0 || __neo_array_index96_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbf[__neo_array_index96_0]; })).message_count=0;
            (*({ long long __neo_array_index97_0 = (long long)(i); if(__neo_array_index97_0 < 0 || __neo_array_index97_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbf[__neo_array_index97_0]; })).capacity=capacity;
            (*({ long long __neo_array_index98_0 = (long long)(i); if(__neo_array_index98_0 < 0 || __neo_array_index98_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mbf[__neo_array_index98_0]; })).max_message=max_message;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_snd_mbf(int  mbfid  , const void* msg, int  msgsz  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_snd_mbf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX29*  mbf  ;
    int i;
    memset(&mbf, 0, sizeof(mbf));
    memset(&i, 0, sizeof(i));
    if(!valid_mbf(mbfid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mbf=&g_mbf[mbfid-1];
    if(msgsz<=0||msgsz>mbf->max_message||msgsz>255) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    if(mbf->capacity-mbf->used_bytes<msgsz+1) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    const unsigned char*  src  =(const unsigned char* )msg;
    ({ long long __neo_array_index100_0 = (long long)(mbf->tail); if(__neo_array_index100_0 < 0 || __neo_array_index100_0 >= (long long)(128)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mbf->storage[__neo_array_index100_0] = (unsigned char )msgsz; });
    mbf->tail=({ __typeof__(mbf->capacity) __neo_div_right3 = (mbf->capacity); if(__neo_div_right3 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((mbf->tail+1)) % __neo_div_right3; });
    for(i=0    ;i<msgsz;i++){
        ({ long long __neo_array_index101_0 = (long long)(mbf->tail); if(__neo_array_index101_0 < 0 || __neo_array_index101_0 >= (long long)(128)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mbf->storage[__neo_array_index101_0] = src[i]; });
        mbf->tail=({ __typeof__(mbf->capacity) __neo_div_right4 = (mbf->capacity); if(__neo_div_right4 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((mbf->tail+1)) % __neo_div_right4; });
    }
    mbf->used_bytes+=msgsz+1;
    mbf->message_count++;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_rcv_mbf(int  mbfid  , void* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_rcv_mbf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX29*  mbf  ;
    unsigned char*  dst  ;
    int msgsz;
    int i;
    memset(&mbf, 0, sizeof(mbf));
    memset(&dst, 0, sizeof(dst));
    memset(&msgsz, 0, sizeof(msgsz));
    memset(&i, 0, sizeof(i));
    if(!valid_mbf(mbfid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mbf=&g_mbf[mbfid-1];
    if(mbf->message_count<=0) {
                neo_current_frame = fr.prev;
        return (-50);
    }
    dst=(unsigned char* )msg;
    msgsz=(*({ long long __neo_array_index103_0 = (long long)(mbf->head); if(__neo_array_index103_0 < 0 || __neo_array_index103_0 >= (long long)(128)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mbf->storage[__neo_array_index103_0]; }));
    mbf->head=({ __typeof__(mbf->capacity) __neo_div_right5 = (mbf->capacity); if(__neo_div_right5 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((mbf->head+1)) % __neo_div_right5; });
    for(i=0    ;i<msgsz;i++){
        dst[i]=(*({ long long __neo_array_index104_0 = (long long)(mbf->head); if(__neo_array_index104_0 < 0 || __neo_array_index104_0 >= (long long)(128)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mbf->storage[__neo_array_index104_0]; }));
        mbf->head=({ __typeof__(mbf->capacity) __neo_div_right6 = (mbf->capacity); if(__neo_div_right6 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } ((mbf->head+1)) % __neo_div_right6; });
    }
    mbf->used_bytes-=msgsz+1;
    mbf->message_count--;
        neo_current_frame = fr.prev;
    return msgsz;
    neo_current_frame = fr.prev;
}

int  tk_ref_mbf(int  mbfid  , struct anonymous_typeX14*  pk_rmbf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_ref_mbf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX29*  mbf  ;
    memset(&mbf, 0, sizeof(mbf));
    if(!valid_mbf(mbfid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mbf=&g_mbf[mbfid-1];
    pk_rmbf->frbufsz=mbf->capacity-mbf->used_bytes;
    pk_rmbf->msgcnt=mbf->message_count;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_mpf(const struct anonymous_typeX15*  pk_cmpf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_mpf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int block_count;
    int block_size;
    int n;
    memset(&i, 0, sizeof(i));
    memset(&block_count, 0, sizeof(block_count));
    memset(&block_size, 0, sizeof(block_size));
    memset(&n, 0, sizeof(n));
    (void)pk_cmpf->mpf;
    for(i=0    ;i<2;i++){
        if((*({ long long __neo_array_index106_0 = (long long)(i); if(__neo_array_index106_0 < 0 || __neo_array_index106_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpf[__neo_array_index106_0]; })).used /* uho */==0) {
            block_count=pk_cmpf->blkcnt;
            block_size=pk_cmpf->blksz;
            if(block_count<=0) {
                block_count=1;
            }
            if(block_count>4) {
                block_count=4;
            }
            if(block_size<=0) {
                block_size=1;
            }
            if(block_size>32) {
                block_size=32;
            }
            (*({ long long __neo_array_index107_0 = (long long)(i); if(__neo_array_index107_0 < 0 || __neo_array_index107_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpf[__neo_array_index107_0]; })).used=1;
            (*({ long long __neo_array_index108_0 = (long long)(i); if(__neo_array_index108_0 < 0 || __neo_array_index108_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpf[__neo_array_index108_0]; })).block_count=block_count;
            (*({ long long __neo_array_index109_0 = (long long)(i); if(__neo_array_index109_0 < 0 || __neo_array_index109_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpf[__neo_array_index109_0]; })).block_size=block_size;
            for(n=0            ;n<4;n++){
                ({ long long __neo_array_index111_0 = (long long)(n); if(__neo_array_index111_0 < 0 || __neo_array_index111_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (*({ long long __neo_array_index110_0 = (long long)(i); if(__neo_array_index110_0 < 0 || __neo_array_index110_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpf[__neo_array_index110_0]; })).used_blocks /* uho */[__neo_array_index111_0] = 0; });
            }
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_get_mpf(int  mpfid  , void** p_blk)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_get_mpf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX30*  mpf  ;
    int i;
    memset(&mpf, 0, sizeof(mpf));
    memset(&i, 0, sizeof(i));
    if(!valid_mpf(mpfid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mpf=&g_mpf[mpfid-1];
    for(i=0    ;i<mpf->block_count;i++){
        if((*({ long long __neo_array_index113_0 = (long long)(i); if(__neo_array_index113_0 < 0 || __neo_array_index113_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpf->used_blocks[__neo_array_index113_0]; }))==0) {
            ({ long long __neo_array_index114_0 = (long long)(i); if(__neo_array_index114_0 < 0 || __neo_array_index114_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpf->used_blocks[__neo_array_index114_0] = 1; });
            *p_blk=(void*)(mpf->storage+i*mpf->block_size);
                        neo_current_frame = fr.prev;
            return 0;
        }
    }
        neo_current_frame = fr.prev;
    return (-50);
    neo_current_frame = fr.prev;
}

int  tk_rel_mpf(int  mpfid  , void* blk)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_rel_mpf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX30*  mpf  ;
    unsigned char*  base  ;
    unsigned char*  p  ;
    int i;
    memset(&mpf, 0, sizeof(mpf));
    memset(&base, 0, sizeof(base));
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    if(!valid_mpf(mpfid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mpf=&g_mpf[mpfid-1];
    base=mpf->storage;
    p=(unsigned char* )blk;
    for(i=0    ;i<mpf->block_count;i++){
        if(p==base+i*mpf->block_size) {
            if((*({ long long __neo_array_index116_0 = (long long)(i); if(__neo_array_index116_0 < 0 || __neo_array_index116_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpf->used_blocks[__neo_array_index116_0]; }))==0) {
                                neo_current_frame = fr.prev;
                return (-52);
            }
            ({ long long __neo_array_index117_0 = (long long)(i); if(__neo_array_index117_0 < 0 || __neo_array_index117_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpf->used_blocks[__neo_array_index117_0] = 0; });
                        neo_current_frame = fr.prev;
            return 0;
        }
    }
        neo_current_frame = fr.prev;
    return (-18);
    neo_current_frame = fr.prev;
}

int  tk_cre_mpl(const struct anonymous_typeX16*  pk_cmpl  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_mpl"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    int pool_size;
    memset(&i, 0, sizeof(i));
    memset(&pool_size, 0, sizeof(pool_size));
    (void)pk_cmpl->mpl;
    for(i=0    ;i<2;i++){
        if((*({ long long __neo_array_index118_0 = (long long)(i); if(__neo_array_index118_0 < 0 || __neo_array_index118_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpl[__neo_array_index118_0]; })).used /* uho */==0) {
            pool_size=pk_cmpl->mplsz;
            if(pool_size<=0) {
                pool_size=1;
            }
            if(pool_size>128) {
                pool_size=128;
            }
            (*({ long long __neo_array_index119_0 = (long long)(i); if(__neo_array_index119_0 < 0 || __neo_array_index119_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpl[__neo_array_index119_0]; })).used=1;
            (*({ long long __neo_array_index120_0 = (long long)(i); if(__neo_array_index120_0 < 0 || __neo_array_index120_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpl[__neo_array_index120_0]; })).pool_size=pool_size;
            (*({ long long __neo_array_index121_0 = (long long)(i); if(__neo_array_index121_0 < 0 || __neo_array_index121_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpl[__neo_array_index121_0]; })).region_count=1;
            ({ long long __neo_array_index123_0 = (long long)(0); if(__neo_array_index123_0 < 0 || __neo_array_index123_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (*({ long long __neo_array_index122_0 = (long long)(i); if(__neo_array_index122_0 < 0 || __neo_array_index122_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpl[__neo_array_index122_0]; })).offsets /* uho */[__neo_array_index123_0] = 0; });
            ({ long long __neo_array_index125_0 = (long long)(0); if(__neo_array_index125_0 < 0 || __neo_array_index125_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (*({ long long __neo_array_index124_0 = (long long)(i); if(__neo_array_index124_0 < 0 || __neo_array_index124_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpl[__neo_array_index124_0]; })).sizes /* uho */[__neo_array_index125_0] = pool_size; });
            ({ long long __neo_array_index127_0 = (long long)(0); if(__neo_array_index127_0 < 0 || __neo_array_index127_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (*({ long long __neo_array_index126_0 = (long long)(i); if(__neo_array_index126_0 < 0 || __neo_array_index126_0 >= (long long)(2)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_mpl[__neo_array_index126_0]; })).allocated /* uho */[__neo_array_index127_0] = 0; });
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_get_mpl(int  mplid  , int  blksz  , void** p_blk)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_get_mpl"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX31*  mpl  ;
    int size;
    int i;
    int n;
    memset(&mpl, 0, sizeof(mpl));
    memset(&size, 0, sizeof(size));
    memset(&i, 0, sizeof(i));
    memset(&n, 0, sizeof(n));
    if(!valid_mpl(mplid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    if(blksz<=0) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mpl=&g_mpl[mplid-1];
    size=(blksz+3)&~3;
    for(i=0    ;i<mpl->region_count;i++){
        if((*({ long long __neo_array_index129_0 = (long long)(i); if(__neo_array_index129_0 < 0 || __neo_array_index129_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->allocated[__neo_array_index129_0]; }))==0&&(*({ long long __neo_array_index130_0 = (long long)(i); if(__neo_array_index130_0 < 0 || __neo_array_index130_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index130_0]; }))>=size) {
            if((*({ long long __neo_array_index131_0 = (long long)(i); if(__neo_array_index131_0 < 0 || __neo_array_index131_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index131_0]; }))>size&&mpl->region_count<8) {
                for(n=mpl->region_count                ;n>i+1;n--){
                    ({ long long __neo_array_index133_0 = (long long)(n); if(__neo_array_index133_0 < 0 || __neo_array_index133_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->offsets[__neo_array_index133_0] = (*({ long long __neo_array_index132_0 = (long long)(n-1); if(__neo_array_index132_0 < 0 || __neo_array_index132_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->offsets[__neo_array_index132_0]; })); });
                    ({ long long __neo_array_index135_0 = (long long)(n); if(__neo_array_index135_0 < 0 || __neo_array_index135_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->sizes[__neo_array_index135_0] = (*({ long long __neo_array_index134_0 = (long long)(n-1); if(__neo_array_index134_0 < 0 || __neo_array_index134_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index134_0]; })); });
                    ({ long long __neo_array_index137_0 = (long long)(n); if(__neo_array_index137_0 < 0 || __neo_array_index137_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->allocated[__neo_array_index137_0] = (*({ long long __neo_array_index136_0 = (long long)(n-1); if(__neo_array_index136_0 < 0 || __neo_array_index136_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->allocated[__neo_array_index136_0]; })); });
                }
                ({ long long __neo_array_index139_0 = (long long)(i+1); if(__neo_array_index139_0 < 0 || __neo_array_index139_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->offsets[__neo_array_index139_0] = (*({ long long __neo_array_index138_0 = (long long)(i); if(__neo_array_index138_0 < 0 || __neo_array_index138_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->offsets[__neo_array_index138_0]; }))+size; });
                ({ long long __neo_array_index141_0 = (long long)(i+1); if(__neo_array_index141_0 < 0 || __neo_array_index141_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->sizes[__neo_array_index141_0] = (*({ long long __neo_array_index140_0 = (long long)(i); if(__neo_array_index140_0 < 0 || __neo_array_index140_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index140_0]; }))-size; });
                ({ long long __neo_array_index142_0 = (long long)(i+1); if(__neo_array_index142_0 < 0 || __neo_array_index142_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->allocated[__neo_array_index142_0] = 0; });
                mpl->region_count++;
                ({ long long __neo_array_index143_0 = (long long)(i); if(__neo_array_index143_0 < 0 || __neo_array_index143_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->sizes[__neo_array_index143_0] = size; });
            }
            ({ long long __neo_array_index144_0 = (long long)(i); if(__neo_array_index144_0 < 0 || __neo_array_index144_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->allocated[__neo_array_index144_0] = 1; });
            *p_blk=(void*)(mpl->storage+(*({ long long __neo_array_index145_0 = (long long)(i); if(__neo_array_index145_0 < 0 || __neo_array_index145_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->offsets[__neo_array_index145_0]; })));
                        neo_current_frame = fr.prev;
            return 0;
        }
    }
        neo_current_frame = fr.prev;
    return (-50);
    neo_current_frame = fr.prev;
}

int  tk_rel_mpl(int  mplid  , void* blk)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_rel_mpl"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX31*  mpl  ;
    unsigned char*  p  ;
    int i;
    int n;
    int n_4;
    memset(&mpl, 0, sizeof(mpl));
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    memset(&n, 0, sizeof(n));
    memset(&n_4, 0, sizeof(n_4));
    if(!valid_mpl(mplid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mpl=&g_mpl[mplid-1];
    p=(unsigned char* )blk;
    for(i=0    ;i<mpl->region_count;i++){
        if(p==mpl->storage+(*({ long long __neo_array_index147_0 = (long long)(i); if(__neo_array_index147_0 < 0 || __neo_array_index147_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->offsets[__neo_array_index147_0]; }))) {
            if((*({ long long __neo_array_index148_0 = (long long)(i); if(__neo_array_index148_0 < 0 || __neo_array_index148_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->allocated[__neo_array_index148_0]; }))==0) {
                                neo_current_frame = fr.prev;
                return (-52);
            }
            ({ long long __neo_array_index149_0 = (long long)(i); if(__neo_array_index149_0 < 0 || __neo_array_index149_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->allocated[__neo_array_index149_0] = 0; });
            if(i+1<mpl->region_count&&(*({ long long __neo_array_index150_0 = (long long)(i+1); if(__neo_array_index150_0 < 0 || __neo_array_index150_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->allocated[__neo_array_index150_0]; }))==0) {
                (*({ long long __neo_array_index151_0 = (long long)(i); if(__neo_array_index151_0 < 0 || __neo_array_index151_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index151_0]; }))+=(*({ long long __neo_array_index152_0 = (long long)(i+1); if(__neo_array_index152_0 < 0 || __neo_array_index152_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index152_0]; }));
                for(n=i+1                ;n+1<mpl->region_count;n++){
                    ({ long long __neo_array_index154_0 = (long long)(n); if(__neo_array_index154_0 < 0 || __neo_array_index154_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->offsets[__neo_array_index154_0] = (*({ long long __neo_array_index153_0 = (long long)(n+1); if(__neo_array_index153_0 < 0 || __neo_array_index153_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->offsets[__neo_array_index153_0]; })); });
                    ({ long long __neo_array_index156_0 = (long long)(n); if(__neo_array_index156_0 < 0 || __neo_array_index156_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->sizes[__neo_array_index156_0] = (*({ long long __neo_array_index155_0 = (long long)(n+1); if(__neo_array_index155_0 < 0 || __neo_array_index155_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index155_0]; })); });
                    ({ long long __neo_array_index158_0 = (long long)(n); if(__neo_array_index158_0 < 0 || __neo_array_index158_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->allocated[__neo_array_index158_0] = (*({ long long __neo_array_index157_0 = (long long)(n+1); if(__neo_array_index157_0 < 0 || __neo_array_index157_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->allocated[__neo_array_index157_0]; })); });
                }
                mpl->region_count--;
            }
            if(i>0&&(*({ long long __neo_array_index159_0 = (long long)(i-1); if(__neo_array_index159_0 < 0 || __neo_array_index159_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->allocated[__neo_array_index159_0]; }))==0) {
                (*({ long long __neo_array_index160_0 = (long long)(i-1); if(__neo_array_index160_0 < 0 || __neo_array_index160_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index160_0]; }))+=(*({ long long __neo_array_index161_0 = (long long)(i); if(__neo_array_index161_0 < 0 || __neo_array_index161_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index161_0]; }));
                for(n_4=i                ;n_4+1<mpl->region_count;n_4++){
                    ({ long long __neo_array_index163_0 = (long long)(n_4); if(__neo_array_index163_0 < 0 || __neo_array_index163_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->offsets[__neo_array_index163_0] = (*({ long long __neo_array_index162_0 = (long long)(n_4+1); if(__neo_array_index162_0 < 0 || __neo_array_index162_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->offsets[__neo_array_index162_0]; })); });
                    ({ long long __neo_array_index165_0 = (long long)(n_4); if(__neo_array_index165_0 < 0 || __neo_array_index165_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->sizes[__neo_array_index165_0] = (*({ long long __neo_array_index164_0 = (long long)(n_4+1); if(__neo_array_index164_0 < 0 || __neo_array_index164_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index164_0]; })); });
                    ({ long long __neo_array_index167_0 = (long long)(n_4); if(__neo_array_index167_0 < 0 || __neo_array_index167_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } mpl->allocated[__neo_array_index167_0] = (*({ long long __neo_array_index166_0 = (long long)(n_4+1); if(__neo_array_index166_0 < 0 || __neo_array_index166_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->allocated[__neo_array_index166_0]; })); });
                }
                mpl->region_count--;
            }
                        neo_current_frame = fr.prev;
            return 0;
        }
    }
        neo_current_frame = fr.prev;
    return (-18);
    neo_current_frame = fr.prev;
}

int  tk_ref_mpl(int  mplid  , struct anonymous_typeX17*  pk_rmpl  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_ref_mpl"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX31*  mpl  ;
    int free_size;
    int max_size;
    int i;
    memset(&mpl, 0, sizeof(mpl));
    memset(&free_size, 0, sizeof(free_size));
    memset(&max_size, 0, sizeof(max_size));
    memset(&i, 0, sizeof(i));
    if(!valid_mpl(mplid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    mpl=&g_mpl[mplid-1];
    free_size=0;
    max_size=0;
    for(i=0    ;i<mpl->region_count;i++){
        if((*({ long long __neo_array_index169_0 = (long long)(i); if(__neo_array_index169_0 < 0 || __neo_array_index169_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->allocated[__neo_array_index169_0]; }))==0) {
            free_size+=(*({ long long __neo_array_index170_0 = (long long)(i); if(__neo_array_index170_0 < 0 || __neo_array_index170_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index170_0]; }));
            if((*({ long long __neo_array_index171_0 = (long long)(i); if(__neo_array_index171_0 < 0 || __neo_array_index171_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index171_0]; }))>max_size) {
                max_size=(*({ long long __neo_array_index172_0 = (long long)(i); if(__neo_array_index172_0 < 0 || __neo_array_index172_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &mpl->sizes[__neo_array_index172_0]; }));
            }
        }
    }
    pk_rmpl->frsz=free_size;
    pk_rmpl->maxsz=max_size;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_alm(const struct anonymous_typeX18*  pk_calm  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_alm"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index173_0 = (long long)(i); if(__neo_array_index173_0 < 0 || __neo_array_index173_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index173_0]; })).used /* uho */==0) {
            (*({ long long __neo_array_index174_0 = (long long)(i); if(__neo_array_index174_0 < 0 || __neo_array_index174_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index174_0]; })).used=1;
            (*({ long long __neo_array_index175_0 = (long long)(i); if(__neo_array_index175_0 < 0 || __neo_array_index175_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index175_0]; })).active=0;
            (*({ long long __neo_array_index176_0 = (long long)(i); if(__neo_array_index176_0 < 0 || __neo_array_index176_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index176_0]; })).handler=pk_calm->almhdr;
            (*({ long long __neo_array_index177_0 = (long long)(i); if(__neo_array_index177_0 < 0 || __neo_array_index177_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index177_0]; })).exinf=pk_calm->exinf;
            (*({ long long __neo_array_index178_0 = (long long)(i); if(__neo_array_index178_0 < 0 || __neo_array_index178_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index178_0]; })).due=0;
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_sta_alm(int  almid  , unsigned int  almtim  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_sta_alm"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_alm(almid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    if(almtim==0) {
        almtim=1;
    }
    (*({ long long __neo_array_index179_0 = (long long)(almid-1); if(__neo_array_index179_0 < 0 || __neo_array_index179_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index179_0]; })).due=g_tick+almtim;
    (*({ long long __neo_array_index180_0 = (long long)(almid-1); if(__neo_array_index180_0 < 0 || __neo_array_index180_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index180_0]; })).active=1;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_stp_alm(int  almid  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_stp_alm"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_alm(almid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    (*({ long long __neo_array_index181_0 = (long long)(almid-1); if(__neo_array_index181_0 < 0 || __neo_array_index181_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_alm[__neo_array_index181_0]; })).active=0;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_cre_cyc(const struct anonymous_typeX19*  pk_ccyc  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_cre_cyc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    unsigned int  interval  ;
    memset(&i, 0, sizeof(i));
    memset(&interval, 0, sizeof(interval));
    for(i=0    ;i<4;i++){
        if((*({ long long __neo_array_index182_0 = (long long)(i); if(__neo_array_index182_0 < 0 || __neo_array_index182_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index182_0]; })).used /* uho */==0) {
            interval=pk_ccyc->cyctim;
            if(interval==0) {
                interval=1;
            }
            (*({ long long __neo_array_index183_0 = (long long)(i); if(__neo_array_index183_0 < 0 || __neo_array_index183_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index183_0]; })).used=1;
            (*({ long long __neo_array_index184_0 = (long long)(i); if(__neo_array_index184_0 < 0 || __neo_array_index184_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index184_0]; })).active=0;
            (*({ long long __neo_array_index185_0 = (long long)(i); if(__neo_array_index185_0 < 0 || __neo_array_index185_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index185_0]; })).handler=pk_ccyc->cychdr;
            (*({ long long __neo_array_index186_0 = (long long)(i); if(__neo_array_index186_0 < 0 || __neo_array_index186_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index186_0]; })).exinf=pk_ccyc->exinf;
            (*({ long long __neo_array_index187_0 = (long long)(i); if(__neo_array_index187_0 < 0 || __neo_array_index187_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index187_0]; })).interval=interval;
            (*({ long long __neo_array_index188_0 = (long long)(i); if(__neo_array_index188_0 < 0 || __neo_array_index188_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index188_0]; })).next=g_tick+pk_ccyc->cycphs;
            if((*({ long long __neo_array_index189_0 = (long long)(i); if(__neo_array_index189_0 < 0 || __neo_array_index189_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index189_0]; })).next /* uho */==g_tick) {
                (*({ long long __neo_array_index190_0 = (long long)(i); if(__neo_array_index190_0 < 0 || __neo_array_index190_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index190_0]; })).next /* uho */++;
            }
                        neo_current_frame = fr.prev;
            return i+1;
        }
    }
        neo_current_frame = fr.prev;
    return (-34);
    neo_current_frame = fr.prev;
}

int  tk_sta_cyc(int  cycid  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_sta_cyc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_cyc(cycid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    if((*({ long long __neo_array_index191_0 = (long long)(cycid-1); if(__neo_array_index191_0 < 0 || __neo_array_index191_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index191_0]; })).next /* uho */<=g_tick) {
        (*({ long long __neo_array_index192_0 = (long long)(cycid-1); if(__neo_array_index192_0 < 0 || __neo_array_index192_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index192_0]; })).next=g_tick+(*({ long long __neo_array_index193_0 = (long long)(cycid-1); if(__neo_array_index193_0 < 0 || __neo_array_index193_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index193_0]; })).interval /* uho */;
    }
    (*({ long long __neo_array_index194_0 = (long long)(cycid-1); if(__neo_array_index194_0 < 0 || __neo_array_index194_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index194_0]; })).active=1;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int  tk_stp_cyc(int  cycid  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_stp_cyc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!valid_cyc(cycid)) {
                neo_current_frame = fr.prev;
        return (-18);
    }
    (*({ long long __neo_array_index195_0 = (long long)(cycid-1); if(__neo_array_index195_0 < 0 || __neo_array_index195_0 >= (long long)(4)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_cyc[__neo_array_index195_0]; })).active=0;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

static void tk_sta_ker()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_sta_ker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int  best  ;
    int  best_pri  ;
    int i;
    void (*entry)(long )  ;
    long  exinf  ;
    memset(&best, 0, sizeof(best));
    memset(&best_pri, 0, sizeof(best_pri));
    memset(&i, 0, sizeof(i));
    memset(&entry, 0, sizeof(entry));
    memset(&exinf, 0, sizeof(exinf));
    for(;;){
        best=0;
        best_pri=0x7fffffff;
        for(i=0        ;i<8;i++){
            if((*({ long long __neo_array_index196_0 = (long long)(i); if(__neo_array_index196_0 < 0 || __neo_array_index196_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index196_0]; })).state /* uho */==(1)&&(*({ long long __neo_array_index197_0 = (long long)(i); if(__neo_array_index197_0 < 0 || __neo_array_index197_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index197_0]; })).pri /* uho */<best_pri) {
                best=i+1;
                best_pri=(*({ long long __neo_array_index198_0 = (long long)(i); if(__neo_array_index198_0 < 0 || __neo_array_index198_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index198_0]; })).pri /* uho */;
            }
        }
        if(best==0) {
            break;
        }
        g_current_tid=best;
        (*({ long long __neo_array_index199_0 = (long long)(best-1); if(__neo_array_index199_0 < 0 || __neo_array_index199_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index199_0]; })).state=(2);
        entry=(*({ long long __neo_array_index200_0 = (long long)(best-1); if(__neo_array_index200_0 < 0 || __neo_array_index200_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index200_0]; })).task /* uho */;
        exinf=(*({ long long __neo_array_index201_0 = (long long)(best-1); if(__neo_array_index201_0 < 0 || __neo_array_index201_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index201_0]; })).exinf /* uho */;
        entry(exinf);
        if((*({ long long __neo_array_index202_0 = (long long)(best-1); if(__neo_array_index202_0 < 0 || __neo_array_index202_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index202_0]; })).state /* uho */==(2)) {
            (*({ long long __neo_array_index203_0 = (long long)(best-1); if(__neo_array_index203_0 < 0 || __neo_array_index203_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &g_tasks[__neo_array_index203_0]; })).state=(3);
        }
    }
    neo_current_frame = fr.prev;
}

static void alarm_handler(long  exinf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "alarm_handler"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    g_alarm_count+=(int)exinf;
    tk_puts("alarm fired\n");
    neo_current_frame = fr.prev;
}

static void cyclic_handler(long  exinf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "cyclic_handler"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    g_cyclic_count+=(int)exinf;
    tk_puts("cyclic fired\n");
    neo_current_frame = fr.prev;
}

static void producer_task(long  exinf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "producer_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* blk;
    int* value;
    int* values;
    memset(&blk, 0, sizeof(blk));
    memset(&value, 0, sizeof(value));
    memset(&values, 0, sizeof(values));
    (void)exinf;
    blk=0;
    tk_puts("task producer start\n");
    if(tk_loc_mtx(g_mutex)==0) {
        g_mutex_score+=10;
        tk_puts("task producer locked mutex\n");
        tk_unl_mtx(g_mutex);
    }
    g_msg.value=42;
    g_msg_value=42;
    tk_snd_mbx(g_mbox,&g_msg.hdr /* uho */);
    if(tk_get_mpf(g_mempool,&blk)==0) {
        value=(int*)blk;
        *value=7;
        tk_snd_dtq(g_dataq,(long )blk);
        tk_puts("task producer sent dtq\n");
    }
    if(tk_get_mpl(g_varpool,12,&g_varblock)==0) {
        values=(int*)g_varblock;
        values[0]=11;
        values[1]=13;
        tk_puts("task producer allocated mpl\n");
    }
    if(tk_snd_mbf(g_messagebuf,"neo-c",5)==0) {
        tk_puts("task producer sent mbf\n");
    }
    if(tk_snd_pdq(g_pridataq,100,5)==0&&tk_snd_pdq(g_pridataq,7,1)==0) {
        tk_puts("task producer sent pdq\n");
    }
    tk_sig_sem(g_sem);
    tk_set_flg(g_flag,0x01);
    tk_dly_tsk(3);
    tk_puts("task producer done\n");
    tk_ext_tsk();
    neo_current_frame = fr.prev;
}

static void worker_task(long  exinf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "worker_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct T_MSG*  raw  ;
    long  data  ;
    long  priority_data  ;
    int  data_priority  ;
    struct anonymous_typeX34*  msg  ;
    int* value;
    int* values;
    int  msgsz  ;
    memset(&raw, 0, sizeof(raw));
    memset(&data, 0, sizeof(data));
    memset(&priority_data, 0, sizeof(priority_data));
    memset(&data_priority, 0, sizeof(data_priority));
    memset(&msg, 0, sizeof(msg));
    memset(&value, 0, sizeof(value));
    memset(&values, 0, sizeof(values));
    memset(&msgsz, 0, sizeof(msgsz));
    (void)exinf;
    raw=0;
    data=0;
    priority_data=0;
    data_priority=0;
    char message[8];
    memset(&message, 0, sizeof(message));
    tk_puts("task worker start\n");
    if(tk_loc_mtx(g_mutex)==0) {
        g_mutex_score+=20;
        tk_puts("task worker locked mutex\n");
        tk_unl_mtx(g_mutex);
    }
    if(tk_wai_sem(g_sem)==0&&tk_rcv_mbx(g_mbox,&raw)==0) {
        msg=(struct anonymous_typeX34* )raw;
        g_worker_sum+=msg->value;
        tk_puts("task worker got message\n");
    }
    if(tk_rcv_dtq(g_dataq,&data)==0) {
        value=(int*)data;
        g_worker_sum+=*value;
        tk_rel_mpf(g_mempool,(void*)data);
        tk_puts("task worker got dtq\n");
    }
    if(g_varblock!=0) {
        values=(int*)g_varblock;
        g_varpool_score=values[0]+values[1];
        tk_rel_mpl(g_varpool,g_varblock);
        g_varblock=0;
        tk_puts("task worker released mpl\n");
    }
    msgsz=tk_rcv_mbf(g_messagebuf,message);
    if(msgsz==5) {
        g_messagebuf_score=(int)(*({ long long __neo_array_index204_0 = (long long)(0); if(__neo_array_index204_0 < 0 || __neo_array_index204_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &message[__neo_array_index204_0]; }))+(int)(*({ long long __neo_array_index205_0 = (long long)(4); if(__neo_array_index205_0 < 0 || __neo_array_index205_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &message[__neo_array_index205_0]; }));
        tk_puts("task worker received mbf\n");
    }
    if(tk_rcv_pdq(g_pridataq,&priority_data,&data_priority)==0&&priority_data==7&&data_priority==1&&tk_rcv_pdq(g_pridataq,&data,&data_priority)==0&&data==100&&data_priority==5) {
        g_pdq_score=(int)priority_data*100+(int)data;
        tk_puts("task worker received pdq priority order\n");
    }
    tk_set_flg(g_flag,0x02);
    tk_ext_tsk();
    neo_current_frame = fr.prev;
}

static void monitor_task(long  exinf  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "monitor_task"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned int  pattern  ;
    struct anonymous_typeX21  rtsk  ;
    struct anonymous_typeX12  rpdq  ;
    struct anonymous_typeX14  rmbf  ;
    struct anonymous_typeX17  rmpl  ;
    memset(&pattern, 0, sizeof(pattern));
    memset(&rtsk, 0, sizeof(rtsk));
    memset(&rpdq, 0, sizeof(rpdq));
    memset(&rmbf, 0, sizeof(rmbf));
    memset(&rmpl, 0, sizeof(rmpl));
    (void)exinf;
    pattern=0;
    rpdq.msgcnt=0;
    rmbf.frbufsz=0;
    rmbf.msgcnt=0;
    rmpl.frsz=0;
    rmpl.maxsz=0;
    tk_puts("task monitor start\n");
    if(tk_wai_flg(g_flag,0x03,0x00|0x10,&pattern)!=0) {
        tk_puts("monitor flag wait failed\n");
        tk_kernel_exit(1);
    }
    tk_puts("monitor flags=");
    tk_puthex(pattern);
    tk_puts(" tick=");
    tk_puthex(tk_get_tick());
    tk_puts(" tid=");
    tk_puthex((unsigned int )tk_get_tid());
    tk_puts("\n");
    tk_puts("monitor alarms=");
    tk_puthex((unsigned int )g_alarm_count);
    tk_puts(" cyclic=");
    tk_puthex((unsigned int )g_cyclic_count);
    tk_puts("\n");
    tk_puts("monitor mutex=");
    tk_puthex((unsigned int )g_mutex_score);
    tk_puts(" pri_changed=");
    tk_puthex((unsigned int )g_pri_changed);
    tk_puts("\n");
    if(tk_ref_mpl(g_varpool,&rmpl)==0) {
        tk_puts("monitor mpl_score=");
        tk_puthex((unsigned int )g_varpool_score);
        tk_puts(" free=");
        tk_puthex((unsigned int )rmpl.frsz /* uho */);
        tk_puts(" max=");
        tk_puthex((unsigned int )rmpl.maxsz /* uho */);
        tk_puts("\n");
    }
    if(tk_ref_mbf(g_messagebuf,&rmbf)==0) {
        tk_puts("monitor mbf_score=");
        tk_puthex((unsigned int )g_messagebuf_score);
        tk_puts(" free=");
        tk_puthex((unsigned int )rmbf.frbufsz /* uho */);
        tk_puts(" count=");
        tk_puthex((unsigned int )rmbf.msgcnt /* uho */);
        tk_puts("\n");
    }
    if(tk_ref_pdq(g_pridataq,&rpdq)==0) {
        tk_puts("monitor pdq_score=");
        tk_puthex((unsigned int )g_pdq_score);
        tk_puts(" count=");
        tk_puthex((unsigned int )rpdq.msgcnt /* uho */);
        tk_puts("\n");
    }
    if(tk_ref_tsk(tk_get_tid(),&rtsk)==0) {
        tk_puts("monitor self state=");
        tk_puthex((unsigned int )rtsk.tskstat /* uho */);
        tk_puts(" pri=");
        tk_puthex((unsigned int )rtsk.tskpri /* uho */);
        tk_puts("\n");
    }
    if(g_msg_value==42&&g_worker_sum==49&&pattern==0x03&&g_alarm_count==5&&g_cyclic_count==3&&g_mutex_score==30&&g_pri_changed==1&&g_varpool_score==24&&rmpl.frsz /* uho */==64&&rmpl.maxsz /* uho */==64&&g_messagebuf_score==209&&rmbf.frbufsz /* uho */==64&&rmbf.msgcnt /* uho */==0&&g_pdq_score==800&&rpdq.msgcnt /* uho */==0) {
        tk_puts("uT-Kernel demo PASS\n");
        tk_kernel_exit(0);
    }
    tk_puts("uT-Kernel demo FAIL\n");
    tk_kernel_exit(1);
    come_call_finalizer(T_RTSK_finalize, (&rtsk), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1360, 1);
    come_call_finalizer(T_RPDQ_finalize, (&rpdq), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1360, 2);
    come_call_finalizer(T_RMBF_finalize, (&rmbf), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1360, 3);
    come_call_finalizer(T_RMPL_finalize, (&rmpl), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1360, 4);
    neo_current_frame = fr.prev;
}

static void T_RTSK_finalize(struct anonymous_typeX21*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_RTSK_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_RPDQ_finalize(struct anonymous_typeX12*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_RPDQ_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_RMBF_finalize(struct anonymous_typeX14*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_RMBF_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_RMPL_finalize(struct anonymous_typeX17*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_RMPL_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void tk_app_main()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "tk_app_main"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX6  csem  ;
    struct anonymous_typeX7  cflg  ;
    struct anonymous_typeX8  cmbx  ;
    struct anonymous_typeX9  cmtx  ;
    struct anonymous_typeX10  cdtq  ;
    struct anonymous_typeX11  cpdq  ;
    struct anonymous_typeX13  cmbf  ;
    struct anonymous_typeX15  cmpf  ;
    struct anonymous_typeX16  cmpl  ;
    struct anonymous_typeX18  calm  ;
    struct anonymous_typeX19  ccyc  ;
    struct anonymous_typeX5  ctsk  ;
    int  producer  ;
    int  worker  ;
    int  monitor  ;
    memset(&csem, 0, sizeof(csem));
    memset(&cflg, 0, sizeof(cflg));
    memset(&cmbx, 0, sizeof(cmbx));
    memset(&cmtx, 0, sizeof(cmtx));
    memset(&cdtq, 0, sizeof(cdtq));
    memset(&cpdq, 0, sizeof(cpdq));
    memset(&cmbf, 0, sizeof(cmbf));
    memset(&cmpf, 0, sizeof(cmpf));
    memset(&cmpl, 0, sizeof(cmpl));
    memset(&calm, 0, sizeof(calm));
    memset(&ccyc, 0, sizeof(ccyc));
    memset(&ctsk, 0, sizeof(ctsk));
    memset(&producer, 0, sizeof(producer));
    memset(&worker, 0, sizeof(worker));
    memset(&monitor, 0, sizeof(monitor));
    tk_puts("uT-Kernel on neo-c Pico emulator\n");
    csem.sematr=0;
    csem.isemcnt=0;
    csem.maxsem=1;
    g_sem=tk_cre_sem(&csem);
    cflg.flgatr=0;
    cflg.iflgptn=0;
    g_flag=tk_cre_flg(&cflg);
    cmbx.mbxatr=0;
    g_mbox=tk_cre_mbx(&cmbx);
    cmtx.mtxatr=0;
    cmtx.ceilpri=0;
    g_mutex=tk_cre_mtx(&cmtx);
    cdtq.dtqatr=0;
    cdtq.dtqcnt=4;
    cdtq.dtq=0;
    g_dataq=tk_cre_dtq(&cdtq);
    cpdq.pdqatr=0;
    cpdq.pdqcnt=4;
    cpdq.maxdpri=8;
    cpdq.pdq=0;
    g_pridataq=tk_cre_pdq(&cpdq);
    cmbf.mbfatr=0;
    cmbf.bufsz=64;
    cmbf.maxmsz=16;
    cmbf.bufptr=0;
    g_messagebuf=tk_cre_mbf(&cmbf);
    cmpf.mpfatr=0;
    cmpf.blkcnt=2;
    cmpf.blksz=16;
    cmpf.mpf=0;
    g_mempool=tk_cre_mpf(&cmpf);
    cmpl.mplatr=0;
    cmpl.mplsz=64;
    cmpl.mpl=0;
    g_varpool=tk_cre_mpl(&cmpl);
    calm.almatr=0;
    calm.exinf=5;
    calm.almhdr=alarm_handler;
    g_alarm=tk_cre_alm(&calm);
    tk_sta_alm(g_alarm,2);
    ccyc.cycatr=0;
    ccyc.exinf=1;
    ccyc.cychdr=cyclic_handler;
    ccyc.cyctim=1;
    ccyc.cycphs=1;
    g_cyclic=tk_cre_cyc(&ccyc);
    tk_sta_cyc(g_cyclic);
    mmio_write32(0xe000e014u,1000);
    mmio_write32(0xe000e018u,0);
    mmio_write32(0xe000e010u,5);
    ctsk.tskatr=0;
    ctsk.stk=0;
    ctsk.stksz=0;
    ctsk.exinf=0;
    ctsk.task=producer_task;
    ctsk.itskpri=1;
    producer=tk_cre_tsk(&ctsk);
    ctsk.task=worker_task;
    ctsk.itskpri=4;
    worker=tk_cre_tsk(&ctsk);
    if(tk_chg_pri(worker,2)==0) {
        g_pri_changed=1;
    }
    ctsk.task=monitor_task;
    ctsk.itskpri=3;
    monitor=tk_cre_tsk(&ctsk);
    tk_sta_tsk(producer,0);
    tk_sta_tsk(worker,0);
    tk_sta_tsk(monitor,0);
    tk_sta_ker();
    tk_kernel_exit(2);
    come_call_finalizer(T_CSEM_finalize, (&csem), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 5);
    come_call_finalizer(T_CFLG_finalize, (&cflg), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 6);
    come_call_finalizer(T_CMBX_finalize, (&cmbx), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 7);
    come_call_finalizer(T_CMTX_finalize, (&cmtx), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 8);
    come_call_finalizer(T_CDTQ_finalize, (&cdtq), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 9);
    come_call_finalizer(T_CPDQ_finalize, (&cpdq), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 10);
    come_call_finalizer(T_CMBF_finalize, (&cmbf), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 11);
    come_call_finalizer(T_CMPF_finalize, (&cmpf), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 12);
    come_call_finalizer(T_CMPL_finalize, (&cmpl), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 13);
    come_call_finalizer(T_CALM_finalize, (&calm), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 14);
    come_call_finalizer(T_CCYC_finalize, (&ccyc), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 15);
    come_call_finalizer(T_CTSK_finalize, (&ctsk), (void*)0, (void*)0, 1, 0, 0, (void*)0, "utkernel.nc}", 1469, 16);
    neo_current_frame = fr.prev;
}

static void T_CSEM_finalize(struct anonymous_typeX6*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CSEM_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CFLG_finalize(struct anonymous_typeX7*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CFLG_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CMBX_finalize(struct anonymous_typeX8*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CMBX_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CMTX_finalize(struct anonymous_typeX9*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CMTX_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CDTQ_finalize(struct anonymous_typeX10*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CDTQ_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CPDQ_finalize(struct anonymous_typeX11*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CPDQ_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CMBF_finalize(struct anonymous_typeX13*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CMBF_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CMPF_finalize(struct anonymous_typeX15*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CMPF_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CMPL_finalize(struct anonymous_typeX16*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CMPL_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CALM_finalize(struct anonymous_typeX18*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CALM_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CCYC_finalize(struct anonymous_typeX19*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CCYC_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

static void T_CTSK_finalize(struct anonymous_typeX5*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "T_CTSK_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

void default_handler()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "default_handler"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    tk_puts("default exception\n");
    tk_kernel_exit(3);
    neo_current_frame = fr.prev;
}

void reset_handler()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "reset_handler"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned int*  p  ;
    memset(&p, 0, sizeof(p));
    p=&__bss_start__;
    while(p<&__bss_end__) {
        *p=0;
        p++;
    }
    tk_app_main();
    tk_kernel_exit(4);
    neo_current_frame = fr.prev;
}

int __append_char(char** p, unsigned long  int* rem, char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__append_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(*rem>1) {
        **p=c;
        (*p)++;
        (*rem)--;
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void __append_str(char** p, unsigned long  int* rem, const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__append_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s&&*rem>1) {
        **p=*s++;
        (*p)++;
        (*rem)--;
    }
    neo_current_frame = fr.prev;
}

void* sbrk(long  increment  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sbrk"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    long now;
    void* __result_obj__0;
    unsigned long  int  want  ;
    long rc;
    long newer;
    void* old;
    memset(&now, 0, sizeof(now));
    memset(&want, 0, sizeof(want));
    memset(&rc, 0, sizeof(rc));
    memset(&newer, 0, sizeof(newer));
    memset(&old, 0, sizeof(old));
    if(!__neo_sbrk_inited) {
        now=brk(0);
        if(now<0) {
            errno=12;
                        __result_obj__0 = (void*)-1;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        __neo_sbrk_cur=(unsigned long  int )now;
        __neo_sbrk_inited=1;
    }
    if(increment==0) {
                __result_obj__0 = (void*)__neo_sbrk_cur;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    want=__neo_sbrk_cur+(long )increment;
    if((increment>0&&want<__neo_sbrk_cur)||(increment<0&&want>__neo_sbrk_cur)) {
        errno=12;
                __result_obj__0 = (void*)-1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    rc=brk((long)want);
    if(rc<0) {
        errno=12;
                __result_obj__0 = (void*)-1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    newer=brk(0);
    if(newer<0) {
        errno=12;
                __result_obj__0 = (void*)-1;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    old=(void*)__neo_sbrk_cur;
    __neo_sbrk_cur=(unsigned long  int )newer;
        __result_obj__0 = old;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* malloc(unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "malloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    struct mem_block*  current  ;
    struct mem_block*  prev  ;
    struct mem_block*  new_mem  ;
    memset(&current, 0, sizeof(current));
    memset(&prev, 0, sizeof(prev));
    memset(&new_mem, 0, sizeof(new_mem));
    if(size==0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(({ __typeof__(8) __neo_div_right7 = (8); if(__neo_div_right7 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (size) % __neo_div_right7; })!=0) {
        size+=8-(({ __typeof__(8) __neo_div_right8 = (8); if(__neo_div_right8 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (size) % __neo_div_right8; }));
    }
    size+=sizeof(struct mem_block );
    current=free_list;
    prev=((void*)0);
    while(current!=((void*)0)) {
        if(current->size>=size) {
            if(prev==((void*)0)) {
                free_list=current->next;
            }
            else {
                prev->next=current->next;
            }
                        __result_obj__0 = (void*)(current+1);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        prev=current;
        current=current->next;
    }
    new_mem=(struct mem_block* )sbrk(size);
    if(new_mem==(void*)-1) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    new_mem->size=size;
    new_mem->next=((void*)0);
        __result_obj__0 = (void*)(new_mem+1);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void free(void* ptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "free"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct mem_block*  block  ;
    memset(&block, 0, sizeof(block));
    if(ptr==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    block=(struct mem_block* )ptr-1;
    block->next=free_list;
    free_list=block;
    neo_current_frame = fr.prev;
}

void* calloc(unsigned long  nmemb  , unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "calloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  total_size  ;
    void* __result_obj__0;
    void* ptr;
    memset(&total_size, 0, sizeof(total_size));
    memset(&ptr, 0, sizeof(ptr));
    total_size=nmemb*size;
    if(total_size==0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    ptr=malloc(total_size);
    if(ptr!=((void*)0)) {
        memset(ptr,0,total_size);
    }
        __result_obj__0 = ptr;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* realloc(void* ptr, unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "realloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    struct mem_block*  oldb  ;
    unsigned long  old_total  ;
    unsigned long  old_payload  ;
    void* np;
    unsigned long  tocopy  ;
    memset(&oldb, 0, sizeof(oldb));
    memset(&old_total, 0, sizeof(old_total));
    memset(&old_payload, 0, sizeof(old_payload));
    memset(&np, 0, sizeof(np));
    memset(&tocopy, 0, sizeof(tocopy));
    if(ptr==0) {
                __result_obj__0 = malloc(size);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(size==0) {
        free(ptr);
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    oldb=(struct mem_block* )ptr-1;
    old_total=oldb->size;
    old_payload=(((old_total>sizeof(struct mem_block )))?((old_total-sizeof(struct mem_block ))):(0));
    np=malloc(size);
    if(!np) {
                __result_obj__0 = (void*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    tocopy=((old_payload<size)?(old_payload):(size));
    memcpy(np,ptr,tocopy);
    free(ptr);
        __result_obj__0 = np;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strdup(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strdup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  len  ;
    char* p;
    char* __result_obj__0;
    memset(&len, 0, sizeof(len));
    memset(&p, 0, sizeof(p));
    const char* s2=s;
    len=strlen(s2)+1;
    p=malloc(len);
    if(p) {
        memcpy(p,s2,len);
    }
        __result_obj__0 = p;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int strcmp(const char* s1, const char* s2)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strcmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s1&&(*s1==*s2)) {
        s1++;
        s2++;
    }
        neo_current_frame = fr.prev;
    return (unsigned char)*s1-(unsigned char)*s2;
    neo_current_frame = fr.prev;
}

char* strstr(const char* haystack, const char* needle)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strstr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    if(!*needle) {
                __result_obj__0 = (char*)haystack;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    for(;*haystack;haystack++){
        const char* h=haystack;
        const char* n=needle;
        while(*h&&*n&&(*h==*n)) {
            h++;
            n++;
        }
        if(!*n) {
                        __result_obj__0 = (char*)haystack;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* memset(void* dst, int c, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* cdst;
    int i;
    void* __result_obj__0;
    cdst=(char*)dst;
    for(i=0    ;i<n;i++){
        cdst[i]=c;
    }
        __result_obj__0 = dst;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int memcmp(const void* v1, const void* v2, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memcmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    const unsigned char* s1;
    const unsigned char* s2;
    memset(&s1, 0, sizeof(s1));
    memset(&s2, 0, sizeof(s2));
    s1=v1;
    s2=v2;
    while(n-->0) {
        if(*s1!=*s2) {
                        neo_current_frame = fr.prev;
            return *s1-*s2;
        }
        s1++,s2++;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void* memchr(const void* s, int c, unsigned long  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memchr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned char target;
    void* __result_obj__0;
    memset(&target, 0, sizeof(target));
    const unsigned char* p=(const unsigned char*)s;
    target=(unsigned char)c;
    while(n--) {
        if(*p==target) {
                        __result_obj__0 = (void*)p;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        p++;
    }
        __result_obj__0 = (void*)0;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* memmove(void* dst, const void* src, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memmove"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    const char* s;
    char* d;
    void* __result_obj__0;
    memset(&s, 0, sizeof(s));
    memset(&d, 0, sizeof(d));
    if(n==0) {
                __result_obj__0 = dst;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    s=src;
    d=dst;
    if(s<d&&s+n>d) {
        s+=n;
        d+=n;
        while(n-->0) {
            *--d=*--s;
        }
    }
    else {
        while(n-->0) {
            *d++=*s++;
        }
    }
        __result_obj__0 = dst;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* memcpy(void* dst, const void* src, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "memcpy"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
        __result_obj__0 = memmove(dst,src,n);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int strncmp(const char* p, const char* q, unsigned int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(n>0&&*p&&*p==*q) {
        n--,p++,q++;
    }
    if(n==0) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return (unsigned char)*p-(unsigned char)*q;
    neo_current_frame = fr.prev;
}

char* strcpy(char* dest, const char* src)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strcpy"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* d;
    char* __result_obj__0;
    memset(&d, 0, sizeof(d));
    d=dest;
    while((*d++=*src++)!=0) {
        ;
    }
        __result_obj__0 = dest;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strncpy(char* s, const char* t, int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncpy"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* os;
    char* __result_obj__0;
    memset(&os, 0, sizeof(os));
    os=s;
    while(n-->0&&(*s++=*t++)!=0) {
        ;
    }
    while(n-->0) {
        *s++=0;
    }
        __result_obj__0 = os;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int strlen(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strlen"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int n;
    memset(&n, 0, sizeof(n));
    for(n=0    ;s[n];n++){
        ;
    }
        neo_current_frame = fr.prev;
    return n;
    neo_current_frame = fr.prev;
}

char* strchr(const char* s, int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strchr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    while(*s) {
        if(*s==(char)c) {
                        __result_obj__0 = (char*)s;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        s++;
    }
        __result_obj__0 = (((c==0))?((char*)s):(0));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strrchr(const char* s, int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strrchr"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    const char* last=(const char*)0;
    do {
        if(*s==(char)c) {
            last=s;
        }
    } while(*s++);
        __result_obj__0 = (char*)last;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strndup(const char* s, unsigned long  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strndup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  len  ;
    char* p;
    char* __result_obj__0;
    unsigned long  i  ;
    memset(&len, 0, sizeof(len));
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    len=0;
    while(len<n&&s[len]) {
        len++;
    }
    p=(char*)malloc(len+1);
    if(!p) {
                __result_obj__0 = (char*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    for(i=0    ;i<len;i++){
        p[i]=s[i];
    }
    p[len]=0;
        __result_obj__0 = p;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  arg_file_capacity(const struct arg_file*  file  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_file_capacity"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int maxc;
    memset(&maxc, 0, sizeof(maxc));
    maxc=file->hdr.maxcount /* uho */;
        neo_current_frame = fr.prev;
    return (((maxc>0))?((unsigned long )maxc):(1u));
    neo_current_frame = fr.prev;
}

void arg_lit_reset(struct arg_lit*  lit  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_lit_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(lit) {
        lit->count=0;
    }
    neo_current_frame = fr.prev;
}

void arg_file_reset(struct arg_file*  file  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_file_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  cap  ;
    unsigned long  i  ;
    memset(&cap, 0, sizeof(cap));
    memset(&i, 0, sizeof(i));
    if(!file) {
                neo_current_frame = fr.prev;
        return;
    }
    file->count=0;
    cap=arg_file_capacity(file);
    for(i=0    ;i<cap;++i){
        file->filename[i]="";
    }
    neo_current_frame = fr.prev;
}

void arg_end_reset(struct arg_end*  end  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_end_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    end->count=0;
    if(!end->errors) {
                neo_current_frame = fr.prev;
        return;
    }
    for(i=0    ;i<end->maxerrors;++i){
        end->errors[i].msg=((void*)0);
        end->errors[i].argval=((void*)0);
        end->errors[i].hdr=((void*)0);
    }
    neo_current_frame = fr.prev;
}

void arg_add_error(struct arg_end*  end  , const char* msg, const char* arg, const struct arg_hdr*  hdr  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_add_error"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!end||end->maxerrors<=0) {
                neo_current_frame = fr.prev;
        return;
    }
    if(end->count>=end->maxerrors) {
                neo_current_frame = fr.prev;
        return;
    }
    end->errors[end->count].msg=msg;
    end->errors[end->count].argval=arg;
    end->errors[end->count].hdr=hdr;
    end->count++;
    neo_current_frame = fr.prev;
}

int arg_has_capacity(int count, int maxcount)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_has_capacity"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (maxcount<=0)||(count<maxcount);
    neo_current_frame = fr.prev;
}

struct arg_lit*  arg_litn(const char* shortopts, const char* longopts, int mincount, int maxcount, const char* glossary)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_litn"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_lit*  __result_obj__0  ;
    struct arg_lit*  lit  ;
    memset(&lit, 0, sizeof(lit));
    if(mincount<0||maxcount<0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    lit=(struct arg_lit* )malloc(sizeof(*lit));
    if(!lit) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    lit->hdr.kind=(1);
    lit->hdr.shortopts=shortopts;
    lit->hdr.longopts=longopts;
    lit->hdr.datatype=((void*)0);
    lit->hdr.glossary=glossary;
    lit->hdr.mincount=mincount;
    lit->hdr.maxcount=maxcount;
    lit->count=0;
        __result_obj__0 = lit;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_file*  arg_filen(const char* shortopts, const char* longopts, const char* datatype, int mincount, int maxcount, const char* glossary)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_filen"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_file*  __result_obj__0  ;
    struct arg_file*  file  ;
    unsigned long  cap  ;
    unsigned long  i  ;
    memset(&file, 0, sizeof(file));
    memset(&cap, 0, sizeof(cap));
    memset(&i, 0, sizeof(i));
    if(mincount<0||maxcount<0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    file=(struct arg_file* )malloc(sizeof(*file));
    if(!file) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    cap=(((maxcount>0))?((unsigned long )maxcount):(1u));
    file->filename=(const char**)malloc(sizeof(char*)*cap);
    if(!file->filename) {
        free(file);
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    file->hdr.kind=(2);
    file->hdr.shortopts=shortopts;
    file->hdr.longopts=longopts;
    file->hdr.datatype=datatype;
    file->hdr.glossary=glossary;
    file->hdr.mincount=mincount;
    file->hdr.maxcount=maxcount;
    file->count=0;
    for(i=0    ;i<cap;++i){
        file->filename[i]="";
    }
        __result_obj__0 = file;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_end*  arg_end(int maxerrors)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_end"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  __result_obj__0  ;
    struct arg_end*  end  ;
    memset(&end, 0, sizeof(end));
    if(maxerrors<0) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    end=(struct arg_end* )malloc(sizeof(*end));
    if(!end) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    end->hdr.kind=(3);
    end->hdr.shortopts=((void*)0);
    end->hdr.longopts=((void*)0);
    end->hdr.datatype=((void*)0);
    end->hdr.glossary=((void*)0);
    end->hdr.mincount=0;
    end->hdr.maxcount=0;
    end->maxerrors=maxerrors;
    end->errors=((void*)0);
    if(maxerrors>0) {
        end->errors=(struct arg_error* )malloc(sizeof(struct arg_error )*(unsigned long )maxerrors);
        if(!end->errors) {
            free(end);
                        __result_obj__0 = ((void*)0);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    arg_end_reset(end);
        __result_obj__0 = end;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int argtable_reset(void** argtable, struct arg_end**  end_out  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "argtable_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int count;
    struct arg_end*  end  ;
    struct arg_hdr*  hdr  ;
    memset(&count, 0, sizeof(count));
    memset(&end, 0, sizeof(end));
    memset(&hdr, 0, sizeof(hdr));
    count=0;
    end=((void*)0);
    while(argtable[count]) {
        hdr=(struct arg_hdr* )argtable[count];
        if(hdr->kind==(1)) {
            arg_lit_reset((struct arg_lit* )hdr);
        }
        else if(hdr->kind==(2)) {
            arg_file_reset((struct arg_file* )hdr);
        }
        else if(hdr->kind==(3)) {
            end=(struct arg_end* )hdr;
            arg_end_reset(end);
            count++;
            break;
        }
        count++;
    }
    if(end_out) {
        *end_out=end;
    }
        neo_current_frame = fr.prev;
    return count;
    neo_current_frame = fr.prev;
}

int argtable_entries(void** argtable, struct arg_end**  end_out  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "argtable_entries"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int count;
    struct arg_end*  end  ;
    struct arg_hdr*  hdr  ;
    memset(&count, 0, sizeof(count));
    memset(&end, 0, sizeof(end));
    memset(&hdr, 0, sizeof(hdr));
    count=0;
    end=((void*)0);
    while(argtable[count]) {
        hdr=(struct arg_hdr* )argtable[count];
        if(hdr->kind==(3)) {
            end=(struct arg_end* )hdr;
            break;
        }
        count++;
    }
    if(end_out) {
        *end_out=end;
    }
        neo_current_frame = fr.prev;
    return count;
    neo_current_frame = fr.prev;
}

int arg_long_match(const char* options, const char* name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_long_match"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  namelen  ;
    unsigned long  len  ;
    memset(&namelen, 0, sizeof(namelen));
    memset(&len, 0, sizeof(len));
    if(!options||!name) {
                neo_current_frame = fr.prev;
        return 0;
    }
    namelen=strlen(name);
    const char* p=options;
    while(*p) {
        const char* start=p;
        while(*p&&*p!=44&&*p!=124) {
            p++;
        }
        len=(unsigned long )(p-start);
        if(len==namelen&&strncmp(start,name,namelen)==0) {
                        neo_current_frame = fr.prev;
            return 1;
        }
        if(*p) {
            p++;
        }
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

struct arg_hdr*  arg_find_short(void** argtable, int entries, char short_opt)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_find_short"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct arg_hdr*  hdr  ;
    char c;
    struct arg_hdr*  __result_obj__0  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&c, 0, sizeof(c));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        const char* s=hdr->shortopts;
        while(s&&*s) {
            c=*s;
            if(c==short_opt) {
                                __result_obj__0 = hdr;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            s=s+1;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_hdr*  arg_find_long(void** argtable, int entries, const char* name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_find_long"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct arg_hdr*  hdr  ;
    struct arg_hdr*  __result_obj__0  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        if(arg_long_match(hdr->longopts,name)) {
                        __result_obj__0 = hdr;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct arg_file*  arg_find_positional(void** argtable, int entries)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_find_positional"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct arg_hdr*  hdr  ;
    struct arg_file*  file  ;
    unsigned long  cap  ;
    struct arg_file*  __result_obj__0  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&file, 0, sizeof(file));
    memset(&cap, 0, sizeof(cap));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind!=(2)) {
            continue;
        }
        if((hdr->shortopts&&hdr->shortopts[0])||(hdr->longopts&&hdr->longopts[0])) {
            continue;
        }
        file=(struct arg_file* )hdr;
        cap=arg_file_capacity(file);
        if((unsigned long )file->count<cap) {
                        __result_obj__0 = file;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
        __result_obj__0 = ((void*)0);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int arg_file_add(struct arg_file*  file  , const char* value, struct arg_end*  end  , const char* errmsg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_file_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  cap  ;
    memset(&cap, 0, sizeof(cap));
    if(!file) {
                neo_current_frame = fr.prev;
        return -1;
    }
    cap=arg_file_capacity(file);
    if((unsigned long )file->count>=cap&&cap>0) {
        arg_add_error(end,errmsg,value,&file->hdr);
                neo_current_frame = fr.prev;
        return -1;
    }
    file->filename[file->count]=((value)?(value):(""));
    file->count++;
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int arg_parse(int argc, char** argv, void** argtable)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_parse"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  end  ;
    int total;
    int entries;
    struct arg_hdr*  hdr  ;
    int errors_before;
    int stop_opts;
    int i;
    char* arg;
    unsigned long  len  ;
    unsigned long  k  ;
    struct arg_hdr*  hdr_5  ;
    struct arg_lit*  lit  ;
    char short_opt;
    struct arg_hdr*  hdr_6  ;
    struct arg_lit*  lit_7  ;
    struct arg_file*  file  ;
    int i_9;
    struct arg_hdr*  hdr_10  ;
    int count;
    memset(&end, 0, sizeof(end));
    memset(&total, 0, sizeof(total));
    memset(&entries, 0, sizeof(entries));
    memset(&hdr, 0, sizeof(hdr));
    memset(&errors_before, 0, sizeof(errors_before));
    memset(&stop_opts, 0, sizeof(stop_opts));
    memset(&i, 0, sizeof(i));
    memset(&arg, 0, sizeof(arg));
    memset(&len, 0, sizeof(len));
    memset(&k, 0, sizeof(k));
    memset(&hdr_5, 0, sizeof(hdr_5));
    memset(&lit, 0, sizeof(lit));
    memset(&short_opt, 0, sizeof(short_opt));
    memset(&hdr_6, 0, sizeof(hdr_6));
    memset(&lit_7, 0, sizeof(lit_7));
    memset(&file, 0, sizeof(file));
    memset(&i_9, 0, sizeof(i_9));
    memset(&hdr_10, 0, sizeof(hdr_10));
    memset(&count, 0, sizeof(count));
    if(!argtable) {
                neo_current_frame = fr.prev;
        return 0;
    }
    end=((void*)0);
    total=argtable_reset(argtable,&end);
    if(!end) {
                neo_current_frame = fr.prev;
        return 0;
    }
    entries=0;
    while(entries<total&&argtable[entries]) {
        hdr=(struct arg_hdr* )argtable[entries];
        if(hdr->kind==(3)) {
            break;
        }
        entries++;
    }
    errors_before=end->count;
    stop_opts=0;
    for(i=1    ;i<argc;++i){
        arg=argv[i];
        if(!stop_opts&&arg[0]==45&&arg[1]!=0) {
            if(arg[1]==45&&arg[2]==0) {
                stop_opts=1;
                continue;
            }
            if(arg[1]==45) {
                const char* name=arg+2;
                const char* val_=((void*)0);
                const char* eq=strchr(name,61);
                char namebuf[64];
                memset(&namebuf, 0, sizeof(namebuf));
                if(eq) {
                    len=(unsigned long )(eq-name);
                    if(len>=sizeof(namebuf)) {
                        len=sizeof(namebuf)-1;
                    }
                    for(k=0                    ;k<len;++k){
                        ({ long long __neo_array_index206_0 = (long long)(k); if(__neo_array_index206_0 < 0 || __neo_array_index206_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } namebuf[__neo_array_index206_0] = name[k]; });
                    }
                    ({ long long __neo_array_index207_0 = (long long)(len); if(__neo_array_index207_0 < 0 || __neo_array_index207_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } namebuf[__neo_array_index207_0] = 0; });
                    name=namebuf;
                    val_=eq+1;
                }
                hdr_5=arg_find_long(argtable,entries,name);
                if(!hdr_5) {
                    arg_add_error(end,"unknown option",arg,((void*)0));
                    continue;
                }
                if(hdr_5->kind==(1)) {
                    if(val_&&*val_) {
                        arg_add_error(end,"option does not take a value",arg,hdr_5);
                        continue;
                    }
                    lit=(struct arg_lit* )hdr_5;
                    if(!arg_has_capacity(lit->count,hdr_5->maxcount)) {
                        arg_add_error(end,"option specified too many times",arg,hdr_5);
                        continue;
                    }
                    lit->count++;
                    continue;
                }
                if(hdr_5->kind==(2)) {
                    if(!val_) {
                        if(i+1<argc) {
                            val_=argv[++i];
                        }
                        else {
                            arg_add_error(end,"option requires a value",arg,hdr_5);
                            continue;
                        }
                    }
                    arg_file_add((struct arg_file* )hdr_5,val_,end,"option specified too many times");
                    continue;
                }
                arg_add_error(end,"unsupported option",arg,hdr_5);
                continue;
            }
            const char* p=arg+1;
            while(*p) {
                short_opt=*p;
                p=p+1;
                hdr_6=arg_find_short(argtable,entries,short_opt);
                if(!hdr_6) {
                    arg_add_error(end,"unknown option",arg,((void*)0));
                    continue;
                }
                if(hdr_6->kind==(1)) {
                    lit_7=(struct arg_lit* )hdr_6;
                    if(!arg_has_capacity(lit_7->count,hdr_6->maxcount)) {
                        arg_add_error(end,"option specified too many times",((void*)0),hdr_6);
                        continue;
                    }
                    lit_7->count++;
                    continue;
                }
                if(hdr_6->kind==(2)) {
                    const char* val__8=((void*)0);
                    if(*p) {
                        val__8=p;
                        p+=strlen(p);
                    }
                    else if(i+1<argc) {
                        val__8=argv[++i];
                    }
                    else {
                        arg_add_error(end,"option requires a value",arg,hdr_6);
                        break;
                    }
                    arg_file_add((struct arg_file* )hdr_6,val__8,end,"option specified too many times");
                    break;
                }
            }
            continue;
        }
        file=arg_find_positional(argtable,entries);
        if(!file) {
            arg_add_error(end,"unexpected argument",arg,((void*)0));
            continue;
        }
        arg_file_add(file,arg,end,"too many positional arguments");
    }
    for(i_9=0    ;i_9<entries;++i_9){
        hdr_10=(struct arg_hdr* )argtable[i_9];
        if(!hdr_10||hdr_10->kind==(3)) {
            continue;
        }
        count=0;
        if(hdr_10->kind==(1)) {
            count=((struct arg_lit* )hdr_10)->count;
        }
        else if(hdr_10->kind==(2)) {
            count=((struct arg_file* )hdr_10)->count;
        }
        if(hdr_10->mincount>0&&count<hdr_10->mincount) {
            if((hdr_10->shortopts&&hdr_10->shortopts[0])||(hdr_10->longopts&&hdr_10->longopts[0])) {
                arg_add_error(end,"missing required option",((hdr_10->longopts)?(hdr_10->longopts):(hdr_10->shortopts)),hdr_10);
            }
            else {
                arg_add_error(end,"missing required argument",hdr_10->datatype,hdr_10);
            }
        }
    }
    (void)errors_before;
        neo_current_frame = fr.prev;
    return end->count;
    neo_current_frame = fr.prev;
}

void arg_print_joined_option(char* buf, unsigned long  bufsz  , const struct arg_hdr*  hdr  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_joined_option"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  pos  ;
    int wrote;
    int wrote_11;
    int wrote_12;
    memset(&pos, 0, sizeof(pos));
    memset(&wrote, 0, sizeof(wrote));
    memset(&wrote_11, 0, sizeof(wrote_11));
    memset(&wrote_12, 0, sizeof(wrote_12));
    pos=0;
    if(!bufsz) {
                neo_current_frame = fr.prev;
        return;
    }
    buf[0]=0;
    if(hdr->shortopts&&hdr->shortopts[0]) {
        wrote=snprintf(buf+pos,bufsz-pos,"-%c",hdr->shortopts[0]);
        if(wrote<0) {
            wrote=0;
        }
        pos+=(unsigned long )wrote;
        if(pos>=bufsz) {
            pos=bufsz-1;
        }
        if(hdr->longopts&&hdr->longopts[0]&&pos+2<bufsz) {
            wrote=snprintf(buf+pos,bufsz-pos,", ");
            if(wrote<0) {
                wrote=0;
            }
            pos+=(unsigned long )wrote;
            if(pos>=bufsz) {
                pos=bufsz-1;
            }
        }
    }
    if(hdr->longopts&&hdr->longopts[0]) {
        wrote_11=snprintf(buf+pos,bufsz-pos,"--%s",hdr->longopts);
        if(wrote_11<0) {
            wrote_11=0;
        }
        pos+=(unsigned long )wrote_11;
        if(pos>=bufsz) {
            pos=bufsz-1;
        }
    }
    if((hdr->shortopts&&hdr->shortopts[0])||(hdr->longopts&&hdr->longopts[0])) {
        if(hdr->datatype&&hdr->datatype[0]&&pos+1<bufsz) {
            wrote_12=snprintf(buf+pos,bufsz-pos," %s",hdr->datatype);
            if(wrote_12<0) {
                wrote_12=0;
            }
            pos+=(unsigned long )wrote_12;
            if(pos>=bufsz) {
                pos=bufsz-1;
            }
        }
    }
    neo_current_frame = fr.prev;
}

void arg_print_syntax(void** argtable, const char* suffix)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_syntax"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  end  ;
    int entries;
    int i;
    struct arg_hdr*  hdr  ;
    int mandatory;
    int k;
    memset(&end, 0, sizeof(end));
    memset(&entries, 0, sizeof(entries));
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&mandatory, 0, sizeof(mandatory));
    memset(&k, 0, sizeof(k));
    if(!argtable) {
                neo_current_frame = fr.prev;
        return;
    }
    end=((void*)0);
    entries=argtable_entries(argtable,&end);
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        if((hdr->shortopts&&hdr->shortopts[0])||(hdr->longopts&&hdr->longopts[0])) {
            printf(" [");
            if(hdr->shortopts&&hdr->shortopts[0]) {
                printf("-%c",hdr->shortopts[0]);
                if(hdr->longopts&&hdr->longopts[0]) {
                    printf("|");
                }
            }
            if(hdr->longopts&&hdr->longopts[0]) {
                printf("--%s",hdr->longopts);
            }
            if(hdr->kind==(2)&&hdr->datatype&&hdr->datatype[0]) {
                printf(" %s",hdr->datatype);
            }
            printf("]");
        }
        else {
            const char* dt=((hdr->datatype)?(hdr->datatype):("<value>"));
            mandatory=(((hdr->mincount>0))?(hdr->mincount):(0));
            for(k=0            ;k<mandatory;++k){
                printf(" %s",dt);
            }
            if(hdr->maxcount==0||hdr->maxcount>mandatory) {
                printf(" [%s]",dt);
            }
        }
    }
    if(suffix) {
        printf("%s",suffix);
    }
    neo_current_frame = fr.prev;
}

void arg_print_glossary(void** argtable, const char* format)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_glossary"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct arg_end*  end  ;
    int entries;
    int i;
    struct arg_hdr*  hdr  ;
    memset(&end, 0, sizeof(end));
    memset(&entries, 0, sizeof(entries));
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    if(!argtable||!format) {
                neo_current_frame = fr.prev;
        return;
    }
    end=((void*)0);
    entries=argtable_entries(argtable,&end);
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    char optbuf[64];
    memset(&optbuf, 0, sizeof(optbuf));
    for(i=0    ;i<entries;++i){
        hdr=(struct arg_hdr* )argtable[i];
        if(!hdr||hdr->kind==(3)) {
            continue;
        }
        ({ long long __neo_array_index208_0 = (long long)(0); if(__neo_array_index208_0 < 0 || __neo_array_index208_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } optbuf[__neo_array_index208_0] = 0; });
        arg_print_joined_option(optbuf,sizeof(optbuf),hdr);
        const char* gloss=((hdr->glossary)?(hdr->glossary):(""));
        printf(format,optbuf,gloss);
    }
    neo_current_frame = fr.prev;
}

void arg_print_errors(struct arg_end*  end  , const char* progname)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_print_errors"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    if(!end) {
                neo_current_frame = fr.prev;
        return;
    }
    const char* prog=((progname)?(progname):(""));
    for(i=0    ;i<end->count;++i){
        const struct arg_error*  err  =&end->errors[i];
        const char* msg=((err->msg)?(err->msg):("parse error"));
        if(err->argval&&err->argval[0]) {
            printf("%s: %s -- %s\n",prog,msg,err->argval);
        }
        else if(err->hdr&&err->hdr->datatype&&strcmp(msg,"missing required argument")==0) {
            printf("%s: %s %s\n",prog,msg,err->hdr->datatype);
        }
        else if(err->hdr&&err->hdr->longopts&&err->hdr->longopts[0]&&strcmp(msg,"missing required option")==0) {
            printf("%s: %s --%s\n",prog,msg,err->hdr->longopts);
        }
        else if(err->hdr&&err->hdr->shortopts&&err->hdr->shortopts[0]&&strcmp(msg,"missing required option")==0) {
            printf("%s: %s -%c\n",prog,msg,err->hdr->shortopts[0]);
        }
        else {
            printf("%s: %s\n",prog,msg);
        }
    }
    neo_current_frame = fr.prev;
}

void arg_freetable(void** argtable, unsigned long  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "arg_freetable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  i  ;
    struct arg_hdr*  hdr  ;
    struct arg_file*  file  ;
    struct arg_end*  end  ;
    memset(&i, 0, sizeof(i));
    memset(&hdr, 0, sizeof(hdr));
    memset(&file, 0, sizeof(file));
    memset(&end, 0, sizeof(end));
    if(!argtable) {
                neo_current_frame = fr.prev;
        return;
    }
    for(i=0    ;i<n;++i){
        if(!argtable[i]) {
            continue;
        }
        hdr=(struct arg_hdr* )argtable[i];
        if(hdr->kind==(2)) {
            file=(struct arg_file* )hdr;
            free((void*)file->filename);
        }
        else if(hdr->kind==(3)) {
            end=(struct arg_end* )hdr;
            free(end->errors);
        }
        free(argtable[i]);
        argtable[i]=((void*)0);
    }
    neo_current_frame = fr.prev;
}

int isprint(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isprint"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((c>=0x20&&c<=0x7e))?(1):(0));
    neo_current_frame = fr.prev;
}

int isspace(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((c==32||c==9||c==10||c==13||c==11||c==12))?(1):(0));
    neo_current_frame = fr.prev;
}

int isalpha(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return ((((c>=65&&c<=90)||(c>=97&&c<=122)))?(1):(0));
    neo_current_frame = fr.prev;
}

int isdigit(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((c>=48&&c<=57))?(1):(0));
    neo_current_frame = fr.prev;
}

int isalnum(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (((isalpha(c)||isdigit(c)))?(1):(0));
    neo_current_frame = fr.prev;
}

int puts(const char* s)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "puts"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(*s) {
        putchar(*s++);
    }
    putchar(10);
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

char* strcat(char* dest, const char* src)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strcat"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* d;
    char* __result_obj__0;
    memset(&d, 0, sizeof(d));
    d=dest;
    while(*d) {
        d++;
    }
    while((*d++=*src++)!=0) {
        ;
    }
        __result_obj__0 = dest;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* strncat(char* dest, const char* src, unsigned long  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncat"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* d;
    char* __result_obj__0;
    memset(&d, 0, sizeof(d));
    d=dest;
    while(*d) {
        d++;
    }
    while(n--&&*src) {
        *d++=*src++;
    }
    *d=0;
        __result_obj__0 = dest;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* itoa(char* buf, unsigned long  int val_, int base, int is_signed)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "itoa"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    int i;
    int negative;
    char* __result_obj__0;
    int digit;
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    memset(&negative, 0, sizeof(negative));
    memset(&digit, 0, sizeof(digit));
    p=buf;
    char tmp[32];
    memset(&tmp, 0, sizeof(tmp));
    i=0;
    negative=0;
    if(base<2||base>16) {
        *p=0;
                __result_obj__0 = p;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(is_signed&&(long)val_<0) {
        negative=1;
        val_=(unsigned long  int)(-(long)val_);
    }
    do {
        digit=({ __typeof__(base) __neo_div_right9 = (base); if(__neo_div_right9 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (val_) % __neo_div_right9; });
        ({ long long __neo_array_index209_0 = (long long)(i++); if(__neo_array_index209_0 < 0 || __neo_array_index209_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } tmp[__neo_array_index209_0] = (((digit<10))?(48+digit):(97+digit-10)); });
        val_/=base;
    } while(val_);
    if(negative) {
        *p++=45;
    }
    while(i--) {
        *p++=(*({ long long __neo_array_index210_0 = (long long)(i); if(__neo_array_index210_0 < 0 || __neo_array_index210_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &tmp[__neo_array_index210_0]; }));
    }
    *p=0;
        __result_obj__0 = buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int vasprintf(char** out, const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "vasprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* p;
    const char* s;
    unsigned long  int remaining;
    memset(&p, 0, sizeof(p));
    memset(&s, 0, sizeof(s));
    memset(&remaining, 0, sizeof(remaining));
    char out2[512];
    memset(&out2, 0, sizeof(out2));
    p=out2;
    char buf[32];
    memset(&buf, 0, sizeof(buf));
    remaining=sizeof(out2);
    for(;*fmt&&remaining>1;fmt++){
        if(*fmt!=37) {
            *p++=*fmt;
            remaining--;
            continue;
        }
        fmt++;
        switch (        *fmt) {
            case 100:
            itoa(buf,__builtin_va_arg(ap,int),10,1);
            s=buf;
            break;
            case 117:
            itoa(buf,__builtin_va_arg(ap,unsigned int),10,0);
            s=buf;
            break;
            case 120:
            itoa(buf,__builtin_va_arg(ap,unsigned int),16,0);
            s=buf;
            break;
            case 115:
            s=__builtin_va_arg(ap,const char*);
            if(!s) {
                s="(null)";
            }
            break;
            case 99:
            ({ long long __neo_array_index211_0 = (long long)(0); if(__neo_array_index211_0 < 0 || __neo_array_index211_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index211_0] = (char)__builtin_va_arg(ap,int); });
            ({ long long __neo_array_index212_0 = (long long)(1); if(__neo_array_index212_0 < 0 || __neo_array_index212_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index212_0] = 0; });
            s=buf;
            break;
            case 112:
            strncpy(buf,"0x",32);
            itoa(buf+2,(unsigned long  int)(unsigned long  int )__builtin_va_arg(ap,void*),16,0);
            s=buf;
            break;
            case 37:
            ({ long long __neo_array_index213_0 = (long long)(0); if(__neo_array_index213_0 < 0 || __neo_array_index213_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index213_0] = 37; });
            ({ long long __neo_array_index214_0 = (long long)(1); if(__neo_array_index214_0 < 0 || __neo_array_index214_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index214_0] = 0; });
            s=buf;
            break;
            default:
            ({ long long __neo_array_index215_0 = (long long)(0); if(__neo_array_index215_0 < 0 || __neo_array_index215_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index215_0] = 37; });
            ({ long long __neo_array_index216_0 = (long long)(1); if(__neo_array_index216_0 < 0 || __neo_array_index216_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index216_0] = *fmt; });
            ({ long long __neo_array_index217_0 = (long long)(2); if(__neo_array_index217_0 < 0 || __neo_array_index217_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } buf[__neo_array_index217_0] = 0; });
            s=buf;
            break;
        }
        while(*s&&remaining>1) {
            *p++=*s++;
            remaining--;
        }
    }
    *p=0;
    *out=strdup(out2);
        neo_current_frame = fr.prev;
    return (int)(p-out2);
    neo_current_frame = fr.prev;
}

int __utoa_ull(char* dst, unsigned long  long v, int base, int lower)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__utoa_ull"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    static const char L[]="0123456789abcdef";
    static const char U[]="0123456789ABCDEF";
    const char* D=((lower)?(L):(U));
    char tmp[32];
    memset(&tmp, 0, sizeof(tmp));
    i=0;
    if(base<2||base>16) {
        dst[0]=48;
        dst[1]=0;
                neo_current_frame = fr.prev;
        return 1;
    }
    if(v==0) {
        dst[0]=48;
        dst[1]=0;
                neo_current_frame = fr.prev;
        return 1;
    }
    while(v) {
        ({ long long __neo_array_index218_0 = (long long)(i++); if(__neo_array_index218_0 < 0 || __neo_array_index218_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } tmp[__neo_array_index218_0] = D[({ __typeof__((unsigned int)base) __neo_div_right10 = ((unsigned int)base); if(__neo_div_right10 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("modulo by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (v) % __neo_div_right10; })]; });
        v/=(unsigned int)base;
    }
    int  n=i,  j=0;
    while(i--) {
        dst[j++]=(*({ long long __neo_array_index219_0 = (long long)(i); if(__neo_array_index219_0 < 0 || __neo_array_index219_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &tmp[__neo_array_index219_0]; }));
    }
    dst[j]=0;
        neo_current_frame = fr.prev;
    return n;
    neo_current_frame = fr.prev;
}

void __fmt_num(char** p, unsigned long  int* rem, unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__fmt_num"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int n;
    int total;
    memset(&n, 0, sizeof(n));
    memset(&total, 0, sizeof(total));
    char num[64];
    memset(&num, 0, sizeof(num));
    n=__utoa_ull(num,v,base,lower);
    total=n+(((neg)?(1):(0)));
    while(total<width) {
        __append_char(p,rem,pad);
        total++;
    }
    if(neg) {
        __append_char(p,rem,45);
    }
    __append_str(p,rem,num);
    neo_current_frame = fr.prev;
}

void __fmt_putc(struct anonymous_typeX4*  o  , char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__fmt_putc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX2*  b  ;
    struct anonymous_typeX3*  s  ;
    memset(&b, 0, sizeof(b));
    memset(&s, 0, sizeof(s));
    if(o->mode==0) {
        putchar(c);
    }
    else if(o->mode==1) {
        b=(struct anonymous_typeX2* )o->ctx;
        if(b->rem>1) {
            *(b->p)=c;
            b->p=b->p+1;
            b->rem--;
        }
    }
    else {
        s=(struct anonymous_typeX3* )o->ctx;
        *(s->p)=c;
        s->p=s->p+1;
    }
    o->count++;
    neo_current_frame = fr.prev;
}

int __is_digit(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__is_digit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c>=48&&c<=57;
    neo_current_frame = fr.prev;
}

void __emit_pad(struct anonymous_typeX4*  o  , char pad, int n)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__emit_pad"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    while(n-->0) {
        __fmt_putc(o,pad);
    }
    neo_current_frame = fr.prev;
}

void __emit_num(struct anonymous_typeX4*  o  , unsigned long  long v, int base, int is_signed, int neg, int width, char pad, int lower, int left)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__emit_num"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int n;
    int total;
    int i;
    memset(&n, 0, sizeof(n));
    memset(&total, 0, sizeof(total));
    memset(&i, 0, sizeof(i));
    char buf[64];
    memset(&buf, 0, sizeof(buf));
    n=__utoa_ull(buf,v,base,lower);
    total=n+(((neg)?(1):(0)));
    if(!left) {
        __emit_pad(o,pad,(((width>total))?((width-total)):(0)));
    }
    if(neg) {
        __fmt_putc(o,45);
    }
    for(i=0    ;i<n;i++){
        __fmt_putc(o,(*({ long long __neo_array_index220_0 = (long long)(i); if(__neo_array_index220_0 < 0 || __neo_array_index220_0 >= (long long)(64)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &buf[__neo_array_index220_0]; })));
    }
    if(left) {
        __emit_pad(o,32,(((width>total))?((width-total)):(0)));
    }
    neo_current_frame = fr.prev;
}

void __vformat(struct anonymous_typeX4*  o  , const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__vformat"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char pad;
    int left;
    int parsing_flags;
    int width;
    int lcount;
    char c;
    long long sv;
    int neg;
    unsigned long  long uv;
    int base;
    unsigned long  long uv_13;
    unsigned long  long uv_14;
    int hexlen;
    int total;
    int hexlen_15;
    int total_17;
    char ch;
    int len;
    memset(&pad, 0, sizeof(pad));
    memset(&left, 0, sizeof(left));
    memset(&parsing_flags, 0, sizeof(parsing_flags));
    memset(&width, 0, sizeof(width));
    memset(&lcount, 0, sizeof(lcount));
    memset(&c, 0, sizeof(c));
    memset(&sv, 0, sizeof(sv));
    memset(&neg, 0, sizeof(neg));
    memset(&uv, 0, sizeof(uv));
    memset(&base, 0, sizeof(base));
    memset(&uv_13, 0, sizeof(uv_13));
    memset(&uv_14, 0, sizeof(uv_14));
    memset(&hexlen, 0, sizeof(hexlen));
    memset(&total, 0, sizeof(total));
    memset(&hexlen_15, 0, sizeof(hexlen_15));
    memset(&total_17, 0, sizeof(total_17));
    memset(&ch, 0, sizeof(ch));
    memset(&len, 0, sizeof(len));
    while(*fmt) {
        if(*fmt!=37) {
            __fmt_putc(o,*fmt++);
            continue;
        }
        fmt++;
        pad=32;
        left=0;
        parsing_flags=1;
        while(parsing_flags) {
            if(*fmt==48) {
                pad=48;
                fmt++;
            }
            else if(*fmt==45) {
                left=1;
                pad=32;
                fmt++;
            }
            else {
                parsing_flags=0;
            }
        }
        width=0;
        while(*fmt>=48&&*fmt<=57) {
            width=width*10+(*fmt-48);
            fmt++;
        }
        lcount=0;
        while(*fmt==108) {
            lcount++;
            fmt++;
        }
        c=((*fmt)?(*fmt++):(0));
        switch (        c) {
            case 100:
            {
                if(lcount>=2) {
                    sv=__builtin_va_arg(ap,long  long);
                }
                else if(lcount==1) {
                    sv=__builtin_va_arg(ap,long);
                }
                else {
                    sv=__builtin_va_arg(ap,int);
                }
                neg=(sv<0);
                uv=((neg)?((unsigned long  long)(-sv)):((unsigned long  long)sv));
                __emit_num(o,uv,10,1,neg,width,pad,1,left);
                break;
            }
            case 117:
            case 120:
            {
                base=(((c==120))?(16):(10));
                if(lcount>=2) {
                    uv_13=__builtin_va_arg(ap,unsigned long  long);
                }
                else if(lcount==1) {
                    uv_13=__builtin_va_arg(ap,unsigned long  int);
                }
                else {
                    uv_13=(unsigned int)__builtin_va_arg(ap,unsigned int);
                }
                __emit_num(o,uv_13,base,0,0,width,pad,1,left);
                break;
            }
            case 112:
            {
                uv_14=(unsigned long  long)(unsigned long  int )__builtin_va_arg(ap,void*);
                if(!left) {
                    hexlen=0;
                    {
                        char tmp[64];
                        memset(&tmp, 0, sizeof(tmp));
                        hexlen=__utoa_ull(tmp,uv_14,16,1);
                    }
                    total=2+hexlen;
                    __emit_pad(o,pad,(((width>total))?((width-total)):(0)));
                }
                __fmt_putc(o,48);
                __fmt_putc(o,120);
                __emit_num(o,uv_14,16,0,0,0,32,1,0);
                if(left) {
                    hexlen_15=0;
                    {
                        char tmp_16[64];
                        memset(&tmp_16, 0, sizeof(tmp_16));
                        hexlen_15=__utoa_ull(tmp_16,uv_14,16,1);
                    }
                    total_17=2+hexlen_15;
                    __emit_pad(o,32,(((width>total_17))?((width-total_17)):(0)));
                }
                break;
            }
            case 99:
            {
                ch=(char)__builtin_va_arg(ap,int);
                if(!left) {
                    __emit_pad(o,pad,(((width>1))?((width-1)):(0)));
                }
                __fmt_putc(o,ch);
                if(left) {
                    __emit_pad(o,32,(((width>1))?((width-1)):(0)));
                }
                break;
            }
            case 115:
            {
                const char* s=__builtin_va_arg(ap,const char*);
                if(!s) {
                    s="(null)";
                }
                len=0;
                for(const char* t=s                ;*t;++t){
                    len++;
                }
                if(!left) {
                    __emit_pad(o,pad,(((width>len))?((width-len)):(0)));
                }
                while(*s) {
                    __fmt_putc(o,*s++);
                }
                if(left) {
                    __emit_pad(o,32,(((width>len))?((width-len)):(0)));
                }
                break;
            }
            case 37:
            __fmt_putc(o,37);
            break;
            default:
            __fmt_putc(o,37);
            if(c) {
                __fmt_putc(o,c);
            }
            break;
        }
    }
    neo_current_frame = fr.prev;
}

static void __builtin_va_list_finalize(__builtin_va_list*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_va_list_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
}

int printf(const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int __result_obj__0;
    memset(&ap, 0, sizeof(ap));
    __builtin_va_start(ap,fmt);
    struct anonymous_typeX4  out  ={ 0, ((void*)0), 0 };
    __vformat(&out,fmt,ap);
    __builtin_va_end(ap);
        __result_obj__0 = out.count /* uho */;
    come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2424, 17);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void __buf_putc(void* ctx, char ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__buf_putc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX2*  b  ;
    memset(&b, 0, sizeof(b));
    b=(struct anonymous_typeX2* )ctx;
    if(b->rem>1) {
        *(b->p)=ch;
        b->p=b->p+1;
        b->rem--;
    }
    neo_current_frame = fr.prev;
}

void __str_putc(void* ctx, char ch)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__str_putc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct anonymous_typeX3*  s  ;
    memset(&s, 0, sizeof(s));
    s=(struct anonymous_typeX3* )ctx;
    *(s->p)=ch;
    s->p=s->p+1;
    neo_current_frame = fr.prev;
}

int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "vsnprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!out||out_size==0) {
                neo_current_frame = fr.prev;
        return 0;
    }
    struct anonymous_typeX2  b  ={ out, out_size };
    struct anonymous_typeX4  o  ={ 1, &b, 0 };
    __vformat(&o,fmt,ap);
    if(b.rem /* uho */>0) {
        *(b.p /* uho */)=0;
    }
    else {
        out[out_size-1]=0;
    }
        neo_current_frame = fr.prev;
    return o.count /* uho */;
    neo_current_frame = fr.prev;
}

int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "snprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int r;
    int __result_obj__0;
    memset(&ap, 0, sizeof(ap));
    memset(&r, 0, sizeof(r));
    __builtin_va_start(ap,fmt);
    r=vsnprintf(out,out_size,fmt,ap);
    __builtin_va_end(ap);
        __result_obj__0 = r;
    come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2460, 18);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int vsprintf(char* out, const char* fmt, __builtin_va_list  ap  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "vsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!out) {
                neo_current_frame = fr.prev;
        return -1;
    }
    struct anonymous_typeX3  s  ={ out };
    struct anonymous_typeX4  o  ={ 2, &s, 0 };
    __vformat(&o,fmt,ap);
    *(s.p /* uho */)=0;
        neo_current_frame = fr.prev;
    return o.count /* uho */;
    neo_current_frame = fr.prev;
}

int sprintf(char* out, const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int r;
    int __result_obj__0;
    memset(&ap, 0, sizeof(ap));
    memset(&r, 0, sizeof(r));
    __builtin_va_start(ap,fmt);
    r=vsprintf(out,fmt,ap);
    __builtin_va_end(ap);
        __result_obj__0 = r;
    come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2478, 19);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int atexit(void (*func)())
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "atexit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(__atexit_count>=(int)(sizeof(__atexit_funcs) / sizeof(__atexit_funcs[0]))) {
                neo_current_frame = fr.prev;
        return -1;
    }
    ({ long long __neo_array_index222_0 = (long long)(__atexit_count++); if(__neo_array_index222_0 < 0 || __neo_array_index222_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } __atexit_funcs[__neo_array_index222_0] = func; });
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

void __run_atexit()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__run_atexit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=__atexit_count-1    ;i>=0;i--){
        if((*({ long long __neo_array_index223_0 = (long long)(i); if(__neo_array_index223_0 < 0 || __neo_array_index223_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &__atexit_funcs[__neo_array_index223_0]; }))) {
            ((*({ long long __neo_array_index224_0 = (long long)(i); if(__neo_array_index224_0 < 0 || __neo_array_index224_0 >= (long long)(32)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &__atexit_funcs[__neo_array_index224_0]; })))();
        }
    }
    neo_current_frame = fr.prev;
}

double strtod(const char* nptr, char** endptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtod"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    double ip;
    int any;
    double val_;
    int esign;
    int exp;
    double pow10;
    memset(&neg, 0, sizeof(neg));
    memset(&ip, 0, sizeof(ip));
    memset(&any, 0, sizeof(any));
    memset(&val_, 0, sizeof(val_));
    memset(&esign, 0, sizeof(esign));
    memset(&exp, 0, sizeof(exp));
    memset(&pow10, 0, sizeof(pow10));
    const char* s=nptr;
    while(isspace(*s)) {
        s++;
    }
    neg=0;
    if(*s==43||*s==45) {
        neg=(*s==45);
        s++;
    }
    ip=0.0;
    any=0;
    while(*s>=48&&*s<=57) {
        ip=ip*10.0+(*s-48);
        s++;
        any=1;
    }
    double  fp=0.0,  scale=1.0;
    if(*s==46) {
        s++;
        while(*s>=48&&*s<=57) {
            fp=fp*10.0+(*s-48);
            scale*=10.0;
            s++;
            any=1;
        }
    }
    val_=ip+(((scale>1.0)?(({ __typeof__(scale) __neo_div_right11 = (scale); if(__neo_div_right11 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (fp) / __neo_div_right11; })):(0.0)));
    if(*s==101||*s==69) {
        s++;
        esign=0;
        if(*s==43||*s==45) {
            esign=(*s==45);
            s++;
        }
        exp=0;
        while(*s>=48&&*s<=57) {
            exp=exp*10+(*s-48);
            s++;
        }
        pow10=1.0;
        while(exp-->0) {
            pow10*=10.0;
        }
        val_=((esign)?((({ __typeof__(pow10) __neo_div_right12 = (pow10); if(__neo_div_right12 == 0) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("division by zero"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } (val_) / __neo_div_right12; }))):((val_*pow10)));
        any=1;
    }
    if(endptr) {
        *endptr=(char*)(((any)?(s):(nptr)));
    }
        neo_current_frame = fr.prev;
    return ((neg)?(-val_):(val_));
    neo_current_frame = fr.prev;
}

unsigned long  long __minux_parse_unsigned(const char* nptr, char** endptr, int base, int* neg_out, int* any_out)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__minux_parse_unsigned"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    unsigned long  long val_;
    int any;
    int actual_base;
    int c;
    int d;
    memset(&neg, 0, sizeof(neg));
    memset(&val_, 0, sizeof(val_));
    memset(&any, 0, sizeof(any));
    memset(&actual_base, 0, sizeof(actual_base));
    memset(&c, 0, sizeof(c));
    memset(&d, 0, sizeof(d));
    const char* s=nptr;
    while(isspace(*s)) {
        s++;
    }
    neg=0;
    if(*s==43) {
        s++;
    }
    else if(*s==45) {
        neg=1;
        s++;
    }
    val_=0;
    any=0;
    actual_base=base;
    if(actual_base==0) {
        if(s[0]==48) {
            if(s[1]==120||s[1]==88) {
                actual_base=16;
                s+=2;
            }
            else {
                actual_base=8;
                s++;
                any=1;
            }
        }
        else {
            actual_base=10;
        }
    }
    else if(actual_base==16) {
        if(s[0]==48&&(s[1]==120||s[1]==88)) {
            s+=2;
        }
    }
    if(actual_base<2||actual_base>36) {
        if(endptr) {
            *endptr=(char*)nptr;
        }
        if(neg_out) {
            *neg_out=neg;
        }
        if(any_out) {
            *any_out=0;
        }
                neo_current_frame = fr.prev;
        return 0;
    }
    for(;;s++){
        c=*s;
        if(c>=48&&c<=57) {
            d=c-48;
        }
        else if(c>=97&&c<=122) {
            d=c-97+10;
        }
        else if(c>=65&&c<=90) {
            d=c-65+10;
        }
        else {
            break;
        }
        if(d>=actual_base) {
            break;
        }
        any=1;
        val_=val_*(unsigned long  long)actual_base+(unsigned long  long)d;
    }
    if(endptr) {
        *endptr=(char*)(((any)?(s):(nptr)));
    }
    if(neg_out) {
        *neg_out=neg;
    }
    if(any_out) {
        *any_out=any;
    }
        neo_current_frame = fr.prev;
    return val_;
    neo_current_frame = fr.prev;
}

unsigned long  int strtoul(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtoul"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    unsigned long  int val_;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    memset(&val_, 0, sizeof(val_));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    val_=(unsigned long  int)parsed;
    if(neg) {
        val_=(unsigned long  int)(-(long)val_);
    }
        neo_current_frame = fr.prev;
    return val_;
    neo_current_frame = fr.prev;
}

unsigned long  long strtoull(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtoull"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    if(neg) {
        parsed=(unsigned long  long)(-(long  long)parsed);
    }
        neo_current_frame = fr.prev;
    return parsed;
    neo_current_frame = fr.prev;
}

long strtol(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtol"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    long result;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    memset(&result, 0, sizeof(result));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=(long)parsed;
    if(neg) {
        result=-result;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

long long strtoll(const char* nptr, char** endptr, int base)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtoll"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int neg;
    int any;
    unsigned long  long parsed;
    long long result;
    memset(&neg, 0, sizeof(neg));
    memset(&any, 0, sizeof(any));
    memset(&parsed, 0, sizeof(parsed));
    memset(&result, 0, sizeof(result));
    neg=0;
    any=0;
    parsed=__minux_parse_unsigned(nptr,endptr,base,&neg,&any);
    if(!any) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=(long  long)parsed;
    if(neg) {
        result=-result;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

long atol(const char* nptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "atol"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return strtol(nptr,(char**)0,10);
    neo_current_frame = fr.prev;
}

int atoi(const char* nptr)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "atoi"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int)strtol(nptr,(char**)0,10);
    neo_current_frame = fr.prev;
}

int __tolower(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__tolower"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(c>=65&&c<=90) {
                neo_current_frame = fr.prev;
        return c-65+97;
    }
        neo_current_frame = fr.prev;
    return c;
    neo_current_frame = fr.prev;
}

int strncasecmp(const char* a, const char* b, unsigned long  n  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strncasecmp"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  i  ;
    unsigned char ca;
    unsigned char cb;
    int da;
    int db;
    memset(&i, 0, sizeof(i));
    memset(&ca, 0, sizeof(ca));
    memset(&cb, 0, sizeof(cb));
    memset(&da, 0, sizeof(da));
    memset(&db, 0, sizeof(db));
    for(i=0    ;i<n;i++){
        ca=(unsigned char)a[i];
        cb=(unsigned char)b[i];
        if(ca==0||cb==0) {
                        neo_current_frame = fr.prev;
            return (int)ca-(int)cb;
        }
        da=__tolower(ca);
        db=__tolower(cb);
        if(da!=db) {
                        neo_current_frame = fr.prev;
            return da-db;
        }
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

char* strerror(int errnum)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strerror"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    switch (    errnum) {
        case 0:
                __result_obj__0 = "Success";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 1:
                __result_obj__0 = "Operation not permitted";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 2:
                __result_obj__0 = "No such file or directory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 5:
                __result_obj__0 = "I/O error";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 9:
                __result_obj__0 = "Bad file descriptor";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 12:
                __result_obj__0 = "Out of memory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 13:
                __result_obj__0 = "Permission denied";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 17:
                __result_obj__0 = "File exists";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 20:
                __result_obj__0 = "Not a directory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 21:
                __result_obj__0 = "Is a directory";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 22:
                __result_obj__0 = "Invalid argument";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 32:
                __result_obj__0 = "Broken pipe";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        case 38:
                __result_obj__0 = "Function not implemented";
        neo_current_frame = fr.prev;
        return __result_obj__0;
        default:
                __result_obj__0 = "Unknown error";
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

int ispunct(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "ispunct"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=0x21&&c<=0x7e)&&!isalnum(c);
    neo_current_frame = fr.prev;
}

char* strtok(char* s, const char* delim)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "strtok"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* __result_obj__0;
    const char* d;
    int isdelim;
    char* start;
    memset(&d, 0, sizeof(d));
    memset(&isdelim, 0, sizeof(isdelim));
    memset(&start, 0, sizeof(start));
    if(!s) {
        s=__strtok_save;
    }
    if(!s) {
                __result_obj__0 = (char*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    while(*s) {
        isdelim=0;
        for(d=delim        ;*d;d++){
            if(*d==*s) {
                isdelim=1;
                break;
            }
        }
        if(!isdelim) {
            break;
        }
        s++;
    }
    if(*s==0) {
        __strtok_save=(char*)0;
                __result_obj__0 = (char*)0;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    start=s;
    while(*s) {
        for(d=delim        ;*d;d++){
            if(*d==*s) {
                *s=0;
                __strtok_save=s+1;
                                __result_obj__0 = start;
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
        }
        s++;
    }
    __strtok_save=(char*)0;
        __result_obj__0 = start;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int isxdigit(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "isxdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57)||(c>=97&&c<=102)||(c>=65&&c<=70);
    neo_current_frame = fr.prev;
}

int __minux_isspace(int c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__minux_isspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==11||c==12;
    neo_current_frame = fr.prev;
}

int sscanf(const char* str, const char* fmt, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "sscanf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    __builtin_va_list  ap  ;
    int assigned;
    int __result_obj__0;
    int width;
    char length;
    char conv;
    char* out;
    int n;
    int neg;
    unsigned long  long val_;
    int digits;
    unsigned long  int* p;
    unsigned long*  p_18  ;
    unsigned int* p_19;
    long long sval;
    long* p_20;
    long  long* p_21;
    int* p_22;
    int invert;
    int c;
    int c_23;
    char* out_24;
    int n_25;
    int in;
    char* out_26;
    int n_27;
    int i;
    memset(&ap, 0, sizeof(ap));
    memset(&assigned, 0, sizeof(assigned));
    memset(&width, 0, sizeof(width));
    memset(&length, 0, sizeof(length));
    memset(&conv, 0, sizeof(conv));
    memset(&out, 0, sizeof(out));
    memset(&n, 0, sizeof(n));
    memset(&neg, 0, sizeof(neg));
    memset(&val_, 0, sizeof(val_));
    memset(&digits, 0, sizeof(digits));
    memset(&p, 0, sizeof(p));
    memset(&p_18, 0, sizeof(p_18));
    memset(&p_19, 0, sizeof(p_19));
    memset(&sval, 0, sizeof(sval));
    memset(&p_20, 0, sizeof(p_20));
    memset(&p_21, 0, sizeof(p_21));
    memset(&p_22, 0, sizeof(p_22));
    memset(&invert, 0, sizeof(invert));
    memset(&c, 0, sizeof(c));
    memset(&c_23, 0, sizeof(c_23));
    memset(&out_24, 0, sizeof(out_24));
    memset(&n_25, 0, sizeof(n_25));
    memset(&in, 0, sizeof(in));
    memset(&out_26, 0, sizeof(out_26));
    memset(&n_27, 0, sizeof(n_27));
    memset(&i, 0, sizeof(i));
    __builtin_va_start(ap,fmt);
    const char* s=str;
    const char* f=fmt;
    assigned=0;
    while(*f) {
        if(*f!=37) {
            if(__minux_isspace((unsigned char)*f)) {
                while(__minux_isspace((unsigned char)*f)) {
                    f++;
                }
                while(*s&&__minux_isspace((unsigned char)*s)) {
                    s++;
                }
                continue;
            }
            if(*s!=*f) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2713, 20);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            s++;
            f++;
            continue;
        }
        f++;
        width=0;
        while(*f>=48&&*f<=57) {
            width=width*10+(*f-48);
            f++;
        }
        length=0;
        if(*f==108||*f==122) {
            length=*f;
            f++;
            if(length==108&&*f==108) {
                f++;
            }
        }
        conv=*f++;
        if(conv==115) {
            out=__builtin_va_arg(ap,char*);
            if(!out) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2730, 21);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            while(*s&&__minux_isspace((unsigned char)*s)) {
                s++;
            }
            n=0;
            while(*s&&!__minux_isspace((unsigned char)*s)&&(width==0||n<width)) {
                out[n++]=*s++;
            }
            out[n]=0;
            if(n==0) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2735, 22);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            assigned++;
        }
        else if(conv==100||conv==105||conv==117) {
            while(*s&&__minux_isspace((unsigned char)*s)) {
                s++;
            }
            neg=0;
            if(*s==43||*s==45) {
                neg=(*s==45);
                s++;
            }
            val_=0;
            digits=0;
            while(*s>=48&&*s<=57&&(width==0||digits<width)) {
                val_=val_*10+(unsigned int)(*s-48);
                s++;
                digits++;
            }
            if(digits==0) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2742, 23);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            if(conv==117) {
                if(length==108) {
                    p=__builtin_va_arg(ap,unsigned long  int*);
                    *p=(unsigned long  int)val_;
                }
                else if(length==122) {
                    p_18=__builtin_va_arg(ap,unsigned long* );
                    *p_18=(unsigned long )val_;
                }
                else {
                    p_19=__builtin_va_arg(ap,unsigned int*);
                    *p_19=(unsigned int)val_;
                }
            }
            else {
                sval=((neg)?(-(long  long)val_):((long  long)val_));
                if(length==108) {
                    p_20=__builtin_va_arg(ap,long*);
                    *p_20=(long)sval;
                }
                else if(length==122) {
                    p_21=__builtin_va_arg(ap,long  long*);
                    *p_21=(long  long)sval;
                }
                else {
                    p_22=__builtin_va_arg(ap,int*);
                    *p_22=(int)sval;
                }
            }
            assigned++;
        }
        else if(conv==91) {
            invert=0;
            if(*f==94) {
                invert=1;
                f++;
            }
            char set[256]={0};
            if(*f==93) {
                ({ long long __neo_array_index225_0 = (long long)((unsigned int)93); if(__neo_array_index225_0 < 0 || __neo_array_index225_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index225_0] = 1; });
                f++;
            }
            while(*f&&*f!=93) {
                if(*(f+1)==45&&*(f+2)&&*(f+2)!=93) {
                    unsigned char  a=(unsigned char)*f,  b=(unsigned char)*(f+2);
                    if(a<=b) {
                        for(c=a                        ;c<=b;c++){
                            ({ long long __neo_array_index226_0 = (long long)(c); if(__neo_array_index226_0 < 0 || __neo_array_index226_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index226_0] = 1; });
                        }
                    }
                    else {
                        for(c_23=b                        ;c_23<=a;c_23++){
                            ({ long long __neo_array_index227_0 = (long long)(c_23); if(__neo_array_index227_0 < 0 || __neo_array_index227_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index227_0] = 1; });
                        }
                    }
                    f+=3;
                }
                else {
                    ({ long long __neo_array_index228_0 = (long long)((unsigned char)*f); if(__neo_array_index228_0 < 0 || __neo_array_index228_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } set[__neo_array_index228_0] = 1; });
                    f++;
                }
            }
            if(*f==93) {
                f++;
            }
            out_24=__builtin_va_arg(ap,char*);
            if(!out_24) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2771, 24);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            n_25=0;
            while(*s&&(width==0||n_25<width)) {
                in=(*({ long long __neo_array_index229_0 = (long long)((unsigned char)*s); if(__neo_array_index229_0 < 0 || __neo_array_index229_0 >= (long long)(256)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &set[__neo_array_index229_0]; }));
                if((in&&!invert)||(!in&&invert)) {
                    out_24[n_25++]=*s++;
                }
                else {
                    break;
                }
            }
            out_24[n_25]=0;
            if(n_25==0) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2779, 25);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            assigned++;
        }
        else if(conv==99) {
            out_26=__builtin_va_arg(ap,char*);
            n_27=(((width==0))?(1):(width));
            i=0;
            for(;i<n_27&&*s;i++){
                *out_26++=*s++;
            }
            if(i<n_27) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2785, 26);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            assigned++;
        }
        else if(conv==37) {
            if(*s!=37) {
                __builtin_va_end(ap);
                                __result_obj__0 = assigned;
                come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2788, 27);
                neo_current_frame = fr.prev;
                return __result_obj__0;
            }
            s++;
        }
        else {
            __builtin_va_end(ap);
                        __result_obj__0 = assigned;
            come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2791, 28);
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        while(__minux_isspace((unsigned char)*f)) {
            while(__minux_isspace((unsigned char)*f)) {
                f++;
            }
            while(*s&&__minux_isspace((unsigned char)*s)) {
                s++;
            }
        }
    }
    __builtin_va_end(ap);
        __result_obj__0 = assigned;
    come_call_finalizer(__builtin_va_list_finalize, (&ap), (void*)0, (void*)0, 1, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c-libc.h}", 2800, 29);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool  neo_frame_is_alive(unsigned long  int frame_id)
{
    struct neo_frame*  f  ;
    memset(&f, 0, sizeof(f));
    f=neo_current_frame;
    while(f) {
        if(f->frame_id==frame_id) {
                        return (_Bool)1;
        }
        f=f->prev;
    }
        return (_Bool)0;
}

void stackframe()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    f=neo_current_frame;
    while(f) {
        fun_name=f->fun_name;
        printf("%s\n",fun_name);
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

void stackframe2(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct neo_frame*  f  ;
    char* fun_name;
    memset(&it, 0, sizeof(it));
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    if(come_is_alive(mem)&&mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
        printf("allocated at %s %d #%d. type is %s.\n",it->sname,it->sline,it->id,it->class_name);
    }
    f=neo_current_frame;
    while(f) {
        fun_name=f->fun_name;
        printf("%s\n",fun_name);
        f=f->prev;
    }
    neo_current_frame = fr.prev;
}

_Bool  die(const char* msg, char* sname, int sline)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "die"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    void* __right_value4 = (void*)0;
    void* __right_value5 = (void*)0;
    void* __right_value6 = (void*)0;
    puts(((char* )(__right_value6=charp_operator_add(((char*)(__right_value5=xsprintf("\%s \%s : ",((char* )(__right_value3=charp_to_string(sname))),((char* )(__right_value4=int_to_string(sline)))))),msg))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 30));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 31));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 32));
    (__right_value4 = come_decrement_ref_count(__right_value4, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 33));
    (__right_value5 = come_decrement_ref_count(__right_value5, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 34));
    (__right_value6 = come_decrement_ref_count(__right_value6, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 227, 35));
    stackframe_v2();
    exit(4);
        neo_current_frame = fr.prev;
    return (_Bool)0;
    neo_current_frame = fr.prev;
}

void come_memleak_checker()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_memleak_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    int n;
    _Bool  flag  ;
    int i;
    memset(&it, 0, sizeof(it));
    memset(&n, 0, sizeof(n));
    memset(&flag, 0, sizeof(flag));
    memset(&i, 0, sizeof(i));
    it=gAllocMem;
    n=0;
    while(it) {
        n++;
        flag=(_Bool)0;
        printf("#%d ",n);
        if(it->class_name) {
            printf("%p (%s) %s %d: ",(char*)it+sizeof(struct sMemHeader )+sizeof(unsigned long )+sizeof(unsigned long ),it->class_name,it->sname,it->sline);
        }
        for(i=0        ;i<8;i++){
            if((*({ long long __neo_array_index230_0 = (long long)(i); if(__neo_array_index230_0 < 0 || __neo_array_index230_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &it->fun_name[__neo_array_index230_0]; }))) {
                printf("%s, ",(*({ long long __neo_array_index231_0 = (long long)(i); if(__neo_array_index231_0 < 0 || __neo_array_index231_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } &it->fun_name[__neo_array_index231_0]; })));
                flag=(_Bool)1;
            }
        }
        if(flag) {
            puts("");
        }
        it=it->next;
    }
    if(n>0) {
        printf("%d memory leaks. %d alloc, %d free.\n",n,gNumAlloc,gNumFree);
    }
    neo_current_frame = fr.prev;
}

void* alloc_from_pages(unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "alloc_from_pages"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  it_prev  ;
    void* __result_obj__0;
    struct sMemHeader*  it_28  ;
    memset(&it, 0, sizeof(it));
    memset(&it_prev, 0, sizeof(it_prev));
    memset(&it_28, 0, sizeof(it_28));
    it=gFreeMem;
    it_prev=((void*)0);
    while(it) {
        if(size<=it->alloc_size) {
            if(it_prev==((void*)0)) {
                gFreeMem=((void*)0);
            }
            else {
                it_prev->free_next=it->free_next;
            }
            memset(it,0,size);
                        __result_obj__0 = it;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        it_prev=it;
        it=it->free_next;
    }
    it_28=(struct sMemHeader* )calloc(1,size);
    it_28->alloc_size=size;
        __result_obj__0 = it_28;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free_mem_of_heap_pool(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free_mem_of_heap_pool"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    struct sMemHeader*  prev_it  ;
    struct sMemHeader*  next_it  ;
    unsigned long  size  ;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    memset(&next_it, 0, sizeof(next_it));
    memset(&size, 0, sizeof(size));
    if(mem) {
        it=(struct sMemHeader* )((char*)mem-sizeof(struct sMemHeader ));
        if(it->allocated!=177783) {
                        neo_current_frame = fr.prev;
            return;
        }
        it->allocated=0;
        prev_it=it->prev;
        next_it=it->next;
        if(gAllocMem==it) {
            gAllocMem=next_it;
            if(gAllocMem) {
                gAllocMem->prev=((void*)0);
            }
        }
        else {
            if(prev_it) {
                prev_it->next=next_it;
            }
            if(next_it) {
                next_it->prev=prev_it;
            }
        }
        size=it->size;
        it->free_next=gFreeMem;
        gFreeMem=it;
        it->alive=0;
        gNumFree++;
    }
    neo_current_frame = fr.prev;
}

void* come_alloc_mem_from_heap_pool(unsigned long  compiletime_size  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_alloc_mem_from_heap_pool"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long  size2  ;
    void* result;
    struct sMemHeader*  it  ;
    int n;
    struct neo_frame*  f  ;
    char* fun_name;
    void* __result_obj__0;
    memset(&size2, 0, sizeof(size2));
    memset(&result, 0, sizeof(result));
    memset(&it, 0, sizeof(it));
    memset(&n, 0, sizeof(n));
    memset(&f, 0, sizeof(f));
    memset(&fun_name, 0, sizeof(fun_name));
    size2=size+sizeof(struct sMemHeader );
    size2=(size2+7&~0x7);
    result=alloc_from_pages(size2);
    it=result;
    it->allocated=177783;
    it->compiletime_size=compiletime_size;
    it->size=size2;
    it->free_next=((void*)0);
    it->alive=1;
    n=0;
    f=neo_current_frame;
    while(f&&n<8) {
        fun_name=f->fun_name;
        ({ long long __neo_array_index232_0 = (long long)(n); if(__neo_array_index232_0 < 0 || __neo_array_index232_0 >= (long long)(8)) { extern void stackframe(void) __attribute__((weak)); extern void exit(int); puts("array index out of bounds"); if(stackframe) stackframe(); else { puts("stackframe"); puts(__func__); } exit(2); } it->fun_name[__neo_array_index232_0] = fun_name; });
        n++;
        f=f->prev;
    }
    it->next=gAllocMem;
    it->prev=((void*)0);
    it->class_name=class_name;
    it->sname=sname;
    it->sline=sline;
    it->id=id;
    if(gAllocMem) {
        gAllocMem->prev=it;
    }
    gAllocMem=it;
    gNumAlloc++;
        __result_obj__0 = (char*)result+sizeof(struct sMemHeader );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

char* come_dynamic_typeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_dynamic_typeof"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    char* __result_obj__0;
    memset(&it, 0, sizeof(it));
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe2(mem);
        exit(2);
    }
        __result_obj__0 = (char*)it->class_name;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

unsigned long  dynamic_sizeof(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "dynamic_sizeof"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    unsigned long  size  ;
    memset(&it, 0, sizeof(it));
    memset(&size, 0, sizeof(size));
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
    if(it->allocated!=177783) {
        printf("invalid heap object(%p)(1)\n",it);
        stackframe2(mem);
        exit(2);
    }
    size=it->compiletime_size;
        neo_current_frame = fr.prev;
    return size;
    neo_current_frame = fr.prev;
}

void* come_calloc(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* mem;
    unsigned long*  ref_count  ;
    unsigned long*  size2  ;
    void* __result_obj__0;
    memset(&mem, 0, sizeof(mem));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&size2, 0, sizeof(size2));
    mem=come_alloc_mem_from_heap_pool(count*size,sizeof(unsigned long )+sizeof(unsigned long )+count*size,sname,sline,id,class_name);
    ref_count=(unsigned long* )mem;
    *ref_count=0;
    size2=(unsigned long* )(mem+sizeof(unsigned long ));
    *size2=size*count+sizeof(unsigned long )+sizeof(unsigned long );
        __result_obj__0 = mem+sizeof(unsigned long )+sizeof(unsigned long );
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

_Bool  come_is_alive(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_is_alive"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct sMemHeader*  it  ;
    memset(&it, 0, sizeof(it));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    it=(struct sMemHeader* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long )-sizeof(struct sMemHeader ));
        neo_current_frame = fr.prev;
    return it->alive;
    neo_current_frame = fr.prev;
}

void come_free(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe2(mem);
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    come_free_mem_of_heap_pool((char*)ref_count);
    neo_current_frame = fr.prev;
}

void* come_memdup(void* block, char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_memdup"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    char* mem;
    unsigned long*  size_p  ;
    unsigned long  size  ;
    void* result;
    memset(&mem, 0, sizeof(mem));
    memset(&size_p, 0, sizeof(size_p));
    memset(&size, 0, sizeof(size));
    memset(&result, 0, sizeof(result));
    if(block==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(block)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 514, 36));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 514, 37));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 514, 38));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 514, 39));
        stackframe2(block);
        exit(3);
    }
    mem=(char*)block-sizeof(unsigned long )-sizeof(unsigned long );
    size_p=(unsigned long* )(mem+sizeof(unsigned long ));
    size=*size_p-sizeof(unsigned long )-sizeof(unsigned long );
    result=come_calloc_v2(1,size,sname,sline,id,class_name);
    memcpy(result,block,size);
        __result_obj__0 = result;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_increment_ref_count(void* mem, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_increment_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 540, 40));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 540, 41));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 540, 42));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 540, 43));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    (*ref_count)++;
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void* come_print_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_print_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe_v2();
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    printf("ref_count %ld\n",*ref_count);
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int come_get_ref_count(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_get_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned long*  ref_count  ;
    memset(&ref_count, 0, sizeof(ref_count));
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    if(!come_is_alive(mem)) {
        puts("invalid heap object");
        stackframe_v2();
        exit(3);
    }
    ref_count=(unsigned long* )((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
        neo_current_frame = fr.prev;
    return *ref_count;
    neo_current_frame = fr.prev;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, _Bool  no_decrement  , _Bool  no_free  , void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_decrement_ref_count"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer)(void*);
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer, 0, sizeof(finalizer));
    if(result_obj) {
        if(mem==result_obj) {
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
    }
    if(mem==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(!come_is_alive(mem)) {
        puts(((char*)(__right_value3=xsprintf("invalid heap object \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 603, 44));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 603, 45));
        (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 603, 46));
        (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 603, 47));
        stackframe2(mem);
        exit(3);
    }
    ref_count=(long*)((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
    if(!no_decrement) {
        (*ref_count)--;
    }
    count=*ref_count;
    if(!no_free&&count<=0) {
        if(protocol_obj&&protocol_fun) {
            finalizer=(void (*)(void*))protocol_fun;
            finalizer(protocol_obj);
            come_free_v2(protocol_obj);
        }
        come_free_v2(mem);
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = mem;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free, void* result_obj, char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_call_finalizer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void (*finalizer)(void*);
    void (*finalizer_29)(void*);
    void (*finalizer_30)(void*);
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    long* ref_count;
    long count;
    void (*finalizer_31)(void*);
    void (*finalizer_32)(void*);
    void (*finalizer_33)(void*);
    memset(&finalizer, 0, sizeof(finalizer));
    memset(&finalizer_29, 0, sizeof(finalizer_29));
    memset(&finalizer_30, 0, sizeof(finalizer_30));
    memset(&ref_count, 0, sizeof(ref_count));
    memset(&count, 0, sizeof(count));
    memset(&finalizer_31, 0, sizeof(finalizer_31));
    memset(&finalizer_32, 0, sizeof(finalizer_32));
    memset(&finalizer_33, 0, sizeof(finalizer_33));
    if(result_obj) {
        if(mem==result_obj) {
                        neo_current_frame = fr.prev;
            return;
        }
    }
    if(mem==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj&&protocol_fun) {
                finalizer=(void (*)(void*))protocol_fun;
                finalizer(protocol_obj);
            }
            finalizer_29=(void (*)(void*))fun;
            finalizer_29(mem);
        }
        else {
            if(protocol_obj&&protocol_fun) {
                finalizer_30=(void (*)(void*))protocol_fun;
                finalizer_30(protocol_obj);
            }
        }
    }
    else {
        if(!come_is_alive(mem)) {
            puts(((char*)(__right_value3=xsprintf("invalid heap object. \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 660, 48));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 660, 49));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 660, 50));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 660, 51));
            stackframe2(mem);
            exit(3);
        }
        ref_count=(long*)((char*)mem-sizeof(unsigned long )-sizeof(unsigned long ));
        if(!no_decrement) {
            (*ref_count)--;
        }
        count=*ref_count;
        if(!no_free&&count<=0) {
            if(mem) {
                if(fun) {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_31=(void (*)(void*))protocol_fun;
                        finalizer_31(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                    if(fun) {
                        finalizer_32=(void (*)(void*))fun;
                        finalizer_32(mem);
                    }
                }
                else {
                    if(protocol_obj&&protocol_fun) {
                        finalizer_33=(void (*)(void*))protocol_fun;
                        finalizer_33(protocol_obj);
                        come_free_v2(protocol_obj);
                    }
                }
                come_free_v2(mem);
            }
        }
    }
    neo_current_frame = fr.prev;
}

void xassert(const char* msg, _Bool  test  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xassert"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    printf("%s...",msg);
    if(!test) {
        puts("false");
        stackframe_v2();
        exit(2);
    }
    puts("ok");
    neo_current_frame = fr.prev;
}

void* come_null_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_null_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    if(mem) {
                __result_obj__0 = mem;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 52));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 53));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 54));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 715, 55));
    stackframe_v2();
    exit(1);
    neo_current_frame = fr.prev;
}

void* come_heap_checker(void* mem, const char* sname, int sline, int id)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_heap_checker"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    void* __right_value2 = (void*)0;
    void* __right_value3 = (void*)0;
    if(mem) {
        if(come_is_alive(mem)) {
                        __result_obj__0 = mem;
            neo_current_frame = fr.prev;
            return __result_obj__0;
        }
        else {
            puts(((char*)(__right_value3=xsprintf("heap pointer exception \%s \%s #\%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
            (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 727, 56));
            (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 727, 57));
            (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 727, 58));
            (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 727, 59));
            stackframe_v2();
            exit(1);
        }
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    __right_value2 = (void*)0;
    __right_value3 = (void*)0;
    puts(((char*)(__right_value3=xsprintf("null pointer exception \%s \%s \%s",((char* )(__right_value0=charp_to_string(sname))),((char* )(__right_value1=int_to_string(sline))),((char* )(__right_value2=int_to_string(id)))))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 733, 60));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 733, 61));
    (__right_value2 = come_decrement_ref_count(__right_value2, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 733, 62));
    (__right_value3 = come_decrement_ref_count(__right_value3, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 733, 63));
    stackframe_v2();
    exit(1);
    neo_current_frame = fr.prev;
}

char*  __builtin_string(const char* str, char* sname, int sline)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "__builtin_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 741, 64);
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 741, 65));
        return __result_obj__0;
    }
    len=strlen(str)+1;
    result=come_calloc_v2(1,sizeof(char)*(len),sname,sline,0,"string");
    strncpy(result,str,len);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 750, 66);
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 750, 67));
    return __result_obj__0;
}

void stackframe_v2()
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "stackframe_v2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    stackframe();
    neo_current_frame = fr.prev;
}

void* come_calloc_v2(unsigned long  count  , unsigned long  size  , const char* sname, int sline, int id, const char* class_name)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_calloc_v2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __result_obj__0;
        __result_obj__0 = come_calloc(count,size,sname,sline,id,class_name);
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

void come_free_v2(void* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "come_free_v2"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    come_free(mem);
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_initialize(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj1;
    struct buffer*  __result_obj__0  ;
    self->size=128;
    __dec_obj1=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4942, 68, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4942, 70);
    __dec_obj1 = come_decrement_ref_count(__dec_obj1, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4942, 69);
    ((char*)self->buf)[0]=0;
    self->len=0;
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4946, 71);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4946, 72);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4946, 73);
    return __result_obj__0;
}

struct buffer*  buffer_initialize_with_value(struct buffer*  self  , const char* mem, unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_initialize_with_value"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char* __dec_obj2;
    struct buffer*  __result_obj__0  ;
    self->size=128;
    __dec_obj2=self->buf,
    self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4952, 74, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4952, 76);
    __dec_obj2 = come_decrement_ref_count(__dec_obj2, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4952, 75);
    ((char*)self->buf)[0]=0;
    self->len=0;
    buffer_append(self,mem,size);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 4958, 77);
    come_call_finalizer(buffer_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4958, 78);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4958, 79);
    return __result_obj__0;
}

void buffer_finalize(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self&&self->buf) {
        (self->buf = come_decrement_ref_count(self->buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4963, 80));
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_clone(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    void* __right_value0 = (void*)0;
    struct buffer*  result  ;
    char* __dec_obj3;
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(((void*)0), "/home/ab25cq/neo-c/neo-c.h", 4969, 81);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4969, 82);
        return __result_obj__0;
    }
    result=(struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 4972, 83, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 4972, 84);
    result->size=self->size;
    __right_value0 = (void*)0;
    __dec_obj3=result->buf,
    result->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(self->size)), "/home/ab25cq/neo-c/neo-c.h", 4975, 85, "char*"), "/home/ab25cq/neo-c/neo-c.h", 4975, 87);
    __dec_obj3 = come_decrement_ref_count(__dec_obj3, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4975, 86);
    result->len=self->len;
    memcpy(result->buf,self->buf,self->len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 4979, 88);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4979, 89);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 4979, 90);
    return __result_obj__0;
}

_Bool  buffer_equals(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    _Bool  __result_obj__0  ;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(left==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        __result_obj__0 = string_equals(((char* )(__right_value0=buffer_to_string(left))),((char* )(__right_value1=buffer_to_string(right))));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4991, 91));
    (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 4991, 92));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_length(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return self->len;
    neo_current_frame = fr.prev;
}

void buffer_reset(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_reset"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    ((char*)self->buf)[0]=0;
    self->len=0;
    neo_current_frame = fr.prev;
}

void buffer_trim(struct buffer*  self  , int len)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_trim"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    self->len-=len;
    if(self->len>=0) {
        ((char*)self->buf)[self->len]=0;
    }
    else {
        self->len=0;
        ((char*)self->buf)[0]=0;
    }
    neo_current_frame = fr.prev;
}

struct buffer*  buffer_append(struct buffer*  self  , const char* mem, unsigned long  size  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj4;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5033, 93, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5033, 94);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj4=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5037, 95, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5037, 97);
        __dec_obj4 = come_decrement_ref_count(__dec_obj4, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5037, 96);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5043, 98));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_char(struct buffer*  self  , char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj5;
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len+1+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5057, 99, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5057, 100);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+10+1)*2;
        __right_value0 = (void*)0;
        __dec_obj5=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5061, 101, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5061, 103);
        __dec_obj5 = come_decrement_ref_count(__dec_obj5, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5061, 102);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5067, 104));
    }
    ((char*)self->buf)[self->len]=c;
    self->len++;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj6;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5084, 105, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5084, 106);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj6=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5087, 107, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5087, 109);
        __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5087, 108);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5093, 110));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_format(struct buffer*  self  , const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_format"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    __builtin_va_list  args  ;
    int len;
    void* __right_value0 = (void*)0;
    char*  mem  ;
    int size;
    int old_len;
    char* old_buf;
    int new_size;
    char* __dec_obj7;
    memset(&len, 0, sizeof(len));
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||msg==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    char result[128];
    memset(&result, 0, sizeof(result));
    __builtin_va_start(args,msg);
    vsnprintf(result,128,msg,args);
    __builtin_va_end(args);
    len=strlen(result);
    mem=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",5116), "/home/ab25cq/neo-c/neo-c.h", 5116, 111);
    size=strlen(mem);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        __right_value0 = (void*)0;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5121, 112, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5121, 113);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj7=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5124, 114, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5124, 116);
        __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5124, 115);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5130, 117));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
    free(result);
        __result_obj__0 = self;
    (mem = come_decrement_ref_count(mem, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5136, 118));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_nullterminated_str(struct buffer*  self  , const char* mem)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_nullterminated_str"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj8;
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)||mem==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    size=strlen(mem)+1;
    if(self->len+size+1+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5187, 119, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5187, 120);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj8=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5190, 121, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5190, 123);
        __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5190, 122);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5196, 124));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_int(struct buffer*  self  , int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_int"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj9;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(int);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5214, 125, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5214, 126);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj9=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5217, 127, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5217, 129);
        __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5217, 128);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5223, 130));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_long(struct buffer*  self  , long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_long"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    long* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj10;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(long);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5240, 131, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5240, 132);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj10=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5243, 133, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5243, 135);
        __dec_obj10 = come_decrement_ref_count(__dec_obj10, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5243, 134);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5249, 136));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_append_short(struct buffer*  self  , short value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_append_short"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    short* mem;
    int size;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj11;
    memset(&mem, 0, sizeof(mem));
    memset(&size, 0, sizeof(size));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    mem=&value;
    size=sizeof(short);
    if(self->len+size+1+1>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5267, 137, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5267, 138);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+size+1)*2;
        __right_value0 = (void*)0;
        __dec_obj11=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5270, 139, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5270, 141);
        __dec_obj11 = come_decrement_ref_count(__dec_obj11, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5270, 140);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5276, 142));
    }
    memcpy(self->buf+self->len,mem,size);
    self->len+=size;
    ((char*)self->buf)[self->len]=0;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  buffer_alignment(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_alignment"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct buffer*  __result_obj__0  ;
    int len;
    int old_len;
    void* __right_value0 = (void*)0;
    char* old_buf;
    int new_size;
    char* __dec_obj12;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&old_len, 0, sizeof(old_len));
    memset(&old_buf, 0, sizeof(old_buf));
    memset(&new_size, 0, sizeof(new_size));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    len=self->len;
    len=(len+3)&~3;
    if(len>=self->size) {
        old_len=self->len;
        old_buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(old_len+1)), "/home/ab25cq/neo-c/neo-c.h", 5294, 143, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5294, 144);
        memcpy(old_buf,self->buf,old_len+1);
        new_size=(self->size+1+1)*2;
        __right_value0 = (void*)0;
        __dec_obj12=self->buf,
        self->buf=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(new_size)), "/home/ab25cq/neo-c/neo-c.h", 5297, 145, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5297, 147);
        __dec_obj12 = come_decrement_ref_count(__dec_obj12, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5297, 146);
        memcpy(self->buf,old_buf,old_len);
        ((char*)self->buf)[old_len]=0;
        self->size=new_size;
        (old_buf = come_decrement_ref_count(old_buf, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5303, 148));
    }
    for(i=self->len    ;i<len;i++){
        ((char*)self->buf)[i]=0;
    }
    self->len=len;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

int buffer_compare(struct buffer*  left  , struct buffer*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left->buf,right->buf);
    neo_current_frame = fr.prev;
}

struct buffer*  charp_to_buffer(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5329, 149, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5329, 150)), "/home/ab25cq/neo-c/neo-c.h", 5329, 151);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5332, 152);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5332, 153);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5332, 154);
        return __result_obj__0;
    }
    buffer_append_str(result,self);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5337, 155);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5337, 156);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5337, 157);
    return __result_obj__0;
}

char*  buffer_to_string(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5343))), "/home/ab25cq/neo-c/neo-c.h", 5343, 158);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5343, 159));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5343, 160));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self->buf,"/home/ab25cq/neo-c/neo-c.h",5346))), "/home/ab25cq/neo-c/neo-c.h", 5346, 161);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5346, 162));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5346, 163));
    return __result_obj__0;
}

unsigned char* buffer_head_pointer(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_head_pointer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    unsigned char* __result_obj__0;
    if(self==((void*)0)) {
                __result_obj__0 = ((void*)0);
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
        __result_obj__0 = (unsigned char*)self->buf;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct buffer*  chara_to_buffer(char* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5359, 164, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5359, 165)), "/home/ab25cq/neo-c/neo-c.h", 5359, 166);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5361, 167);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5361, 168);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5361, 169);
        return __result_obj__0;
    }
    buffer_append(result,self,sizeof(char)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5364, 170);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5364, 171);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5364, 172);
    return __result_obj__0;
}

struct buffer*  charpa_to_buffer(char** self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5369, 173, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5369, 174)), "/home/ab25cq/neo-c/neo-c.h", 5369, 175);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5371, 176);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5371, 177);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5371, 178);
        return __result_obj__0;
    }
    for(i=0    ;i<len;i++){
        buffer_append(result,self[i],strlen(self[i]));
    }
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5376, 179);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5376, 180);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5376, 181);
    return __result_obj__0;
}

struct buffer*  shorta_to_buffer(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5381, 182, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5381, 183)), "/home/ab25cq/neo-c/neo-c.h", 5381, 184);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5383, 185);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5383, 186);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5383, 187);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(short)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5386, 188);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5386, 189);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5386, 190);
    return __result_obj__0;
}

struct buffer*  inta_to_buffer(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5391, 191, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5391, 192)), "/home/ab25cq/neo-c/neo-c.h", 5391, 193);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5393, 194);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5393, 195);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5393, 196);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(int)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5396, 197);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5396, 198);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5396, 199);
    return __result_obj__0;
}

struct buffer*  longa_to_buffer(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5401, 200, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5401, 201)), "/home/ab25cq/neo-c/neo-c.h", 5401, 202);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5403, 203);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5403, 204);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5403, 205);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(long)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5406, 206);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5406, 207);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5406, 208);
    return __result_obj__0;
}

struct buffer*  floata_to_buffer(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5411, 209, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5411, 210)), "/home/ab25cq/neo-c/neo-c.h", 5411, 211);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5413, 212);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5413, 213);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5413, 214);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(float)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5416, 215);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5416, 216);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5416, 217);
    return __result_obj__0;
}

struct buffer*  doublea_to_buffer(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_buffer"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    struct buffer*  __result_obj__0  ;
    memset(&result, 0, sizeof(result));
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5421, 218, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5421, 219)), "/home/ab25cq/neo-c/neo-c.h", 5421, 220);
    if(self==((void*)0)) {
                __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5423, 221);
        come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5423, 222);
        neo_current_frame = fr.prev;
        come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5423, 223);
        return __result_obj__0;
    }
    buffer_append(result,(char*)self,sizeof(double)*len);
        __result_obj__0 = (struct buffer* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5426, 224);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5426, 225);
    neo_current_frame = fr.prev;
    come_call_finalizer(buffer_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5426, 226);
    return __result_obj__0;
}

char*  buffer_printable(struct buffer*  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "buffer_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int len;
    void* __right_value0 = (void*)0;
    char*  result  ;
    char*  __result_obj__0  ;
    int n;
    int i;
    unsigned char c;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&n, 0, sizeof(n));
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    len=self->len;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 5432, 227, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5432, 228);
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5435, 229);
        (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5435, 230));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5435, 231));
        return __result_obj__0;
    }
    n=0;
    for(i=0    ;i<len;i++){
        c=self->buf[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else if(c>127) {
            result[n++]=63;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5458, 232);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5458, 233));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5458, 234));
    return __result_obj__0;
}

static struct list$1char$* list$1char$_initialize_with_values(struct list$1char$* self, int num_value, char* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1char$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1char$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 242);
    come_call_finalizer(list$1char$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 244);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 245);
    return __result_obj__0;
}

static struct list$1char$* list$1char$_push_back(struct list$1char$* self, char item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$* litem;
    struct list_item$1char$* litem_34;
    struct list_item$1char$* litem_35;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_34, 0, sizeof(litem_34));
    memset(&litem_35, 0, sizeof(litem_35));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 236, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 237);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_34=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 238, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 239);
        litem_34->prev=self->head;
        litem_34->next=((void*)0);
        litem_34->item=item;
        self->tail=litem_34;
        self->head->next=litem_34;
    }
    else {
        __right_value0 = (void*)0;
        litem_35=(struct list_item$1char$*)come_increment_ref_count(((struct list_item$1char$*)(__right_value0=(struct list_item$1char$*)come_calloc_v2(1, sizeof(struct list_item$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 240, "struct list_item$1char$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 241);
        litem_35->prev=self->tail;
        litem_35->next=((void*)0);
        litem_35->item=item;
        self->tail->next=litem_35;
        self->tail=litem_35;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$$p_finalize(struct list$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$* it;
    struct list_item$1char$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 243);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$$p_finalize(struct list_item$1char$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$* chara_to_list(char* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$* __result_obj__0;
        __result_obj__0 = (struct list$1char$*)come_increment_ref_count(((struct list$1char$*)(__right_value1=list$1char$_initialize_with_values((struct list$1char$*)come_increment_ref_count((struct list$1char$*)come_calloc_v2(1, sizeof(struct list$1char$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5483, 235, "struct list$1char$*"), "/home/ab25cq/neo-c/neo-c.h", 5483, 246),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5483, 247);
    come_call_finalizer(list$1char$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5483, 248);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5483, 249);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_initialize_with_values(struct list$1char$p* self, int num_value, char** values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1char$p* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1char$p_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 257);
    come_call_finalizer(list$1char$p$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 259);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 260);
    return __result_obj__0;
}

static struct list$1char$p* list$1char$p_push_back(struct list$1char$p* self, char* item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$p* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$p* litem;
    struct list_item$1char$p* litem_36;
    struct list_item$1char$p* litem_37;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_36, 0, sizeof(litem_36));
    memset(&litem_37, 0, sizeof(litem_37));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 251, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 252);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_36=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 253, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 254);
        litem_36->prev=self->head;
        litem_36->next=((void*)0);
        litem_36->item=item;
        self->tail=litem_36;
        self->head->next=litem_36;
    }
    else {
        __right_value0 = (void*)0;
        litem_37=(struct list_item$1char$p*)come_increment_ref_count(((struct list_item$1char$p*)(__right_value0=(struct list_item$1char$p*)come_calloc_v2(1, sizeof(struct list_item$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 255, "struct list_item$1char$p*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 256);
        litem_37->prev=self->tail;
        litem_37->next=((void*)0);
        litem_37->item=item;
        self->tail->next=litem_37;
        self->tail=litem_37;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1char$p$p_finalize(struct list$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$p* it;
    struct list_item$1char$p* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$p$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 258);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$p$p_finalize(struct list_item$1char$p* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$p$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1char$p* charpa_to_list(char** self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$p* __result_obj__0;
        __result_obj__0 = (struct list$1char$p*)come_increment_ref_count(((struct list$1char$p*)(__right_value1=list$1char$p_initialize_with_values((struct list$1char$p*)come_increment_ref_count((struct list$1char$p*)come_calloc_v2(1, sizeof(struct list$1char$p)*(1), "/home/ab25cq/neo-c/neo-c.h", 5488, 250, "struct list$1char$p*"), "/home/ab25cq/neo-c/neo-c.h", 5488, 261),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5488, 262);
    come_call_finalizer(list$1char$p$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5488, 263);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$p$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5488, 264);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_initialize_with_values(struct list$1short$* self, int num_value, short* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1short$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1short$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 272);
    come_call_finalizer(list$1short$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 274);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 275);
    return __result_obj__0;
}

static struct list$1short$* list$1short$_push_back(struct list$1short$* self, short item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1short$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1short$* litem;
    struct list_item$1short$* litem_38;
    struct list_item$1short$* litem_39;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_38, 0, sizeof(litem_38));
    memset(&litem_39, 0, sizeof(litem_39));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 266, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 267);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_38=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 268, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 269);
        litem_38->prev=self->head;
        litem_38->next=((void*)0);
        litem_38->item=item;
        self->tail=litem_38;
        self->head->next=litem_38;
    }
    else {
        __right_value0 = (void*)0;
        litem_39=(struct list_item$1short$*)come_increment_ref_count(((struct list_item$1short$*)(__right_value0=(struct list_item$1short$*)come_calloc_v2(1, sizeof(struct list_item$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 270, "struct list_item$1short$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 271);
        litem_39->prev=self->tail;
        litem_39->next=((void*)0);
        litem_39->item=item;
        self->tail->next=litem_39;
        self->tail=litem_39;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1short$$p_finalize(struct list$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1short$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1short$* it;
    struct list_item$1short$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1short$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 273);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1short$$p_finalize(struct list_item$1short$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1short$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1short$* shorta_to_list(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1short$* __result_obj__0;
        __result_obj__0 = (struct list$1short$*)come_increment_ref_count(((struct list$1short$*)(__right_value1=list$1short$_initialize_with_values((struct list$1short$*)come_increment_ref_count((struct list$1short$*)come_calloc_v2(1, sizeof(struct list$1short$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5493, 265, "struct list$1short$*"), "/home/ab25cq/neo-c/neo-c.h", 5493, 276),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5493, 277);
    come_call_finalizer(list$1short$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5493, 278);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1short$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5493, 279);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_initialize_with_values(struct list$1int$* self, int num_value, int* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1int$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1int$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 287);
    come_call_finalizer(list$1int$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 289);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 290);
    return __result_obj__0;
}

static struct list$1int$* list$1int$_push_back(struct list$1int$* self, int item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1int$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1int$* litem;
    struct list_item$1int$* litem_40;
    struct list_item$1int$* litem_41;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_40, 0, sizeof(litem_40));
    memset(&litem_41, 0, sizeof(litem_41));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 281, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 282);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_40=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 283, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 284);
        litem_40->prev=self->head;
        litem_40->next=((void*)0);
        litem_40->item=item;
        self->tail=litem_40;
        self->head->next=litem_40;
    }
    else {
        __right_value0 = (void*)0;
        litem_41=(struct list_item$1int$*)come_increment_ref_count(((struct list_item$1int$*)(__right_value0=(struct list_item$1int$*)come_calloc_v2(1, sizeof(struct list_item$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 285, "struct list_item$1int$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 286);
        litem_41->prev=self->tail;
        litem_41->next=((void*)0);
        litem_41->item=item;
        self->tail->next=litem_41;
        self->tail=litem_41;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1int$$p_finalize(struct list$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1int$* it;
    struct list_item$1int$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1int$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 288);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1int$$p_finalize(struct list_item$1int$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1int$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1int$* inta_to_list(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1int$* __result_obj__0;
        __result_obj__0 = (struct list$1int$*)come_increment_ref_count(((struct list$1int$*)(__right_value1=list$1int$_initialize_with_values((struct list$1int$*)come_increment_ref_count((struct list$1int$*)come_calloc_v2(1, sizeof(struct list$1int$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5498, 280, "struct list$1int$*"), "/home/ab25cq/neo-c/neo-c.h", 5498, 291),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5498, 292);
    come_call_finalizer(list$1int$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5498, 293);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1int$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5498, 294);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_initialize_with_values(struct list$1long$* self, int num_value, long* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1long$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1long$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 302);
    come_call_finalizer(list$1long$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 304);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 305);
    return __result_obj__0;
}

static struct list$1long$* list$1long$_push_back(struct list$1long$* self, long item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1long$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1long$* litem;
    struct list_item$1long$* litem_42;
    struct list_item$1long$* litem_43;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_42, 0, sizeof(litem_42));
    memset(&litem_43, 0, sizeof(litem_43));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 296, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 297);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_42=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 298, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 299);
        litem_42->prev=self->head;
        litem_42->next=((void*)0);
        litem_42->item=item;
        self->tail=litem_42;
        self->head->next=litem_42;
    }
    else {
        __right_value0 = (void*)0;
        litem_43=(struct list_item$1long$*)come_increment_ref_count(((struct list_item$1long$*)(__right_value0=(struct list_item$1long$*)come_calloc_v2(1, sizeof(struct list_item$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 300, "struct list_item$1long$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 301);
        litem_43->prev=self->tail;
        litem_43->next=((void*)0);
        litem_43->item=item;
        self->tail->next=litem_43;
        self->tail=litem_43;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1long$$p_finalize(struct list$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1long$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1long$* it;
    struct list_item$1long$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1long$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 303);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1long$$p_finalize(struct list_item$1long$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1long$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1long$* longa_to_list(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1long$* __result_obj__0;
        __result_obj__0 = (struct list$1long$*)come_increment_ref_count(((struct list$1long$*)(__right_value1=list$1long$_initialize_with_values((struct list$1long$*)come_increment_ref_count((struct list$1long$*)come_calloc_v2(1, sizeof(struct list$1long$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5503, 295, "struct list$1long$*"), "/home/ab25cq/neo-c/neo-c.h", 5503, 306),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5503, 307);
    come_call_finalizer(list$1long$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5503, 308);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1long$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5503, 309);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_initialize_with_values(struct list$1float$* self, int num_value, float* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1float$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1float$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 317);
    come_call_finalizer(list$1float$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 319);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 320);
    return __result_obj__0;
}

static struct list$1float$* list$1float$_push_back(struct list$1float$* self, float item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1float$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1float$* litem;
    struct list_item$1float$* litem_44;
    struct list_item$1float$* litem_45;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_44, 0, sizeof(litem_44));
    memset(&litem_45, 0, sizeof(litem_45));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 311, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 312);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_44=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 313, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 314);
        litem_44->prev=self->head;
        litem_44->next=((void*)0);
        litem_44->item=item;
        self->tail=litem_44;
        self->head->next=litem_44;
    }
    else {
        __right_value0 = (void*)0;
        litem_45=(struct list_item$1float$*)come_increment_ref_count(((struct list_item$1float$*)(__right_value0=(struct list_item$1float$*)come_calloc_v2(1, sizeof(struct list_item$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 315, "struct list_item$1float$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 316);
        litem_45->prev=self->tail;
        litem_45->next=((void*)0);
        litem_45->item=item;
        self->tail->next=litem_45;
        self->tail=litem_45;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1float$$p_finalize(struct list$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1float$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1float$* it;
    struct list_item$1float$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1float$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 318);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1float$$p_finalize(struct list_item$1float$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1float$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1float$* floata_to_list(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1float$* __result_obj__0;
        __result_obj__0 = (struct list$1float$*)come_increment_ref_count(((struct list$1float$*)(__right_value1=list$1float$_initialize_with_values((struct list$1float$*)come_increment_ref_count((struct list$1float$*)come_calloc_v2(1, sizeof(struct list$1float$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5508, 310, "struct list$1float$*"), "/home/ab25cq/neo-c/neo-c.h", 5508, 321),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5508, 322);
    come_call_finalizer(list$1float$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5508, 323);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1float$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5508, 324);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_initialize_with_values(struct list$1double$* self, int num_value, double* values)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_initialize_with_values"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    struct list$1double$* __result_obj__0;
    memset(&i, 0, sizeof(i));
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
    for(i=0    ;i<num_value;i++){
        list$1double$_push_back(self,values[i]);
    }
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1555, 332);
    come_call_finalizer(list$1double$$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 334);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 335);
    return __result_obj__0;
}

static struct list$1double$* list$1double$_push_back(struct list$1double$* self, double item)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1double$* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1double$* litem;
    struct list_item$1double$* litem_46;
    struct list_item$1double$* litem_47;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_46, 0, sizeof(litem_46));
    memset(&litem_47, 0, sizeof(litem_47));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 326, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 327);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        litem->item=item;
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_46=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 328, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 329);
        litem_46->prev=self->head;
        litem_46->next=((void*)0);
        litem_46->item=item;
        self->tail=litem_46;
        self->head->next=litem_46;
    }
    else {
        __right_value0 = (void*)0;
        litem_47=(struct list_item$1double$*)come_increment_ref_count(((struct list_item$1double$*)(__right_value0=(struct list_item$1double$*)come_calloc_v2(1, sizeof(struct list_item$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 330, "struct list_item$1double$*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 331);
        litem_47->prev=self->tail;
        litem_47->next=((void*)0);
        litem_47->item=item;
        self->tail->next=litem_47;
        self->tail=litem_47;
    }
    self->len++;
        __result_obj__0 = self;
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

static void list$1double$$p_finalize(struct list$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1double$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1double$* it;
    struct list_item$1double$* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1double$$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 333);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1double$$p_finalize(struct list_item$1double$* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1double$$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
            neo_current_frame = fr.prev;
}

struct list$1double$* doublea_to_list(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_to_list"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1double$* __result_obj__0;
        __result_obj__0 = (struct list$1double$*)come_increment_ref_count(((struct list$1double$*)(__right_value1=list$1double$_initialize_with_values((struct list$1double$*)come_increment_ref_count((struct list$1double$*)come_calloc_v2(1, sizeof(struct list$1double$)*(1), "/home/ab25cq/neo-c/neo-c.h", 5513, 325, "struct list$1double$*"), "/home/ab25cq/neo-c/neo-c.h", 5513, 336),len,self))), "/home/ab25cq/neo-c/neo-c.h", 5513, 337);
    come_call_finalizer(list$1double$$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5513, 338);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1double$$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5513, 339);
    return __result_obj__0;
}

_Bool  bool_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  _Bool_equals(_Bool self, _Bool right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  char_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  short_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  int_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  long_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  size_t_equals(unsigned long  self  , unsigned long  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  float_equals(float self, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  double_equals(double self, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  bool_operator_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  _Bool_operator_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  char_operator_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  short_operator_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  int_operator_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  long_operator_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  bool_operator_not_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  _Bool_operator_not_equals(_Bool  self  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  char_operator_not_equals(char self, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  short_operator_not_equals(short self, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  int_operator_not_equals(int self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  long_operator_not_equals(long self, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !(self==right);
    neo_current_frame = fr.prev;
}

_Bool  charp_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  string_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  voidp_equals(void* self, void* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  boolp_equals(_Bool*  self  , _Bool*  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "boolp_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return *self==*right;
    neo_current_frame = fr.prev;
}

_Bool  string_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  charp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==right) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  chara_operator_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)==0;
    neo_current_frame = fr.prev;
}

_Bool  voidp_operator_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self==right;
    neo_current_frame = fr.prev;
}

_Bool  voidp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return !charp_operator_equals(self,right);
    neo_current_frame = fr.prev;
}

_Bool  string_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool  charp_operator_not_equals(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

_Bool  chara_operator_not_equals(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_operator_not_equals"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)0;
    }
    else if(self==((void*)0)||right==((void*)0)) {
                neo_current_frame = fr.prev;
        return (_Bool)1;
    }
        neo_current_frame = fr.prev;
    return strcmp(self,right)!=0;
    neo_current_frame = fr.prev;
}

char*  charp_operator_add(const char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||right==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5756))), "/home/ab25cq/neo-c/neo-c.h", 5756, 340);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5756, 341));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5756, 342));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5760, 343, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5760, 344);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5765, 345);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5765, 346));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5765, 347));
    return __result_obj__0;
}

char*  string_operator_add(char* self, const char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_add"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(self==((void*)0)||right==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5771))), "/home/ab25cq/neo-c/neo-c.h", 5771, 348);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5771, 349));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5771, 350));
        return __result_obj__0;
    }
    len=strlen(self)+strlen(right);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 5775, 351, "char*"), "/home/ab25cq/neo-c/neo-c.h", 5775, 352);
    strncpy(result,self,len+1);
    strncat(result,right,len+1);
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 5780, 353);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5780, 354));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5780, 355));
    return __result_obj__0;
}

char*  charp_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_mult"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5786))), "/home/ab25cq/neo-c/neo-c.h", 5786, 356);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5786, 357));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5786, 358));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5788, 359, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5788, 360)), "/home/ab25cq/neo-c/neo-c.h", 5788, 361);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5794, 362);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5794, 363);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5794, 364));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5794, 365));
    return __result_obj__0;
}

char*  string_operator_mult(const char* self, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_mult"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  buf  ;
    int i;
    memset(&buf, 0, sizeof(buf));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",5800))), "/home/ab25cq/neo-c/neo-c.h", 5800, 366);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5800, 367));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5800, 368));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    buf=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 5802, 369, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 5802, 370)), "/home/ab25cq/neo-c/neo-c.h", 5802, 371);
    for(i=0    ;i<right;i++){
        buffer_append_str(buf,self);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(buf))), "/home/ab25cq/neo-c/neo-c.h", 5808, 372);
    come_call_finalizer(buffer_finalize, buf, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 5808, 373);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5808, 374));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 5808, 375));
    return __result_obj__0;
}

_Bool  charpa_contained(const char* self[], unsigned long  len  , const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charpa_contained"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  result  ;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    result=(_Bool)0;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return result;
    }
    for(i=0    ;i<len;i++){
        if(strncmp(self[i],str,strlen(self[i]))==0) {
            result=(_Bool)1;
            break;
        }
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned long  shorta_length(short* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "shorta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  inta_length(int* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "inta_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  longa_length(long* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "longa_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  floata_length(float* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "floata_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned long  doublea_length(double* self, unsigned long  len  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "doublea_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return len;
    neo_current_frame = fr.prev;
}

unsigned int bool_get_hash_key(_Bool  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int _Bool_get_hash_key(_Bool  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

unsigned int char_get_hash_key(char value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int short_get_hash_key(short int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int int_get_hash_key(int value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int long_get_hash_key(long value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int size_t_get_hash_key(unsigned long  value  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return value;
    neo_current_frame = fr.prev;
}

unsigned int float_get_hash_key(float value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int double_get_hash_key(double value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (unsigned int)value;
    neo_current_frame = fr.prev;
}

unsigned int charp_get_hash_key(const char* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    memset(&result, 0, sizeof(result));
    if(value==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    const char* p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int string_get_hash_key(char* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int result;
    char* p;
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    if(value==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    result=0;
    p=value;
    while(*p) {
        result+=(*p);
        p++;
    }
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

unsigned int voidp_get_hash_key(void* value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "voidp_get_hash_key"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (int_get_hash_key(((int)value)));
    neo_current_frame = fr.prev;
}

_Bool  bool_clone(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool  _Bool_clone(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

char char_clone(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

short int short_clone(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

int int_clone(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long  int long_clone(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

unsigned long  size_t_clone(unsigned long  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

double double_clone(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

float float_clone(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_clone"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

_Bool  xisalpha(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalpha"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  result  ;
    memset(&result, 0, sizeof(result));
    result=(c>=97&&c<=122)||(c>=65&&c<=90);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool  xisblank(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisblank"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9;
    neo_current_frame = fr.prev;
}

_Bool  xisdigit(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisdigit"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=48&&c<=57);
    neo_current_frame = fr.prev;
}

_Bool  xisspace(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisspace"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return c==32||c==9||c==10||c==13||c==28||c==11;
    neo_current_frame = fr.prev;
}

_Bool  xisalnum(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisalnum"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return xisalpha(c)||xisdigit(c);
    neo_current_frame = fr.prev;
}

_Bool  xisascii(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xisascii"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    _Bool  result  ;
    memset(&result, 0, sizeof(result));
    result=(c>=32&&c<=126);
        neo_current_frame = fr.prev;
    return result;
    neo_current_frame = fr.prev;
}

_Bool  xispunct(char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xispunct"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return (c>=33&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=126);
    neo_current_frame = fr.prev;
}

int string_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int charp_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

int chara_length(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_length"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(str==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return strlen(str);
    neo_current_frame = fr.prev;
}

char*  charp_reverse(const char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_reverse"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    int i;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&i, 0, sizeof(i));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6060))), "/home/ab25cq/neo-c/neo-c.h", 6060, 376);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6060, 377));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6060, 378));
        return __result_obj__0;
    }
    len=strlen(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len+1)), "/home/ab25cq/neo-c/neo-c.h", 6063, 379, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6063, 380);
    for(i=0    ;i<len;i++){
        result[i]=str[len-i-1];
    }
    result[len]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6071, 381);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6071, 382));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6071, 383));
    return __result_obj__0;
}

char*  string_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_operator_load_range_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6077))), "/home/ab25cq/neo-c/neo-c.h", 6077, 384);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6077, 385));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6077, 386));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6090, 387);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6090, 388));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6090, 389));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6090, 390));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6102))), "/home/ab25cq/neo-c/neo-c.h", 6102, 391);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6102, 392));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6102, 393));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6106))), "/home/ab25cq/neo-c/neo-c.h", 6106, 394);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6106, 395));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6106, 396));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6109, 397, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6109, 398);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6114, 399);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6114, 400));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6114, 401));
    return __result_obj__0;
}

char*  charp_operator_load_range_element(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_operator_load_range_element"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6120))), "/home/ab25cq/neo-c/neo-c.h", 6120, 402);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6120, 403));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6120, 404));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6133, 405);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6133, 406));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6133, 407));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6133, 408));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6145))), "/home/ab25cq/neo-c/neo-c.h", 6145, 409);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6145, 410));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6145, 411));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6149))), "/home/ab25cq/neo-c/neo-c.h", 6149, 412);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6149, 413));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6149, 414));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6152, 415, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6152, 416);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6157, 417);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6157, 418));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6157, 419));
    return __result_obj__0;
}

char*  charp_substring(const char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_substring"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    void* __right_value1 = (void*)0;
    char*  result  ;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6163))), "/home/ab25cq/neo-c/neo-c.h", 6163, 420);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6163, 421));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6163, 422));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head>tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value1=charp_reverse(((char* )(__right_value0=charp_substring(str,tail,head)))))), "/home/ab25cq/neo-c/neo-c.h", 6176, 423);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6176, 424));
        (__right_value1 = come_decrement_ref_count(__right_value1, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6176, 425));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6176, 426));
        return __result_obj__0;
    }
    if(head<0) {
        head=0;
    }
    if(tail>=len) {
        tail=len;
    }
    if(head==tail) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6188))), "/home/ab25cq/neo-c/neo-c.h", 6188, 427);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6188, 428));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6188, 429));
        return __result_obj__0;
    }
    if(tail-head+1<1) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6192))), "/home/ab25cq/neo-c/neo-c.h", 6192, 430);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6192, 431));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6192, 432));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(tail-head+1)), "/home/ab25cq/neo-c/neo-c.h", 6195, 433, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6195, 434);
    memcpy(result,str+head,tail-head);
    result[tail-head]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6200, 435);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6200, 436));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6200, 437));
    return __result_obj__0;
}

char*  xsprintf(const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    __builtin_va_list  args  ;
    char* result;
    int len;
    char*  result2  ;
    memset(&result, 0, sizeof(result));
    memset(&len, 0, sizeof(len));
    memset(&result2, 0, sizeof(result2));
    if(msg==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6206))), "/home/ab25cq/neo-c/neo-c.h", 6206, 438);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6206, 439));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6206, 440));
        return __result_obj__0;
    }
    __builtin_va_start(args,msg);
    len=vasprintf(&result,msg,args);
    __builtin_va_end(args);
    if(len<0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6215))), "/home/ab25cq/neo-c/neo-c.h", 6215, 441);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6215, 442));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6215, 443));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result2=(char* )come_increment_ref_count(__builtin_string(result,"/home/ab25cq/neo-c/neo-c.h",6218), "/home/ab25cq/neo-c/neo-c.h", 6218, 444);
    free(result);
        __result_obj__0 = (char* )come_increment_ref_count(result2, "/home/ab25cq/neo-c/neo-c.h", 6222, 445);
    (result2 = come_decrement_ref_count(result2, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6222, 446));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6222, 447));
    return __result_obj__0;
}

char*  charp_delete(char* str, int head, int tail)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_delete"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char* result;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6228))), "/home/ab25cq/neo-c/neo-c.h", 6228, 448);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6228, 449));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6228, 450));
        return __result_obj__0;
    }
    len=strlen(str);
    if(head>=len) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6234))), "/home/ab25cq/neo-c/neo-c.h", 6234, 451);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6234, 452));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6234, 453));
        return __result_obj__0;
    }
    if(strcmp(str,"")==0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6238))), "/home/ab25cq/neo-c/neo-c.h", 6238, 454);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6238, 455));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6238, 456));
        return __result_obj__0;
    }
    if(head<0) {
        head+=len;
    }
    if(tail<0) {
        tail+=len+1;
    }
    if(head<0) {
        head=0;
    }
    if(tail<0) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(str,"/home/ab25cq/neo-c/neo-c.h",6254))), "/home/ab25cq/neo-c/neo-c.h", 6254, 457);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6254, 458));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6254, 459));
        return __result_obj__0;
    }
    if(tail>=len) {
        tail=len;
    }
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len-(tail-head)+1)), "/home/ab25cq/neo-c/neo-c.h", 6261, 460, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6261, 461);
    memcpy(result,str,head);
    memcpy(result+head,str+tail,len-tail);
    result[len-(tail-head)]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6268, 462);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6268, 463));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6268, 464));
    return __result_obj__0;
}

static struct list$1char$ph* list$1char$ph_initialize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_initialize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    self->head=((void*)0);
    self->tail=((void*)0);
    self->len=0;
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(self, "/home/ab25cq/neo-c/neo-c.h", 1543, 466);
    come_call_finalizer(list$1char$ph$p_finalize, self, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 469);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 0, 470);
    return __result_obj__0;
}

static void list$1char$ph$p_finalize(struct list$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list_item$1char$ph* it;
    struct list_item$1char$ph* prev_it;
    memset(&it, 0, sizeof(it));
    memset(&prev_it, 0, sizeof(prev_it));
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return;
    }
    it=self->head;
    while(it!=((void*)0)) {
        prev_it=it;
        it=it->next;
        come_call_finalizer(list_item$1char$ph$p_finalize, prev_it, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 1564, 468);
    }
        neo_current_frame = fr.prev;
}

static void list_item$1char$ph$p_finalize(struct list_item$1char$ph* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list_item$1char$ph$p_finalize"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self!=((void*)0)&&self->item!=((void*)0)) {
        (self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, (void*)0, "list_item$1char$ph$p_finalize", 2, 467));
    }
            neo_current_frame = fr.prev;
}

static struct list$1char$ph* list$1char$ph_push_back(struct list$1char$ph* self, char*  item  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "list$1char$ph_push_back"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    struct list$1char$ph* __result_obj__0;
    void* __right_value0 = (void*)0;
    struct list_item$1char$ph* litem;
    char*  __dec_obj13  ;
    struct list_item$1char$ph* litem_48;
    char*  __dec_obj14  ;
    struct list_item$1char$ph* litem_49;
    char*  __dec_obj15  ;
    memset(&litem, 0, sizeof(litem));
    memset(&litem_48, 0, sizeof(litem_48));
    memset(&litem_49, 0, sizeof(litem_49));
    if(self==((void*)0)) {
                __result_obj__0 = self;
        (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1673, 481));
        neo_current_frame = fr.prev;
        return __result_obj__0;
    }
    if(self->len==0) {
        litem=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1677, 482, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1677, 483);
        litem->prev=((void*)0);
        litem->next=((void*)0);
        __dec_obj13=litem->item,
        litem->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1681, 485);
        __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1681, 484);
        self->tail=litem;
        self->head=litem;
    }
    else if(self->len==1) {
        __right_value0 = (void*)0;
        litem_48=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1687, 486, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1687, 487);
        litem_48->prev=self->head;
        litem_48->next=((void*)0);
        __dec_obj14=litem_48->item,
        litem_48->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1691, 489);
        __dec_obj14 = come_decrement_ref_count(__dec_obj14, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1691, 488);
        self->tail=litem_48;
        self->head->next=litem_48;
    }
    else {
        __right_value0 = (void*)0;
        litem_49=(struct list_item$1char$ph*)come_increment_ref_count(((struct list_item$1char$ph*)(__right_value0=(struct list_item$1char$ph*)come_calloc_v2(1, sizeof(struct list_item$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 1697, 490, "struct list_item$1char$ph*"))), "/home/ab25cq/neo-c/neo-c.h", 1697, 491);
        litem_49->prev=self->tail;
        litem_49->next=((void*)0);
        __dec_obj15=litem_49->item,
        litem_49->item=(char* )come_increment_ref_count(item, "/home/ab25cq/neo-c/neo-c.h", 1701, 493);
        __dec_obj15 = come_decrement_ref_count(__dec_obj15, (void*)0, (void*)0, 0,0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1701, 492);
        self->tail->next=litem_49;
        self->tail=litem_49;
    }
    self->len++;
        __result_obj__0 = self;
    (item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 1709, 494));
    neo_current_frame = fr.prev;
    return __result_obj__0;
}

struct list$1char$ph* charp_split_char(char* self, char c)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_split_char"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    void* __right_value1 = (void*)0;
    struct list$1char$ph* __result_obj__0;
    struct list$1char$ph* result;
    struct buffer*  str  ;
    int self_len;
    int i;
    memset(&result, 0, sizeof(result));
    memset(&str, 0, sizeof(str));
    memset(&self_len, 0, sizeof(self_len));
    memset(&i, 0, sizeof(i));
    if(self==((void*)0)) {
                __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(((struct list$1char$ph*)(__right_value1=list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6274, 465, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6274, 471)))), "/home/ab25cq/neo-c/neo-c.h", 6274, 472);
        come_call_finalizer(list$1char$ph$p_finalize, __right_value1, (void*)0, (void*)0, 0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6274, 473);
        neo_current_frame = fr.prev;
        come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6274, 474);
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    result=(struct list$1char$ph*)come_increment_ref_count(list$1char$ph_initialize((struct list$1char$ph*)come_increment_ref_count((struct list$1char$ph*)come_calloc_v2(1, sizeof(struct list$1char$ph)*(1), "/home/ab25cq/neo-c/neo-c.h", 6277, 475, "struct list$1char$ph*"), "/home/ab25cq/neo-c/neo-c.h", 6277, 476)), "/home/ab25cq/neo-c/neo-c.h", 6277, 477);
    __right_value0 = (void*)0;
    __right_value1 = (void*)0;
    str=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6279, 478, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6279, 479)), "/home/ab25cq/neo-c/neo-c.h", 6279, 480);
    self_len=charp_length(self);
    for(i=0    ;i<self_len;i++){
        if(self[i]==c) {
            __right_value0 = (void*)0;
            list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6284), "/home/ab25cq/neo-c/neo-c.h", 6284, 495));
            buffer_reset(str);
        }
        else {
            buffer_append_char(str,self[i]);
        }
    }
    if(buffer_length(str)!=0) {
        __right_value0 = (void*)0;
        list$1char$ph_push_back(result,(char* )come_increment_ref_count(__builtin_string(str->buf,"/home/ab25cq/neo-c/neo-c.h",6292), "/home/ab25cq/neo-c/neo-c.h", 6292, 496));
    }
        __result_obj__0 = (struct list$1char$ph*)come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6295, 497);
    come_call_finalizer(list$1char$ph$p_finalize, result, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6295, 498);
    come_call_finalizer(buffer_finalize, str, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6295, 499);
    neo_current_frame = fr.prev;
    come_call_finalizer(list$1char$ph$p_finalize, __result_obj__0, (void*)0, (void*)0, 0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6295, 500);
    return __result_obj__0;
}

char*  charp_xsprintf(char* self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6300, 501);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6300, 502));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6300, 503));
    return __result_obj__0;
}

char*  int_xsprintf(int self, const char* msg, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_xsprintf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf(msg,self))), "/home/ab25cq/neo-c/neo-c.h", 6305, 504);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6305, 505));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6305, 506));
    return __result_obj__0;
}

char*  charp_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    int len;
    char*  result  ;
    int n;
    int i;
    char c;
    memset(&len, 0, sizeof(len));
    memset(&result, 0, sizeof(result));
    memset(&n, 0, sizeof(n));
    memset(&i, 0, sizeof(i));
    memset(&c, 0, sizeof(c));
    if(str==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6311))), "/home/ab25cq/neo-c/neo-c.h", 6311, 507);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6311, 508));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6311, 509));
        return __result_obj__0;
    }
    len=charp_length(str);
    __right_value0 = (void*)0;
    result=(char*)come_increment_ref_count((char*)come_calloc_v2(1, sizeof(char)*(1*(len*2+1)), "/home/ab25cq/neo-c/neo-c.h", 6314, 510, "char*"), "/home/ab25cq/neo-c/neo-c.h", 6314, 511);
    n=0;
    for(i=0    ;i<len;i++){
        c=str[i];
        if((c>=0&&c<32)||c==127) {
            result[n++]=94;
            result[n++]=c+65-1;
        }
        else {
            result[n++]=c;
        }
    }
    result[n]=0;
        __result_obj__0 = (char* )come_increment_ref_count(result, "/home/ab25cq/neo-c/neo-c.h", 6333, 512);
    (result = come_decrement_ref_count(result, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6333, 513));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6333, 514));
    return __result_obj__0;
}

char*  chara_printable(char* str)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "chara_printable"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_printable(str))), "/home/ab25cq/neo-c/neo-c.h", 6338, 515);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6338, 516));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6338, 517));
    return __result_obj__0;
}

char*  charp_sub_plain(char* self, char* str, char* replace)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_sub_plain"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    void* __right_value1 = (void*)0;
    struct buffer*  result  ;
    char* p;
    char* p2;
    memset(&result, 0, sizeof(result));
    memset(&p, 0, sizeof(p));
    memset(&p2, 0, sizeof(p2));
    if(self==((void*)0)||str==((void*)0)||replace==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6344))), "/home/ab25cq/neo-c/neo-c.h", 6344, 518);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6344, 519));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6344, 520));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    result=(struct buffer* )come_increment_ref_count(buffer_initialize((struct buffer* )come_increment_ref_count((struct buffer *)come_calloc_v2(1, sizeof(struct buffer )*(1), "/home/ab25cq/neo-c/neo-c.h", 6347, 521, "struct buffer* "), "/home/ab25cq/neo-c/neo-c.h", 6347, 522)), "/home/ab25cq/neo-c/neo-c.h", 6347, 523);
    p=self;
    while((_Bool)1) {
        p2=strstr(p,str);
        if(p2==((void*)0)) {
            p2=p;
            while(*p2) {
                p2++;
            }
            buffer_append(result,p,p2-p);
            break;
        }
        buffer_append(result,p,p2-p);
        buffer_append_str(result,replace);
        p=p2+strlen(str);
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=buffer_to_string(result))), "/home/ab25cq/neo-c/neo-c.h", 6369, 524);
    come_call_finalizer(buffer_finalize, result, (void*)0, (void*)0, 0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h}", 6369, 525);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6369, 526));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6369, 527));
    return __result_obj__0;
}

char*  xbasename(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xbasename"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6378))), "/home/ab25cq/neo-c/neo-c.h", 6378, 528);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6378, 529));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6378, 530));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==47) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6392))), "/home/ab25cq/neo-c/neo-c.h", 6392, 531);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6392, 532));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6392, 533));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6395))), "/home/ab25cq/neo-c/neo-c.h", 6395, 534);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6395, 535));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6395, 536));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6398))), "/home/ab25cq/neo-c/neo-c.h", 6398, 537);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6398, 538));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6398, 539));
    return __result_obj__0;
}

char*  xnoextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xnoextname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char*  path2  ;
    char* p;
    memset(&path2, 0, sizeof(path2));
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6404))), "/home/ab25cq/neo-c/neo-c.h", 6404, 540);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6404, 541));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6404, 542));
        return __result_obj__0;
    }
    __right_value0 = (void*)0;
    path2=(char* )come_increment_ref_count(xbasename(path), "/home/ab25cq/neo-c/neo-c.h", 6406, 543);
    p=path2+strlen(path2);
    while(p>=path2) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path2) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path2,"/home/ab25cq/neo-c/neo-c.h",6420))), "/home/ab25cq/neo-c/neo-c.h", 6420, 544);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6420, 545));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6420, 546));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6420, 547));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=charp_substring(path2,0,p-path2))), "/home/ab25cq/neo-c/neo-c.h", 6423, 548);
        (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6423, 549));
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6423, 550));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6423, 551));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6426))), "/home/ab25cq/neo-c/neo-c.h", 6426, 552);
    (path2 = come_decrement_ref_count(path2, (void*)0, (void*)0, 0, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6426, 553));
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6426, 554));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6426, 555));
    return __result_obj__0;
}

char*  xextname(char* path)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "xextname"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* p;
    memset(&p, 0, sizeof(p));
    if(path==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6432))), "/home/ab25cq/neo-c/neo-c.h", 6432, 556);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6432, 557));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6432, 558));
        return __result_obj__0;
    }
    p=path+strlen(path);
    while(p>=path) {
        if(*p==46) {
            break;
        }
        else {
            p--;
        }
    }
    if(p<path) {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(path,"/home/ab25cq/neo-c/neo-c.h",6446))), "/home/ab25cq/neo-c/neo-c.h", 6446, 559);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6446, 560));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6446, 561));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(p+1,"/home/ab25cq/neo-c/neo-c.h",6449))), "/home/ab25cq/neo-c/neo-c.h", 6449, 562);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6449, 563));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6449, 564));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6452))), "/home/ab25cq/neo-c/neo-c.h", 6452, 565);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6452, 566));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6452, 567));
    return __result_obj__0;
}

char*  bool_to_string(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","/home/ab25cq/neo-c/neo-c.h",6461))), "/home/ab25cq/neo-c/neo-c.h", 6461, 568);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6461, 569));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6461, 570));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","/home/ab25cq/neo-c/neo-c.h",6464))), "/home/ab25cq/neo-c/neo-c.h", 6464, 571);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6464, 572));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6464, 573));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  _Bool_to_string(_Bool  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("true","/home/ab25cq/neo-c/neo-c.h",6471))), "/home/ab25cq/neo-c/neo-c.h", 6471, 574);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6471, 575));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6471, 576));
        return __result_obj__0;
    }
    else {
                __right_value0 = (void*)0;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("false","/home/ab25cq/neo-c/neo-c.h",6474))), "/home/ab25cq/neo-c/neo-c.h", 6474, 577);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6474, 578));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6474, 579));
        return __result_obj__0;
    }
    neo_current_frame = fr.prev;
}

char*  char_to_string(char self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%c",self))), "/home/ab25cq/neo-c/neo-c.h", 6480, 580);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6480, 581));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6480, 582));
    return __result_obj__0;
}

char*  short_to_string(short self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6485, 583);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6485, 584));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6485, 585));
    return __result_obj__0;
}

char*  int_to_string(int self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%d",self))), "/home/ab25cq/neo-c/neo-c.h", 6490, 586);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6490, 587));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6490, 588));
    return __result_obj__0;
}

char*  long_to_string(long self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6495, 589);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6495, 590));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6495, 591));
    return __result_obj__0;
}

char*  size_t_to_string(unsigned long  self  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%ld",self))), "/home/ab25cq/neo-c/neo-c.h", 6500, 592);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6500, 593));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6500, 594));
    return __result_obj__0;
}

char*  float_to_string(float self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%f",self))), "/home/ab25cq/neo-c/neo-c.h", 6505, 595);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6505, 596));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6505, 597));
    return __result_obj__0;
}

char*  double_to_string(double self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
        __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=xsprintf("%lf",self))), "/home/ab25cq/neo-c/neo-c.h", 6510, 598);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6510, 599));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6510, 600));
    return __result_obj__0;
}

char*  string_to_string(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6516))), "/home/ab25cq/neo-c/neo-c.h", 6516, 601);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6516, 602));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6516, 603));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6518))), "/home/ab25cq/neo-c/neo-c.h", 6518, 604);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6518, 605));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6518, 606));
    return __result_obj__0;
}

char*  charp_to_string(const char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_to_string"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6524))), "/home/ab25cq/neo-c/neo-c.h", 6524, 607);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6524, 608));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6524, 609));
        return __result_obj__0;
    }
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6526))), "/home/ab25cq/neo-c/neo-c.h", 6526, 610);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6526, 611));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6526, 612));
    return __result_obj__0;
}

int bool_compare(_Bool  left  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "bool_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!left&&right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int _Bool_compare(_Bool  left  , _Bool  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "_Bool_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(!left&&right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left&&right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(!left&&!right) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int char_compare(char left, char right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "char_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int short_compare(short left, short right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "short_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int int_compare(int left, int right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int long_compare(long left, long right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int size_t_compare(unsigned long  left  , unsigned long  right  )
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "size_t_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int float_compare(float left, float right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "float_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int double_compare(double left, double right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "double_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left<right) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(left>right) {
                neo_current_frame = fr.prev;
        return 1;
    }
    else {
                neo_current_frame = fr.prev;
        return 0;
    }
        neo_current_frame = fr.prev;
    return 0;
    neo_current_frame = fr.prev;
}

int string_compare(char* left, char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

int charp_compare(char* left, char* right)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_compare"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(left==((void*)0)&&right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 0;
    }
    else if(left==((void*)0)) {
                neo_current_frame = fr.prev;
        return -1;
    }
    else if(right==((void*)0)) {
                neo_current_frame = fr.prev;
        return 1;
    }
        neo_current_frame = fr.prev;
    return strcmp(left,right);
    neo_current_frame = fr.prev;
}

char*  charp_puts(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_puts"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6709))), "/home/ab25cq/neo-c/neo-c.h", 6709, 613);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6709, 614));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6709, 615));
        return __result_obj__0;
    }
    puts(self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6713))), "/home/ab25cq/neo-c/neo-c.h", 6713, 616);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6713, 617));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6713, 618));
    return __result_obj__0;
}

char*  charp_print(char* self)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_print"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6719))), "/home/ab25cq/neo-c/neo-c.h", 6719, 619);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6719, 620));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6719, 621));
        return __result_obj__0;
    }
    printf("%s",self);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6723))), "/home/ab25cq/neo-c/neo-c.h", 6723, 622);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6723, 623));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6723, 624));
    return __result_obj__0;
}

char*  charp_printf(char* self, ...)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    void* __right_value0 = (void*)0;
    char*  __result_obj__0  ;
    char* msg2;
    __builtin_va_list  args  ;
    int len;
    memset(&msg2, 0, sizeof(msg2));
    memset(&len, 0, sizeof(len));
    if(self==((void*)0)) {
                __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string("","/home/ab25cq/neo-c/neo-c.h",6730))), "/home/ab25cq/neo-c/neo-c.h", 6730, 625);
        (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6730, 626));
        neo_current_frame = fr.prev;
        (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6730, 627));
        return __result_obj__0;
    }
    char msg2_50[128];
    memset(&msg2_50, 0, sizeof(msg2_50));
    __builtin_va_start(args,self);
    len=snprintf(msg2_50,128,self,args);
    __builtin_va_end(args);
    printf("%s",msg2_50);
    free(msg2_50);
        __right_value0 = (void*)0;
    __result_obj__0 = (char* )come_increment_ref_count(((char* )(__right_value0=__builtin_string(self,"/home/ab25cq/neo-c/neo-c.h",6745))), "/home/ab25cq/neo-c/neo-c.h", 6745, 628);
    (__right_value0 = come_decrement_ref_count(__right_value0, (void*)0, (void*)0, 1, 0, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6745, 629));
    neo_current_frame = fr.prev;
    (__result_obj__0 = come_decrement_ref_count(__result_obj__0, (void*)0, (void*)0, 0, 1, (void*)0, "/home/ab25cq/neo-c/neo-c.h", 6745, 630));
    return __result_obj__0;
}

int int_printf(int self, char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

long long_printf(long self, char* msg)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "long_printf"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    if(self==((void*)0)) {
                neo_current_frame = fr.prev;
        return self;
    }
    printf(msg,self);
        neo_current_frame = fr.prev;
    return self;
    neo_current_frame = fr.prev;
}

void int_times(int self, void* parent, void (*block)(void*,int))
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "int_times"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    int i;
    memset(&i, 0, sizeof(i));
    for(i=0    ;i<self;i++){
        block(parent,i);
    }
    neo_current_frame = fr.prev;
}

int string_index(char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "string_index"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
        neo_current_frame = fr.prev;
    return charp_index(str,search_str,default_value);
    neo_current_frame = fr.prev;
}

int charp_index(const char* str, const char* search_str, int default_value)
{
    struct neo_frame fr; fr.prev = neo_current_frame; fr.fun_name = "charp_index"; fr.frame_id = ++neo_frame_id; neo_current_frame = &fr;
    char* head;
    memset(&head, 0, sizeof(head));
    if(str==((void*)0)||search_str==((void*)0)) {
                neo_current_frame = fr.prev;
        return default_value;
    }
    head=strstr(str,search_str);
    if(head==((void*)0)) {
                neo_current_frame = fr.prev;
        return default_value;
    }
        neo_current_frame = fr.prev;
    return head-str;
    neo_current_frame = fr.prev;
}

