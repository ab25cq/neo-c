/// c_include definition ///
/// typedef definition ///
typedef char int8_t;

typedef short int int16_t;

typedef int int32_t;

typedef long  int int64_t;

typedef unsigned char uint8_t;

typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;

typedef unsigned long  int uint64_t;

typedef char int_least8_t;

typedef short int int_least16_t;

typedef int int_least32_t;

typedef long  int int_least64_t;

typedef unsigned char uint_least8_t;

typedef unsigned short int uint_least16_t;

typedef unsigned int uint_least32_t;

typedef unsigned long  int uint_least64_t;

typedef int int_fast8_t;

typedef int int_fast16_t;

typedef int int_fast32_t;

typedef long  int int_fast64_t;

typedef unsigned int uint_fast8_t;

typedef unsigned int uint_fast16_t;

typedef unsigned int uint_fast32_t;

typedef unsigned long  int uint_fast64_t;

typedef long  int intptr_t;

typedef unsigned long  int uintptr_t;

typedef long  int intmax_t;

typedef unsigned long  int uintmax_t;

typedef long ptrdiff_t;

typedef unsigned long  int size_t;

typedef int wchar_t;

typedef struct anonymous_typeX1 max_align_t;

typedef __builtin_va_list  __gnuc_va_list  ;

typedef __builtin_va_list  va_list  ;

typedef int  ssize_t  ;

typedef long time_t;

typedef long suseconds_t;

typedef struct __minux_FILE  FILE  ;

typedef struct anonymous_typeX2 glob_t;

typedef int pid_t;

typedef struct minux_window  WINDOW  ;

typedef struct anonymous_typeX3 Elf64_Sym;

typedef unsigned long  int  pte_t  ;

typedef unsigned long  int  pde_t  ;

typedef unsigned long  int*  pagetable_t  ;

/// previous struct definition ///
struct __minux_FILE;

struct file;

struct proc;

/// struct definition ///
struct anonymous_typeX1
{
    long long __attribute__((__aligned__(__alignof__(long long)))) __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
    long  double __attribute__((__aligned__(__alignof__(long double)))) __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
};

struct superblock
{
    unsigned int  size  ;
    unsigned int  nblocks  ;
    unsigned int  ninodes  ;
    unsigned int  nlog  ;
    unsigned int  logstart  ;
    unsigned int  inodestart  ;
    unsigned int  bmapstart  ;
};

struct dinode
{
    unsigned short int  type  ;
    unsigned short int  major  ;
    unsigned short int  minor  ;
    unsigned short int  nlink  ;
    unsigned int  size  ;
    unsigned int  mode  ;
    unsigned short int  uid  ;
    unsigned short int  gid  ;
    unsigned int  atime  ;
    unsigned int  mtime  ;
    unsigned int  ctime  ;
    unsigned int  addrs[12+2]  ;
};

struct dirent
{
    unsigned short int  inum  ;
    char name[14];
};

struct stat
{
    unsigned short int  type  ;
    unsigned short int  nlink  ;
    unsigned int  size  ;
    unsigned int  inum  ;
    unsigned int  mode  ;
    unsigned short int  uid  ;
    unsigned short int  gid  ;
    unsigned int  atime  ;
    unsigned int  mtime  ;
    unsigned int  ctime  ;
};

enum { SEEK_SET 
,SEEK_END 
,SEEK_CUR 
};

struct timeval
{
    long  tv_sec  ;
    long  tv_usec  ;
};

struct tm
{
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

struct __minux_FILE
{
    int fd;
    int flags;
    long pos;
    int eof;
    int err;
    int have_push;
    unsigned char push_ch;
    int is_mem;
    char** ms_bufp;
    unsigned long  int*  ms_sizep  ;
    char* ms_buf;
    unsigned long  int  ms_cap  ;
    unsigned long  int  ms_len  ;
};

struct anonymous_typeX2
{
    unsigned long  int  gl_pathc  ;
    char** gl_pathv;
};

struct minux_window
{
    int rows;
    int cols;
    int beg_y;
    int beg_x;
    int cur_y;
    int cur_x;
    struct minux_window*  parent  ;
    int is_subwin;
    int is_static;
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

struct elfhdr
{
    unsigned int  magic  ;
    unsigned char  elf[12]  ;
    unsigned short int  type  ;
    unsigned short int  machine  ;
    unsigned int  version  ;
    unsigned long  int  entry  ;
    unsigned long  int  phoff  ;
    unsigned long  int  shoff  ;
    unsigned int  flags  ;
    unsigned short int  ehsize  ;
    unsigned short int  phentsize  ;
    unsigned short int  phnum  ;
    unsigned short int  shentsize  ;
    unsigned short int  shnum  ;
    unsigned short int  shstrndx  ;
};

struct proghdr
{
    unsigned int  type  ;
    unsigned int  flags  ;
    unsigned long  int  off  ;
    unsigned long  int  vaddr  ;
    unsigned long  int  paddr  ;
    unsigned long  int  filesz  ;
    unsigned long  int  memsz  ;
    unsigned long  int  align  ;
};

struct elfshdr
{
    unsigned int  name  ;
    unsigned int  type  ;
    unsigned long  int  flags  ;
    unsigned long  int  addr  ;
    unsigned long  int  offset  ;
    unsigned long  int  size  ;
    unsigned int  link  ;
    unsigned int  info  ;
    unsigned long  int  addralign  ;
    unsigned long  int  entsize  ;
};

struct elfsym
{
    unsigned int  name  ;
    unsigned char  info  ;
    unsigned char  other  ;
    unsigned short int  shndx  ;
    unsigned long  int  value  ;
    unsigned long  int  size  ;
};

struct anonymous_typeX3
{
    unsigned int  st_name  ;
    unsigned char  st_info  ;
    unsigned char  st_other  ;
    unsigned short int  st_shndx  ;
    unsigned long  int  st_value  ;
    unsigned long  int  st_size  ;
};

struct context_t
{
    unsigned long  int  ra  ;
    unsigned long  int  sp  ;
    unsigned long  int  gp  ;
    unsigned long  int  tp  ;
    unsigned long  int  t0  ;
    unsigned long  int  t1  ;
    unsigned long  int  t2  ;
    unsigned long  int  t3  ;
    unsigned long  int  t4  ;
    unsigned long  int  t5  ;
    unsigned long  int  t6  ;
    unsigned long  int  a0  ;
    unsigned long  int  a1  ;
    unsigned long  int  a2  ;
    unsigned long  int  a3  ;
    unsigned long  int  a4  ;
    unsigned long  int  a5  ;
    unsigned long  int  a6  ;
    unsigned long  int  a7  ;
    unsigned long  int  s0  ;
    unsigned long  int  s1  ;
    unsigned long  int  s2  ;
    unsigned long  int  s3  ;
    unsigned long  int  s4  ;
    unsigned long  int  s5  ;
    unsigned long  int  s6  ;
    unsigned long  int  s7  ;
    unsigned long  int  s8  ;
    unsigned long  int  s9  ;
    unsigned long  int  s10  ;
    unsigned long  int  s11  ;
    unsigned long  int  mepc  ;
};

struct sKernelState
{
    struct context_t  gYieldContext  ;
    struct context_t  gYieldReturnContext  ;
    char* gYieldStack;
    unsigned long  int  gYieldUserSatp  ;
    unsigned long  int  gYieldUserSP  ;
    unsigned long  int  gYieldUserActiveProc  ;
};

struct process_pages
{
    char** process_kalloc_address;
    int num_process_kalloc_address;
    void* process_kalloc_address_list;
};

struct proc
{
    struct context_t  trapframe  ;
    struct context_t  context  ;
    struct proc*  parent  ;
    int parent_pid;
    char* stack_top;
    unsigned long  int  vaddr  ;
    unsigned long  int  memsz  ;
    unsigned long  int  sz  ;
    int zombie;
    unsigned long  int*  pagetable  ;
    char* program;
    int program_size;
    int xstatus;
    struct file*  file_table[32]  ;
    struct process_pages**  process_pages  ;
    int num_process_pages;
    void* process_pages_list;
    int debug_;
    int deleted;
    struct proc*  next  ;
    char cwd[128];
    unsigned short int umask;
    unsigned short int  uid  ;
    unsigned short int  gid  ;
    unsigned short int  pgrp  ;
    unsigned short int  supp_gids[8]  ;
    int nsupp;
    char username[32];
};

struct spipe
{
    char data[512];
    unsigned int  nread  ;
    unsigned int  nwrite  ;
    int read_open;
    int write_open;
    int nreader;
    int nwriter;
    int used;
    struct file*  linked_file[32]  ;
    int num_linked_file;
    void* linked_file_list;
    struct spipe*  free_next  ;
};

enum  anonymous_typeY4 { FK_STDIN 
,FK_STDOUT 
,FK_STDERR 
,FK_FILE 
,FK_PIPE 
,FK_TTY 
};

struct file
{
    enum anonymous_typeY4 kind;
    unsigned int  inum  ;
    struct dinode  din  ;
    unsigned int  off  ;
    int used;
    struct spipe*  pipe  ;
    int pipe_used;
    int read_pipe;
    int write_pipe;
    int oflags;
    struct file*  free_next  ;
    struct proc*  owner_processes[64]  ;
    int num_owner_process;
    void* owner_process_list;
};

struct virtq_desc
{
    unsigned long  int  addr  ;
    unsigned int  len  ;
    unsigned short int  flags  ;
    unsigned short int  next  ;
} __attribute__((packed));

struct virtq_avail
{
    unsigned short int  flags  ;
    unsigned short int  idx  ;
    unsigned short int  ring[]  ;
} __attribute__((packed, aligned(2)));

struct virtq_used_elem
{
    unsigned int  id  ;
    unsigned int  len  ;
} __attribute__((packed));

struct virtq_used
{
    unsigned short int  flags  ;
    unsigned short int  idx  ;
    struct virtq_used_elem  ring[]  ;
} __attribute__((packed, aligned(4)));

struct virtio_blk_req
{
    unsigned int  type  ;
    unsigned int  reserved  ;
    unsigned long  int  sector  ;
} __attribute__((packed));

struct bcache_entry
{
    unsigned int  blkno  ;
    unsigned char  data[512]  ;
    unsigned int  refcnt  ;
    unsigned int  dirty  ;
    unsigned int  last_use  ;
};

/// variable definition ///
extern struct __minux_FILE*  stdin  ;
extern struct __minux_FILE*  stdout  ;
extern struct __minux_FILE*  stderr  ;
extern int errno;
extern unsigned long  int  linenumber  ;
extern struct minux_window*  stdscr  ;
extern unsigned long  int*  kernel_pagetable  ;
extern struct proc*  gProc[64]  ;
extern char TRAPFRAME[];
extern char TRAPFRAME2[];
extern char TRAMPOLINE[];
extern char COMMON[];
extern unsigned long  int  kernel_sp  __attribute__((section(".common")));
extern unsigned long  int  user_sp  __attribute__((section(".common")));
extern unsigned long  int  kernel_satp  __attribute__((section(".common")));
extern unsigned long  int  user_satp  __attribute__((section(".common")));
extern int gNumProc;
static unsigned long  int  vbase  =0;
static unsigned int  Q  =0;
static struct virtq_desc*  desc  ;
static struct virtq_avail*  avail  ;
static struct virtq_used*  used  ;
static unsigned char*  vq_area  ;
static unsigned short int  aidx  =0;
static volatile unsigned char  status_byte  __attribute__((aligned(4)));
static volatile unsigned char  dma_buf[512]  __attribute__((aligned(512)));
static struct virtio_blk_req  req  ;
static struct bcache_entry  bcache[32]  ;
static unsigned int  bcache_time  =0;
static unsigned int  bcache_hits  =0;
static unsigned int  bcache_misses  =0;
static struct superblock  sb  ;
static unsigned char  block_buf[512]  ;
extern unsigned int  g_time_offset  ;
struct spipe  gPipes[32]  ;
struct file  gFiles[32]  ;
struct spipe*  gFreePipes  ;
struct file*  gFreeFiles  ;
extern int gActiveProc;
// source head

// header function
int fflush(struct __minux_FILE*  fp  );
struct __minux_FILE*  open_memstream(char** bufp, unsigned long  int*  sizep  );
int fscanf(struct __minux_FILE*  fp  , const char* fmt, ...);
int fprintf(struct __minux_FILE*  fp  , const char* fmt, ...);
int vfprintf(struct __minux_FILE*  fp  , const char* fmt, __builtin_va_list  ap  );
int fputs(const char* s, struct __minux_FILE*  fp  );
unsigned long  int  fwrite(const void* ptr, unsigned long  int  size  , unsigned long  int  nmemb  , struct __minux_FILE*  fp  );
unsigned long  int  fread(void* ptr, unsigned long  int  size  , unsigned long  int  nmemb  , struct __minux_FILE*  fp  );
char* fgets(char* s, int size, struct __minux_FILE*  fp  );
int ungetc(int c, struct __minux_FILE*  fp  );
int fgetc(struct __minux_FILE*  fp  );
int fseek(struct __minux_FILE*  fp  , long offset, int whence);
long ftell(struct __minux_FILE*  fp  );
unsigned int sleep(unsigned int seconds);
void rewind(struct __minux_FILE*  fp  );
int fclose(struct __minux_FILE*  fp  );
struct __minux_FILE*  fopen(const char* path, const char* mode);
struct __minux_FILE*  tmpfile();
int vsnprintf(char* out, unsigned long  int out_size, const char* fmt, __builtin_va_list  ap  );
int isalnum(int c);
int isdigit(int c);
int isalpha(int c);
int isspace(int c);
int isprint(int c);
void globfree(struct anonymous_typeX2*  pglob  );
int glob(const char* pattern, int flags, void* errfunc, struct anonymous_typeX2*  pglob  );
int mkstemp(char* template);
char* strndup(const char* s, unsigned long  int  n  );
char* strrchr(const char* s, int c);
void* realloc(void* ptr, unsigned long  int  size  );
int fputc(int c, struct __minux_FILE*  fp  );
double strtod(const char* nptr, char** endptr);
unsigned long  int strtoul(const char* nptr, char** endptr, int base);
long strtol(const char* nptr, char** endptr, int base);
long long strtoll(const char* nptr, char** endptr, int base);
long atol(const char* nptr);
int atoi(const char* nptr);
int strncasecmp(const char* a, const char* b, unsigned long  int  n  );
long  time(long*  tloc  );
struct tm*  localtime(const long*  timep  );
char* ctime_r(const long*  timep  , char* buf);
char* strerror(int errnum);
int ispunct(int c);
int isxdigit(int c);
char* readline(const char* prompt);
struct minux_window*  initscr();
int endwin();
int refresh();
int wrefresh(struct minux_window*  win  );
int wmove(struct minux_window*  win  , int y, int x);
int mvwprintf(struct minux_window*  win  , int y, int x, const char* fmt, ...);
int mvprintw(int y, int x, const char* fmt, ...);
struct minux_window*  newwin(int nlines, int ncols, int begin_y, int begin_x);
struct minux_window*  subwin(struct minux_window*  win  , int nlines, int ncols, int begin_y, int begin_x);
int delwin(struct minux_window*  win  );
struct arg_lit*  arg_litn(const char* shortopts, const char* longopts, int mincount, int maxcount, const char* glossary);
struct arg_file*  arg_filen(const char* shortopts, const char* longopts, const char* datatype, int mincount, int maxcount, const char* glossary);
struct arg_end*  arg_end(int maxerrors);
int arg_parse(int argc, char** argv, void** argtable);
void arg_print_syntax(struct __minux_FILE*  fp  , void** argtable, const char* suffix);
void arg_print_glossary(struct __minux_FILE*  fp  , void** argtable, const char* format);
void arg_print_errors(struct __minux_FILE*  fp  , struct arg_end*  end  , const char* progname);
void arg_freetable(void** argtable, unsigned long  int  n  );
int sscanf(const char* str, const char* fmt, ...);
char* realpath(const char* path, char* resolved_path);
char* dirname(const char* path);
int fileno(struct __minux_FILE*  fp  );
int system(const char* command);
char* getenv(const char* str);
void* memchr(const void* s, int c, unsigned long  int  n  );
int vprintf(const char* fmt, __builtin_va_list  ap  );
char* strcpy(char* dest, const char* src);
char* strcat(char* dest, const char* src);
void perror(char* msg);
int sprintf(char* out, const char* fmt, ...);
void neoc_file_owner_clear(struct file*  f  );
void neoc_file_owner_add(struct file*  f  , struct proc*  owner  );
void neoc_file_owner_remove(struct file*  f  , struct proc*  owner  );
void neoc_pipe_linked_file_clear(struct spipe*  p  );
void neoc_pipe_linked_file_add(struct spipe*  p  , struct file*  f  );
void neoc_pipe_linked_file_remove(struct spipe*  p  , struct file*  f  );
void neoc_pipe_linked_file_clear_pipe_refs(struct spipe*  p  );
void neoc_proc_process_pages_clear(struct proc*  p  );
void neoc_proc_process_pages_add(struct proc*  p  , struct process_pages*  page  );
struct process_pages*  neoc_proc_process_pages_get(struct proc*  p  , int index);
struct process_pages*  neoc_proc_process_pages_last(struct proc*  p  );
void neoc_process_page_kalloc_clear(struct process_pages*  page  );
void neoc_process_page_kalloc_add(struct process_pages*  page  , char* addr);
char* neoc_process_page_kalloc_get(struct process_pages*  page  , int index);
struct file**  get_current_file_table();
void neoc_proc_list_init();
void neoc_proc_list_add(struct proc*  p  );
void neoc_proc_list_remove(struct proc*  p  );
void neoc_proc_list_replace(struct proc*  oldp  , struct proc*  newp  );
struct proc*  neoc_proc_find_zombie_in_pgrp(unsigned short int  pgrp  );
_Bool neoc_proc_is_file_open(unsigned int  inum  );
void neoc_kernel_state_init();
void neoc_kernel_state_clear();
void neoc_kernel_state_add(struct sKernelState*  state  );
struct sKernelState*  neoc_kernel_state_find(int active_proc);
struct sKernelState*  neoc_kernel_state_take(int active_proc);
struct sKernelState*  neoc_kernel_state_take_first();
int proc_find_pid(struct proc*  p  );
void* malloc(unsigned long  int  size  );
void free(void* ptr);
void* calloc(unsigned long  int  nmemb  , unsigned long  int  size  );
char* strdup(const char* s);
char* strstr(const char* haystack, const char* needle);
int memcmp(const void* v1, const void* v2, unsigned int n);
void* memmove(void* dst, const void* src, unsigned int n);
char* strchr(const char* s, int c);
void exit(int n);
char* itoa(char* buf, unsigned long  int val_, int base, int is_signed);
int vasprintf(char** out, const char* fmt, __builtin_va_list  ap  );
int snprintf(char* out, unsigned long  int out_size, const char* fmt, ...);
void printint(int val_, int base, int sign);
void printlong(unsigned long  int val_, int base, int sign);
void printlonglong(unsigned long  long val_, int base, int sign);
void* sbrk(long  incr  );
int Sys_execve();
int Sys_execved();
int Sys_getpid();
int Sys_tcsetpgrp();
int Sys_fstat();
int Sys_lseek();
int Sys_execv();
int Sys_fork();
int Sys_closedir();
int Sys_readdir();
int Sys_realpath();
int Sys_setgid();
int Sys_setuid();
int Sys_getuid();
int Sys_getgid();
int Sys_gettimeofday();
int Sys_umask();
int Sys_utimes();
int Sys_settimeofday();
int Sys_chmod();
int Sys_lstat();
int Sys_readlink();
int Sys_write();
int Sys_exit();
int Sys_wait();
int Sys_isatty();
int Sys_open();
int Sys_opendir();
int Sys_getcwd();
int Sys_chdir();
int Sys_mkdir();
int Sys_rmdir();
int Sys_unlink();
int Sys_rename();
int Sys_link();
int Sys_symlink();
int Sys_stat();
int Sys_chown();
int Sys_read();
int Sys_dup2();
int Sys_pipe();
int Sys_brk();
int Sys_sleep();
int uvm_alloc(struct proc*  p  , unsigned long  int*  pagetable  , unsigned long  int  old_sz  , unsigned long  int  new_sz  );
void uvm_dealloc(unsigned long  int*  pagetable  , unsigned long  int  old_sz  , unsigned long  int  new_sz  );
int copyin(unsigned long  int*  pagetable  , char* dst, unsigned long  int  srcva  , unsigned long  int  len  );
int copyinstr(unsigned long  int*  pagetable  , char* dst, unsigned long  int  srcva  , unsigned long  int  max  );
int copyout(unsigned long  int*  pagetable  , unsigned long  int  dstva  , void* src, unsigned long  int  len  );
void putchar(char c);
void alloc_prog(char* elf_buf, int elf_buf_size, int fork_flag, int exec_flag, int* child_proc_index, int debug_);
void free_proc(struct proc*  p  );
void remove_kernel_state(int active_proc);
void* kalloc();
void kfree(void* pa);
void timer_handler();
void* memset(void* dst, int c, unsigned int n);
void* memcpy(void* dst, const void* src, unsigned int n);
int strlen(const char* s);
int printf(const char* fmt, ...);
char* strncat(char* dest, const char* src, unsigned long  int  n  );
char* strncpy(char* s, const char* t, int n);
char* strtok(char* s, const char* delim);
void puts(const char* s);
int strcmp(const char* s1, const char* s2);
int strncmp(const char* p, const char* q, unsigned int n);
void virtio_blk_init();
static void virtio_blk_read(unsigned long  int  sector  , void* dst);
void bcache_init();
void bcache_stats();
static int bcache_evict();
static struct bcache_entry*  bcache_get(unsigned int  blkno  );
static void bcache_release(struct bcache_entry*  be  );
void read_block(unsigned int  blk  , void* dst);
static void virtio_blk_write(unsigned long  int  sector  , const void* src);
void write_block(unsigned int  blk  , const void* src);
static int check_perm(struct dinode*  ip  , int want);
void read_superblock();
void read_inode(unsigned int  inum  , struct dinode*  dest  );
static void write_inode(unsigned int  inum  , const struct dinode*  src  );
static int bitmap_test(unsigned int  b  );
static void bitmap_set(unsigned int  b  );
static void bitmap_clear(unsigned int  b  );
static void free_inode_blocks(unsigned int  inum  , struct dinode*  ip  );
static unsigned int  alloc_data_block();
static unsigned int  inode_blockno(struct dinode*  ip  , unsigned int  idx  );
static unsigned int  inode_bmap_alloc(unsigned int  inum  , struct dinode*  ip  , unsigned int  idx  );
void read_data(struct dinode*  ip  , unsigned int  offset  , unsigned char*  buf  , unsigned int  size  );
unsigned int  dir_lookup(struct dinode*  parent  , const char* name);
unsigned int  path_lookup(const char* path);
static unsigned int  path_lookup_lim(const char* path, int depth);
int fs_realpath(const char* path, char* out, int outsz);
void dump_inode(unsigned int  inum  );
static int owner_cap(struct file*  f  );
static void owner_add(struct file*  f  , struct proc*  o  );
static void owner_remove(struct file*  f  , struct proc*  o  );
void file_system_init();
struct spipe*  alloc_pipe();
void free_pipe(struct spipe*  p  );
struct file*  alloc_file();
void free_file(struct file*  p  );
struct spipe*  pipealloc();
struct file*  new_file_table();
void fs_init(struct file**  file_table  );
int is_pipe(int fd);
int is_stdin(int fd);
int is_stdout(int fd);
int is_tty(int fd);
void pipe_open(int* fd1, int* fd2);
void panic(char* str);
void yield();
int piperead(int fd, char* addr, int n);
int pipewrite(int fd, char* addr, int n);
static int path_parent_lookup_abs(const char* path, unsigned int*  parent_inum  , char* leafname);
static unsigned int  alloc_inode_T_FILE();
static int add_dirent(unsigned int  parent_inum  , const char* name, unsigned int  child_inum  );
static int remove_dirent(unsigned int  parent_inum  , const char* name);
static void build_abs_normalized(char* out, unsigned long  int  outsz  , const char* path);
int fs_mkdir(const char* path, int mode);
int fs_rmdir(const char* path);
int fs_unlink(const char* path);
static int write_data_inode(unsigned int  inum  , struct dinode*  ip  , const unsigned char*  src  , unsigned int  size  );
int fs_symlink(const char* target, const char* linkpath);
int fs_rename(const char* oldpath, const char* newpath);
int fs_link(const char* oldpath, const char* newpath);
int fs_stat(const char* path, struct stat*  st  );
int fs_readlink(const char* path, char* buf, int bufsz);
int fs_lstat(const char* path, struct stat*  st  );
int fs_chmod(const char* path, unsigned int  mode  );
int fs_chown(const char* path, unsigned short int  uid  , unsigned short int  gid  );
int fs_utimes(const char* path, unsigned int  atime  , unsigned int  mtime  );
int fs_open(const char* path);
int fs_open2(const char* path, int flags, int mode);
int  fs_read(int fd, void* buf, unsigned long  int  count  );
int  fs_write(int fd, const void* buf, unsigned long  int  count  );
int  fs_size(int fd);
int fs_close(long fd, int massive);
void fs_exit(struct file**  file_table  );
void fs_dup_table(struct proc*  owner  , struct file**  result  , struct file**  orig  );
void free_fs_table(struct file**  file_table  );
void fs_dup2(int oldfd, int newfd);
int fs_fstat_fd(int fd, struct stat*  st  );
long fs_lseek(int fd, long offset, int whence);
// uniq global variable
// inline function
static inline unsigned long  int  r_time()
{
    unsigned long  int  x  ;
    memset(&x, 0, sizeof(x));
    # 364 "/home/ab25cq/minux9/common.h"
    # 365 "/home/ab25cq/minux9/common.h"
     __asm volatile (
        "csrr %0, time"
        :        "=r"
(x)    );
    # 366 "/home/ab25cq/minux9/common.h"
        return x;
}
static inline void w_stimecmp(unsigned long  int  x  )
{
    # 371 "/home/ab25cq/minux9/common.h"
     __asm volatile (
        "csrw 0x14d, %0"
        :        :        "r"
(x)    );
}
static inline void w_sie(unsigned long  int  x  )
{
    # 375 "/home/ab25cq/minux9/common.h"
     __asm volatile (
        "csrw sie, %0"
        :        :        "r"
(x)    );
}
static inline unsigned long  int  r_sie()
{
    unsigned long  int  x  ;
    memset(&x, 0, sizeof(x));
    # 379 "/home/ab25cq/minux9/common.h"
    # 380 "/home/ab25cq/minux9/common.h"
     __asm volatile (
        "csrr %0, sie"
        :        "=r"
(x)    );
    # 381 "/home/ab25cq/minux9/common.h"
        return x;
}
static inline unsigned long  int  r_sstatus()
{
    unsigned long  int  x  ;
    memset(&x, 0, sizeof(x));
    # 385 "/home/ab25cq/minux9/common.h"
    # 386 "/home/ab25cq/minux9/common.h"
     __asm volatile (
        "csrr %0, sstatus"
        :        "=r"
(x)    );
    # 387 "/home/ab25cq/minux9/common.h"
        return x;
}
static inline void w_sstatus(unsigned long  int  x  )
{
    # 391 "/home/ab25cq/minux9/common.h"
     __asm volatile (
        "csrw sstatus, %0"
        :        :        "r"
(x)    );
}
static inline void mw32(unsigned long  int  b  , unsigned int  o  , unsigned int  v  )
{
    # 127 "/tmp/fs-test.nc"
    *(volatile unsigned int* )(b+o)=v;
}
static inline unsigned int  mr32(unsigned long  int  b  , unsigned int  o  )
{
    # 128 "/tmp/fs-test.nc"
        return *(volatile unsigned int* )(b+o);
}
static inline void set_flags(unsigned short int  f0  , unsigned short int  f1  , unsigned short int  f2  )
{
    # 192 "/tmp/fs-test.nc"
    desc[0].flags=f0;
    # 193 "/tmp/fs-test.nc"
    desc[1].flags=f1;
    # 194 "/tmp/fs-test.nc"
    desc[2].flags=f2;
}
static inline unsigned int  fs_now()
{
    unsigned long  int  x  ;
    memset(&x, 0, sizeof(x));
    # 396 "/tmp/fs-test.nc"
    # 396 "/tmp/fs-test.nc"
     __asm volatile (
        "csrr %0, time"
        :        "=r"
(x)    );
    # 396 "/tmp/fs-test.nc"
        return g_time_offset+(unsigned int )(x/1000000UL);
}
static inline unsigned int  BBLOCK(unsigned int  b  )
{
    # 449 "/tmp/fs-test.nc"
        return sb.bmapstart+(b/(512*8));
}

// body function
void virtio_blk_init()
{
    int s;
    unsigned long  int  base  ;
    unsigned int  devfeat  ;
    unsigned int  st  ;
    unsigned int  devQ  ;
    unsigned int  drvQ  ;
    unsigned long  int  sz_desc  ;
    unsigned long  int  sz_avail  ;
    unsigned long  int  sz_used  ;
    unsigned long  int  sz_total  ;
    unsigned long  int  vq_phys  ;
    memset(&s, 0, sizeof(s));
    memset(&base, 0, sizeof(base));
    memset(&devfeat, 0, sizeof(devfeat));
    memset(&st, 0, sizeof(st));
    memset(&devQ, 0, sizeof(devQ));
    memset(&drvQ, 0, sizeof(drvQ));
    memset(&sz_desc, 0, sizeof(sz_desc));
    memset(&sz_avail, 0, sizeof(sz_avail));
    memset(&sz_used, 0, sizeof(sz_used));
    memset(&sz_total, 0, sizeof(sz_total));
    memset(&vq_phys, 0, sizeof(vq_phys));
    # 137 "/tmp/fs-test.nc"
    for(s=0    ;s<8;s++){
        # 133 "/tmp/fs-test.nc"
        base=0x10001000UL+s*0x00001000UL;
        # 135 "/tmp/fs-test.nc"
        if(mr32(base,0x000)!=0x74726976) {
            # 134 "/tmp/fs-test.nc"
            continue;
        }
        # 136 "/tmp/fs-test.nc"
        if(mr32(base,0x008)==2) {
            # 135 "/tmp/fs-test.nc"
            vbase=base;
            # 135 "/tmp/fs-test.nc"
            break;
        }
    }
    # 138 "/tmp/fs-test.nc"
    if(!vbase) {
        # 137 "/tmp/fs-test.nc"
        puts("virtio-blk not found\n");
        # 137 "/tmp/fs-test.nc"
        while(1) {
            # 137 "/tmp/fs-test.nc"
            ;
        }
    }
    # 140 "/tmp/fs-test.nc"
    if(mr32(vbase,0x004)!=1) {
        # 138 "/tmp/fs-test.nc"
        puts("not legacy mmio\n");
        # 138 "/tmp/fs-test.nc"
        while(1) {
            # 138 "/tmp/fs-test.nc"
            ;
        }
    }
    # 140 "/tmp/fs-test.nc"
    mw32(vbase,0x070,0);
    # 141 "/tmp/fs-test.nc"
    mw32(vbase,0x070,1|2);
    # 143 "/tmp/fs-test.nc"
    devfeat=mr32(vbase,0x010);
    # 144 "/tmp/fs-test.nc"
    (void)devfeat;
    # 145 "/tmp/fs-test.nc"
    mw32(vbase,0x020,0);
    # 147 "/tmp/fs-test.nc"
    st=mr32(vbase,0x070)|8;
    # 148 "/tmp/fs-test.nc"
    mw32(vbase,0x070,st);
    # 153 "/tmp/fs-test.nc"
    if(!(mr32(vbase,0x070)&8)) {
        # 150 "/tmp/fs-test.nc"
        puts("FEATURES_OK rejected\n");
        # 151 "/tmp/fs-test.nc"
        while(1) {
            # 151 "/tmp/fs-test.nc"
            ;
        }
    }
    # 153 "/tmp/fs-test.nc"
    mw32(vbase,0x028,4096);
    # 154 "/tmp/fs-test.nc"
    mw32(vbase,0x030,0);
    # 155 "/tmp/fs-test.nc"
    devQ=mr32(vbase,0x034);
    # 156 "/tmp/fs-test.nc"
    drvQ=(((devQ>128))?(128):(devQ));
    # 157 "/tmp/fs-test.nc"
    Q=drvQ;
    # 160 "/tmp/fs-test.nc"
    if(!Q||Q>1024) {
        # 158 "/tmp/fs-test.nc"
        puts("unsupported queue size\n");
        # 158 "/tmp/fs-test.nc"
        while(1) {
            # 158 "/tmp/fs-test.nc"
            ;
        }
    }
    # 160 "/tmp/fs-test.nc"
    sz_desc=16ULL*Q;
    # 161 "/tmp/fs-test.nc"
    sz_avail=4ULL+2ULL*Q;
    # 162 "/tmp/fs-test.nc"
    sz_used=4ULL+8ULL*Q;
    # 163 "/tmp/fs-test.nc"
    sz_total=sz_desc+sz_avail+sz_used;
    # 172 "/tmp/fs-test.nc"
    while(sz_total>4096&&Q>1) {
        # 166 "/tmp/fs-test.nc"
        Q>>=1;
        # 167 "/tmp/fs-test.nc"
        sz_desc=16ULL*Q;
        # 168 "/tmp/fs-test.nc"
        sz_avail=4ULL+2ULL*Q;
        # 169 "/tmp/fs-test.nc"
        sz_used=4ULL+8ULL*Q;
        # 170 "/tmp/fs-test.nc"
        sz_total=sz_desc+sz_avail+sz_used;
    }
    # 174 "/tmp/fs-test.nc"
    if(sz_total>4096) {
        # 172 "/tmp/fs-test.nc"
        puts("virtqueue too large\n");
        # 172 "/tmp/fs-test.nc"
        while(1) {
            # 172 "/tmp/fs-test.nc"
            ;
        }
    }
    # 174 "/tmp/fs-test.nc"
    mw32(vbase,0x034,Q);
    # 176 "/tmp/fs-test.nc"
    vq_area=kalloc();
    # 178 "/tmp/fs-test.nc"
    if(!vq_area) {
        # 177 "/tmp/fs-test.nc"
        puts("kalloc failed\n");
        # 177 "/tmp/fs-test.nc"
        while(1) {
            # 177 "/tmp/fs-test.nc"
            ;
        }
    }
    # 178 "/tmp/fs-test.nc"
    memset(vq_area,0,4096);
    # 180 "/tmp/fs-test.nc"
    desc=(struct virtq_desc* )vq_area;
    # 181 "/tmp/fs-test.nc"
    avail=(struct virtq_avail* )(vq_area+sz_desc);
    # 182 "/tmp/fs-test.nc"
    used=(struct virtq_used* )(vq_area+sz_desc+sz_avail);
    # 184 "/tmp/fs-test.nc"
    vq_phys=(unsigned long  int )vq_area;
    # 185 "/tmp/fs-test.nc"
    mw32(vbase,0x038,4096);
    # 186 "/tmp/fs-test.nc"
    mw32(vbase,0x040,(unsigned int )(vq_phys>>12));
    # 188 "/tmp/fs-test.nc"
    mw32(vbase,0x070,st|4);
}

static void virtio_blk_read(unsigned long  int  sector  , void* dst)
{
    # 204 "/tmp/fs-test.nc"
    req.type=0;
    # 205 "/tmp/fs-test.nc"
    req.sector=sector;
    # 206 "/tmp/fs-test.nc"
    req.reserved=0;
    # 207 "/tmp/fs-test.nc"
    status_byte=0xFF;
    # 209 "/tmp/fs-test.nc"
    desc[0].addr=(unsigned long  int )&req;
    # 209 "/tmp/fs-test.nc"
    desc[0].len=sizeof(req);
    # 209 "/tmp/fs-test.nc"
    desc[0].next=1;
    # 210 "/tmp/fs-test.nc"
    desc[1].addr=(unsigned long  int )dma_buf;
    # 210 "/tmp/fs-test.nc"
    desc[1].len=512;
    # 210 "/tmp/fs-test.nc"
    desc[1].next=2;
    # 211 "/tmp/fs-test.nc"
    desc[2].addr=(unsigned long  int )&status_byte;
    # 211 "/tmp/fs-test.nc"
    desc[2].len=1;
    # 213 "/tmp/fs-test.nc"
    set_flags(1,1|2,2);
    # 215 "/tmp/fs-test.nc"
    avail->ring[aidx%Q]=0;
    # 216 "/tmp/fs-test.nc"
    __sync_synchronize();
    # 217 "/tmp/fs-test.nc"
    avail->idx=++aidx;
    # 219 "/tmp/fs-test.nc"
    mw32(vbase,0x050,0);
    # 224 "/tmp/fs-test.nc"
    while(status_byte==0xFF) {
        # 222 "/tmp/fs-test.nc"
        __sync_synchronize();
    }
    # 224 "/tmp/fs-test.nc"
    memcpy(dst,dma_buf,512);
}

void bcache_init()
{
    int i;
    memset(&i, 0, sizeof(i));
    # 254 "/tmp/fs-test.nc"
    for(i=0    ;i<32;i++){
        # 249 "/tmp/fs-test.nc"
        bcache[i].blkno=0;
        # 250 "/tmp/fs-test.nc"
        bcache[i].refcnt=0;
        # 251 "/tmp/fs-test.nc"
        bcache[i].dirty=0;
        # 252 "/tmp/fs-test.nc"
        bcache[i].last_use=0;
    }
    # 254 "/tmp/fs-test.nc"
    bcache_hits=0;
    # 255 "/tmp/fs-test.nc"
    bcache_misses=0;
}

void bcache_stats()
{
    # 262 "/tmp/fs-test.nc"
    printf("Block cache stats: hits=%u misses=%u hit_rate=%u%%\n",bcache_hits,bcache_misses,(((bcache_hits+bcache_misses)>0)?((bcache_hits*100/(bcache_hits+bcache_misses))):(0)));
}

static int bcache_evict()
{
    int victim;
    unsigned int  oldest  ;
    int i;
    memset(&victim, 0, sizeof(victim));
    memset(&oldest, 0, sizeof(oldest));
    memset(&i, 0, sizeof(i));
    # 268 "/tmp/fs-test.nc"
    victim=-1;
    # 269 "/tmp/fs-test.nc"
    oldest=0xFFFFFFFF;
    # 279 "/tmp/fs-test.nc"
    for(i=0    ;i<32;i++){
        # 277 "/tmp/fs-test.nc"
        if(bcache[i].refcnt==0&&bcache[i].last_use<oldest) {
            # 274 "/tmp/fs-test.nc"
            oldest=bcache[i].last_use;
            # 275 "/tmp/fs-test.nc"
            victim=i;
        }
    }
    # 288 "/tmp/fs-test.nc"
    if(victim>=0) {
        # 284 "/tmp/fs-test.nc"
        if(bcache[victim].dirty&&bcache[victim].blkno!=0) {
            # 282 "/tmp/fs-test.nc"
            virtio_blk_write(bcache[victim].blkno,bcache[victim].data);
        }
        # 284 "/tmp/fs-test.nc"
        bcache[victim].blkno=0;
        # 285 "/tmp/fs-test.nc"
        bcache[victim].dirty=0;
    }
    # 288 "/tmp/fs-test.nc"
        return victim;
}

static struct bcache_entry*  bcache_get(unsigned int  blkno  )
{
    int i;
    int slot;
    int i_0;
    memset(&i, 0, sizeof(i));
    memset(&slot, 0, sizeof(slot));
    memset(&i_0, 0, sizeof(i_0));
    # 294 "/tmp/fs-test.nc"
    bcache_time++;
    # 307 "/tmp/fs-test.nc"
    for(i=0    ;i<32;i++){
        # 304 "/tmp/fs-test.nc"
        if(bcache[i].blkno==blkno) {
            # 299 "/tmp/fs-test.nc"
            bcache[i].refcnt++;
            # 300 "/tmp/fs-test.nc"
            bcache[i].last_use=bcache_time;
            # 301 "/tmp/fs-test.nc"
            bcache_hits++;
            # 302 "/tmp/fs-test.nc"
                        return &bcache[i];
        }
    }
    # 307 "/tmp/fs-test.nc"
    bcache_misses++;
    # 308 "/tmp/fs-test.nc"
    slot=-1;
    # 317 "/tmp/fs-test.nc"
    for(i_0=0    ;i_0<32;i_0++){
        # 314 "/tmp/fs-test.nc"
        if(bcache[i_0].blkno==0) {
            # 311 "/tmp/fs-test.nc"
            slot=i_0;
            # 312 "/tmp/fs-test.nc"
            break;
        }
    }
    # 321 "/tmp/fs-test.nc"
    if(slot<0) {
        # 318 "/tmp/fs-test.nc"
        slot=bcache_evict();
    }
    # 330 "/tmp/fs-test.nc"
    if(slot<0) {
        # 323 "/tmp/fs-test.nc"
        slot=0;
        # 327 "/tmp/fs-test.nc"
        if(bcache[slot].dirty) {
            # 325 "/tmp/fs-test.nc"
            virtio_blk_write(bcache[slot].blkno,bcache[slot].data);
        }
    }
    # 330 "/tmp/fs-test.nc"
    bcache[slot].blkno=blkno;
    # 331 "/tmp/fs-test.nc"
    bcache[slot].dirty=0;
    # 332 "/tmp/fs-test.nc"
    bcache[slot].refcnt=1;
    # 333 "/tmp/fs-test.nc"
    bcache[slot].last_use=bcache_time;
    # 334 "/tmp/fs-test.nc"
    virtio_blk_read(blkno,bcache[slot].data);
    # 336 "/tmp/fs-test.nc"
        return &bcache[slot];
}

static void bcache_release(struct bcache_entry*  be  )
{
    # 345 "/tmp/fs-test.nc"
    if(be->refcnt>0) {
        # 343 "/tmp/fs-test.nc"
        be->refcnt--;
    }
}

void read_block(unsigned int  blk  , void* dst)
{
    struct bcache_entry*  be  ;
    memset(&be, 0, sizeof(be));
    # 349 "/tmp/fs-test.nc"
    be=bcache_get(blk);
    # 350 "/tmp/fs-test.nc"
    memcpy(dst,be->data,512);
    # 351 "/tmp/fs-test.nc"
    bcache_release(be);
}

static void virtio_blk_write(unsigned long  int  sector  , const void* src)
{
    # 356 "/tmp/fs-test.nc"
    req.type=1;
    # 357 "/tmp/fs-test.nc"
    req.sector=sector;
    # 358 "/tmp/fs-test.nc"
    req.reserved=0;
    # 359 "/tmp/fs-test.nc"
    status_byte=0xFF;
    # 361 "/tmp/fs-test.nc"
    memcpy((void*)dma_buf,src,512);
    # 363 "/tmp/fs-test.nc"
    desc[0].addr=(unsigned long  int )&req;
    # 363 "/tmp/fs-test.nc"
    desc[0].len=sizeof(req);
    # 363 "/tmp/fs-test.nc"
    desc[0].next=1;
    # 364 "/tmp/fs-test.nc"
    desc[1].addr=(unsigned long  int )dma_buf;
    # 364 "/tmp/fs-test.nc"
    desc[1].len=512;
    # 364 "/tmp/fs-test.nc"
    desc[1].next=2;
    # 365 "/tmp/fs-test.nc"
    desc[2].addr=(unsigned long  int )&status_byte;
    # 365 "/tmp/fs-test.nc"
    desc[2].len=1;
    # 367 "/tmp/fs-test.nc"
    set_flags(1,1,2);
    # 369 "/tmp/fs-test.nc"
    avail->ring[aidx%Q]=0;
    # 370 "/tmp/fs-test.nc"
    __sync_synchronize();
    # 371 "/tmp/fs-test.nc"
    avail->idx=++aidx;
    # 373 "/tmp/fs-test.nc"
    mw32(vbase,0x050,0);
    # 377 "/tmp/fs-test.nc"
    while(status_byte==0xFF) {
        # 376 "/tmp/fs-test.nc"
        __sync_synchronize();
    }
}

void write_block(unsigned int  blk  , const void* src)
{
    struct bcache_entry*  be  ;
    memset(&be, 0, sizeof(be));
    # 381 "/tmp/fs-test.nc"
    be=bcache_get(blk);
    # 382 "/tmp/fs-test.nc"
    memcpy(be->data,src,512);
    # 383 "/tmp/fs-test.nc"
    be->dirty=1;
    # 384 "/tmp/fs-test.nc"
    bcache_release(be);
}

static int check_perm(struct dinode*  ip  , int want)
{
    struct proc*  p  ;
    unsigned int  mode  ;
    int shift;
    int member;
    int i;
    int perms;
    memset(&p, 0, sizeof(p));
    memset(&mode, 0, sizeof(mode));
    memset(&shift, 0, sizeof(shift));
    memset(&member, 0, sizeof(member));
    memset(&i, 0, sizeof(i));
    memset(&perms, 0, sizeof(perms));
    # 405 "/tmp/fs-test.nc"
    p=gProc[gActiveProc];
    # 406 "/tmp/fs-test.nc"
    mode=ip->mode&0777;
    # 407 "/tmp/fs-test.nc"
    shift=6;
    # 415 "/tmp/fs-test.nc"
    if(p->uid==ip->uid) {
        # 408 "/tmp/fs-test.nc"
        shift=6;
    }
    else if(p->gid==ip->gid) {
        # 409 "/tmp/fs-test.nc"
        shift=3;
    }
    else {
        # 411 "/tmp/fs-test.nc"
        member=0;
        # 413 "/tmp/fs-test.nc"
        for(i=0        ;i<p->nsupp;i++){
            # 413 "/tmp/fs-test.nc"
            if(p->supp_gids[i]==ip->gid) {
                # 412 "/tmp/fs-test.nc"
                member=1;
                # 412 "/tmp/fs-test.nc"
                break;
            }
        }
        # 413 "/tmp/fs-test.nc"
        shift=((member)?(3):(0));
    }
    # 415 "/tmp/fs-test.nc"
    perms=(mode>>shift)&7;
    # 418 "/tmp/fs-test.nc"
    if((want&4)&&!(perms&4)) {
        # 417 "/tmp/fs-test.nc"
                return 0;
    }
    # 419 "/tmp/fs-test.nc"
    if((want&2)&&!(perms&2)) {
        # 418 "/tmp/fs-test.nc"
                return 0;
    }
    # 420 "/tmp/fs-test.nc"
    if((want&1)&&!(perms&1)) {
        # 419 "/tmp/fs-test.nc"
                return 0;
    }
    # 420 "/tmp/fs-test.nc"
        return 1;
}

void read_superblock()
{
    # 424 "/tmp/fs-test.nc"
    read_block(1,block_buf);
    # 425 "/tmp/fs-test.nc"
    memcpy(&sb,block_buf,sizeof(sb));
}

void read_inode(unsigned int  inum  , struct dinode*  dest  )
{
    unsigned int  inodes_per_blk  ;
    unsigned int  blkno  ;
    unsigned int  offset  ;
    struct dinode*  dip  ;
    memset(&inodes_per_blk, 0, sizeof(inodes_per_blk));
    memset(&blkno, 0, sizeof(blkno));
    memset(&offset, 0, sizeof(offset));
    memset(&dip, 0, sizeof(dip));
    # 435 "/tmp/fs-test.nc"
    if(inum<1||inum>sb.ninodes) {
        # 430 "/tmp/fs-test.nc"
        memset(dest,0,sizeof(*dest));
        # 431 "/tmp/fs-test.nc"
                return;
    }
    # 435 "/tmp/fs-test.nc"
    inodes_per_blk=512/sizeof(struct dinode );
    # 437 "/tmp/fs-test.nc"
    blkno=sb.inodestart+((inum-1)/inodes_per_blk);
    # 439 "/tmp/fs-test.nc"
    offset=((inum-1)%inodes_per_blk)*sizeof(struct dinode );
    # 441 "/tmp/fs-test.nc"
    read_block(blkno,block_buf);
    # 442 "/tmp/fs-test.nc"
    dip=(struct dinode* )(block_buf+offset);
    # 443 "/tmp/fs-test.nc"
    *dest=*dip;
}

static void write_inode(unsigned int  inum  , const struct dinode*  src  )
{
    unsigned int  inodes_per_blk  ;
    unsigned int  blkno  ;
    unsigned int  offset  ;
    struct dinode*  dip  ;
    memset(&inodes_per_blk, 0, sizeof(inodes_per_blk));
    memset(&blkno, 0, sizeof(blkno));
    memset(&offset, 0, sizeof(offset));
    memset(&dip, 0, sizeof(dip));
    # 454 "/tmp/fs-test.nc"
    if(inum<1||inum>sb.ninodes) {
        # 453 "/tmp/fs-test.nc"
                return;
    }
    # 454 "/tmp/fs-test.nc"
    inodes_per_blk=512/sizeof(struct dinode );
    # 455 "/tmp/fs-test.nc"
    blkno=sb.inodestart+((inum-1)/inodes_per_blk);
    # 456 "/tmp/fs-test.nc"
    offset=((inum-1)%inodes_per_blk)*sizeof(struct dinode );
    # 458 "/tmp/fs-test.nc"
    unsigned char  buf[512]  ;
    memset(&buf, 0, sizeof(buf));
    # 459 "/tmp/fs-test.nc"
    read_block(blkno,buf);
    # 460 "/tmp/fs-test.nc"
    dip=(struct dinode* )(buf+offset);
    # 461 "/tmp/fs-test.nc"
    *dip=*src;
    # 462 "/tmp/fs-test.nc"
    write_block(blkno,buf);
}

static int bitmap_test(unsigned int  b  )
{
    unsigned int  bmapblk  ;
    unsigned int  bi  ;
    memset(&bmapblk, 0, sizeof(bmapblk));
    memset(&bi, 0, sizeof(bi));
    # 467 "/tmp/fs-test.nc"
    bmapblk=BBLOCK(b);
    # 468 "/tmp/fs-test.nc"
    unsigned char  buf[512]  ;
    memset(&buf, 0, sizeof(buf));
    # 469 "/tmp/fs-test.nc"
    read_block(bmapblk,buf);
    # 470 "/tmp/fs-test.nc"
    bi=b%(512*8);
    # 471 "/tmp/fs-test.nc"
        return (buf[bi/8]>>(bi%8))&1;
}

static void bitmap_set(unsigned int  b  )
{
    unsigned int  bmapblk  ;
    unsigned int  bi  ;
    memset(&bmapblk, 0, sizeof(bmapblk));
    memset(&bi, 0, sizeof(bi));
    # 476 "/tmp/fs-test.nc"
    bmapblk=BBLOCK(b);
    # 477 "/tmp/fs-test.nc"
    unsigned char  buf[512]  ;
    memset(&buf, 0, sizeof(buf));
    # 478 "/tmp/fs-test.nc"
    read_block(bmapblk,buf);
    # 479 "/tmp/fs-test.nc"
    bi=b%(512*8);
    # 480 "/tmp/fs-test.nc"
    buf[bi/8]|=(1<<(bi%8));
    # 481 "/tmp/fs-test.nc"
    write_block(bmapblk,buf);
}

static void bitmap_clear(unsigned int  b  )
{
    unsigned int  bmapblk  ;
    unsigned int  bi  ;
    memset(&bmapblk, 0, sizeof(bmapblk));
    memset(&bi, 0, sizeof(bi));
    # 487 "/tmp/fs-test.nc"
    if(b==0) {
        # 486 "/tmp/fs-test.nc"
                return;
    }
    # 487 "/tmp/fs-test.nc"
    bmapblk=BBLOCK(b);
    # 488 "/tmp/fs-test.nc"
    unsigned char  buf[512]  ;
    memset(&buf, 0, sizeof(buf));
    # 489 "/tmp/fs-test.nc"
    read_block(bmapblk,buf);
    # 490 "/tmp/fs-test.nc"
    bi=b%(512*8);
    # 491 "/tmp/fs-test.nc"
    buf[bi/8]&=~(1<<(bi%8));
    # 492 "/tmp/fs-test.nc"
    write_block(bmapblk,buf);
}

static void free_inode_blocks(unsigned int  inum  , struct dinode*  ip  )
{
    int i;
    unsigned int  iblk  ;
    unsigned int*  ents  ;
    int i_1;
    unsigned int  dblk  ;
    unsigned int*  first  ;
    int i_2;
    unsigned int  sblk  ;
    unsigned int*  second  ;
    int j;
    memset(&i, 0, sizeof(i));
    memset(&iblk, 0, sizeof(iblk));
    memset(&ents, 0, sizeof(ents));
    memset(&i_1, 0, sizeof(i_1));
    memset(&dblk, 0, sizeof(dblk));
    memset(&first, 0, sizeof(first));
    memset(&i_2, 0, sizeof(i_2));
    memset(&sblk, 0, sizeof(sblk));
    memset(&second, 0, sizeof(second));
    memset(&j, 0, sizeof(j));
    # 507 "/tmp/fs-test.nc"
    for(i=0    ;i<12;i++){
        # 504 "/tmp/fs-test.nc"
        if(ip->addrs[i]!=0) {
            # 501 "/tmp/fs-test.nc"
            bitmap_clear(ip->addrs[i]);
            # 502 "/tmp/fs-test.nc"
            ip->addrs[i]=0;
        }
    }
    # 519 "/tmp/fs-test.nc"
    if(ip->addrs[12]!=0) {
        # 508 "/tmp/fs-test.nc"
        iblk=ip->addrs[12];
        # 509 "/tmp/fs-test.nc"
        read_block(iblk,block_buf);
        # 510 "/tmp/fs-test.nc"
        ents=(unsigned int* )block_buf;
        # 514 "/tmp/fs-test.nc"
        for(i_1=0        ;i_1<(512/sizeof(unsigned int ));i_1++){
            # 513 "/tmp/fs-test.nc"
            if(ents[i_1]) {
                # 512 "/tmp/fs-test.nc"
                bitmap_clear(ents[i_1]);
            }
        }
        # 514 "/tmp/fs-test.nc"
        bitmap_clear(iblk);
        # 515 "/tmp/fs-test.nc"
        ip->addrs[12]=0;
    }
    # 538 "/tmp/fs-test.nc"
    if(ip->addrs[12+1]!=0) {
        # 520 "/tmp/fs-test.nc"
        dblk=ip->addrs[12+1];
        # 521 "/tmp/fs-test.nc"
        read_block(dblk,block_buf);
        # 522 "/tmp/fs-test.nc"
        first=(unsigned int* )block_buf;
        # 534 "/tmp/fs-test.nc"
        for(i_2=0        ;i_2<(512/sizeof(unsigned int ));i_2++){
            # 525 "/tmp/fs-test.nc"
            if(!first[i_2]) {
                # 524 "/tmp/fs-test.nc"
                continue;
            }
            # 525 "/tmp/fs-test.nc"
            sblk=first[i_2];
            # 526 "/tmp/fs-test.nc"
            unsigned char  sbuf[512]  ;
            memset(&sbuf, 0, sizeof(sbuf));
            # 527 "/tmp/fs-test.nc"
            read_block(sblk,sbuf);
            # 528 "/tmp/fs-test.nc"
            second=(unsigned int* )sbuf;
            # 532 "/tmp/fs-test.nc"
            for(j=0            ;j<(512/sizeof(unsigned int ));j++){
                # 531 "/tmp/fs-test.nc"
                if(second[j]) {
                    # 530 "/tmp/fs-test.nc"
                    bitmap_clear(second[j]);
                }
            }
            # 532 "/tmp/fs-test.nc"
            bitmap_clear(sblk);
        }
        # 534 "/tmp/fs-test.nc"
        bitmap_clear(dblk);
        # 535 "/tmp/fs-test.nc"
        ip->addrs[12+1]=0;
    }
    # 538 "/tmp/fs-test.nc"
    ip->size=0;
    # 539 "/tmp/fs-test.nc"
    write_inode(inum,ip);
}

static unsigned int  alloc_data_block()
{
    unsigned int  bmapblocks  ;
    unsigned int  datastart  ;
    unsigned int  b  ;
    memset(&bmapblocks, 0, sizeof(bmapblocks));
    memset(&datastart, 0, sizeof(datastart));
    memset(&b, 0, sizeof(b));
    # 544 "/tmp/fs-test.nc"
    bmapblocks=(sb.size+(512*8)-1)/(512*8);
    # 545 "/tmp/fs-test.nc"
    datastart=sb.bmapstart+bmapblocks;
    # 556 "/tmp/fs-test.nc"
    for(b=datastart    ;b<sb.size;b++){
        # 555 "/tmp/fs-test.nc"
        if(!bitmap_test(b)) {
            # 548 "/tmp/fs-test.nc"
            bitmap_set(b);
            # 550 "/tmp/fs-test.nc"
            unsigned char  z[512]  ;
            memset(&z, 0, sizeof(z));
            # 551 "/tmp/fs-test.nc"
            memset(z,0,512);
            # 552 "/tmp/fs-test.nc"
            write_block(b,z);
            # 553 "/tmp/fs-test.nc"
                        return b;
        }
    }
    # 556 "/tmp/fs-test.nc"
        return 0;
}

static unsigned int  inode_blockno(struct dinode*  ip  , unsigned int  idx  )
{
    unsigned int  indirect_blk  ;
    unsigned int*  entries  ;
    unsigned int  dbl_index0  ;
    unsigned int  dbl_index1  ;
    unsigned int  dindirect_blk  ;
    unsigned int*  first_entries  ;
    unsigned int  first_blk  ;
    unsigned int*  second_entries  ;
    memset(&indirect_blk, 0, sizeof(indirect_blk));
    memset(&entries, 0, sizeof(entries));
    memset(&dbl_index0, 0, sizeof(dbl_index0));
    memset(&dbl_index1, 0, sizeof(dbl_index1));
    memset(&dindirect_blk, 0, sizeof(dindirect_blk));
    memset(&first_entries, 0, sizeof(first_entries));
    memset(&first_blk, 0, sizeof(first_blk));
    memset(&second_entries, 0, sizeof(second_entries));
    # 589 "/tmp/fs-test.nc"
    if(idx<12) {
        # 562 "/tmp/fs-test.nc"
                return ip->addrs[idx];
    }
    else if(idx<12+(512/sizeof(unsigned int ))) {
        # 565 "/tmp/fs-test.nc"
        indirect_blk=ip->addrs[12];
        # 567 "/tmp/fs-test.nc"
        if(indirect_blk==0) {
            # 566 "/tmp/fs-test.nc"
                        return 0;
        }
        # 567 "/tmp/fs-test.nc"
        read_block(indirect_blk,block_buf);
        # 568 "/tmp/fs-test.nc"
        entries=(unsigned int* )block_buf;
        # 569 "/tmp/fs-test.nc"
                return entries[idx-12];
    }
    else {
        # 572 "/tmp/fs-test.nc"
        idx-=(12+(512/sizeof(unsigned int )));
        # 573 "/tmp/fs-test.nc"
        dbl_index0=idx/(512/sizeof(unsigned int ));
        # 574 "/tmp/fs-test.nc"
        dbl_index1=idx%(512/sizeof(unsigned int ));
        # 576 "/tmp/fs-test.nc"
        dindirect_blk=ip->addrs[12+1];
        # 579 "/tmp/fs-test.nc"
        if(dindirect_blk==0) {
            # 577 "/tmp/fs-test.nc"
                        return 0;
        }
        # 579 "/tmp/fs-test.nc"
        read_block(dindirect_blk,block_buf);
        # 580 "/tmp/fs-test.nc"
        first_entries=(unsigned int* )block_buf;
        # 581 "/tmp/fs-test.nc"
        first_blk=first_entries[dbl_index0];
        # 585 "/tmp/fs-test.nc"
        if(first_blk==0) {
            # 582 "/tmp/fs-test.nc"
                        return 0;
        }
        # 585 "/tmp/fs-test.nc"
        read_block(first_blk,block_buf);
        # 586 "/tmp/fs-test.nc"
        second_entries=(unsigned int* )block_buf;
        # 587 "/tmp/fs-test.nc"
                return second_entries[dbl_index1];
    }
}

static unsigned int  inode_bmap_alloc(unsigned int  inum  , struct dinode*  ip  , unsigned int  idx  )
{
    unsigned int  b  ;
    unsigned int  indirect_blk  ;
    unsigned int  nb  ;
    unsigned int*  entries  ;
    unsigned int  i  ;
    unsigned int  db  ;
    unsigned int  di  ;
    unsigned int  idx1  ;
    unsigned int  idx2  ;
    unsigned int  dindirect_blk  ;
    unsigned int  nb_3  ;
    unsigned int*  first_entries  ;
    unsigned int  first_blk  ;
    unsigned int  nb_4  ;
    unsigned int*  second_entries  ;
    unsigned int  db_5  ;
    memset(&b, 0, sizeof(b));
    memset(&indirect_blk, 0, sizeof(indirect_blk));
    memset(&nb, 0, sizeof(nb));
    memset(&entries, 0, sizeof(entries));
    memset(&i, 0, sizeof(i));
    memset(&db, 0, sizeof(db));
    memset(&di, 0, sizeof(di));
    memset(&idx1, 0, sizeof(idx1));
    memset(&idx2, 0, sizeof(idx2));
    memset(&dindirect_blk, 0, sizeof(dindirect_blk));
    memset(&nb_3, 0, sizeof(nb_3));
    memset(&first_entries, 0, sizeof(first_entries));
    memset(&first_blk, 0, sizeof(first_blk));
    memset(&nb_4, 0, sizeof(nb_4));
    memset(&second_entries, 0, sizeof(second_entries));
    memset(&db_5, 0, sizeof(db_5));
    # 603 "/tmp/fs-test.nc"
    if(idx<12) {
        # 600 "/tmp/fs-test.nc"
        if(ip->addrs[idx]==0) {
            # 595 "/tmp/fs-test.nc"
            b=alloc_data_block();
            # 597 "/tmp/fs-test.nc"
            if(!b) {
                # 596 "/tmp/fs-test.nc"
                                return 0;
            }
            # 597 "/tmp/fs-test.nc"
            ip->addrs[idx]=b;
            # 598 "/tmp/fs-test.nc"
            write_inode(inum,ip);
        }
        # 600 "/tmp/fs-test.nc"
                return ip->addrs[idx];
    }
    # 627 "/tmp/fs-test.nc"
    if(idx<12+(512/sizeof(unsigned int ))) {
        # 604 "/tmp/fs-test.nc"
        indirect_blk=ip->addrs[12];
        # 613 "/tmp/fs-test.nc"
        if(indirect_blk==0) {
            # 606 "/tmp/fs-test.nc"
            nb=alloc_data_block();
            # 609 "/tmp/fs-test.nc"
            if(!nb) {
                # 607 "/tmp/fs-test.nc"
                                return 0;
            }
            # 609 "/tmp/fs-test.nc"
            ip->addrs[12]=nb;
            # 610 "/tmp/fs-test.nc"
            write_inode(inum,ip);
            # 611 "/tmp/fs-test.nc"
            indirect_blk=nb;
        }
        # 613 "/tmp/fs-test.nc"
        unsigned char  buf[512]  ;
        memset(&buf, 0, sizeof(buf));
        # 614 "/tmp/fs-test.nc"
        read_block(indirect_blk,buf);
        # 615 "/tmp/fs-test.nc"
        entries=(unsigned int* )buf;
        # 616 "/tmp/fs-test.nc"
        i=idx-12;
        # 623 "/tmp/fs-test.nc"
        if(entries[i]==0) {
            # 618 "/tmp/fs-test.nc"
            db=alloc_data_block();
            # 620 "/tmp/fs-test.nc"
            if(!db) {
                # 619 "/tmp/fs-test.nc"
                                return 0;
            }
            # 620 "/tmp/fs-test.nc"
            entries[i]=db;
            # 621 "/tmp/fs-test.nc"
            write_block(indirect_blk,buf);
        }
        # 623 "/tmp/fs-test.nc"
                return entries[i];
    }
    # 627 "/tmp/fs-test.nc"
    di=idx-(12+(512/sizeof(unsigned int )));
    # 628 "/tmp/fs-test.nc"
    idx1=di/(512/sizeof(unsigned int ));
    # 629 "/tmp/fs-test.nc"
    idx2=di%(512/sizeof(unsigned int ));
    # 631 "/tmp/fs-test.nc"
    dindirect_blk=ip->addrs[12+1];
    # 640 "/tmp/fs-test.nc"
    if(dindirect_blk==0) {
        # 633 "/tmp/fs-test.nc"
        nb_3=alloc_data_block();
        # 635 "/tmp/fs-test.nc"
        if(!nb_3) {
            # 634 "/tmp/fs-test.nc"
                        return 0;
        }
        # 635 "/tmp/fs-test.nc"
        ip->addrs[12+1]=nb_3;
        # 636 "/tmp/fs-test.nc"
        write_inode(inum,ip);
        # 637 "/tmp/fs-test.nc"
        dindirect_blk=nb_3;
    }
    # 640 "/tmp/fs-test.nc"
    unsigned char  firstbuf[512]  ;
    memset(&firstbuf, 0, sizeof(firstbuf));
    # 641 "/tmp/fs-test.nc"
    read_block(dindirect_blk,firstbuf);
    # 642 "/tmp/fs-test.nc"
    first_entries=(unsigned int* )firstbuf;
    # 643 "/tmp/fs-test.nc"
    first_blk=first_entries[idx1];
    # 652 "/tmp/fs-test.nc"
    if(first_blk==0) {
        # 645 "/tmp/fs-test.nc"
        nb_4=alloc_data_block();
        # 647 "/tmp/fs-test.nc"
        if(!nb_4) {
            # 646 "/tmp/fs-test.nc"
                        return 0;
        }
        # 647 "/tmp/fs-test.nc"
        first_entries[idx1]=nb_4;
        # 648 "/tmp/fs-test.nc"
        write_block(dindirect_blk,firstbuf);
        # 649 "/tmp/fs-test.nc"
        first_blk=nb_4;
    }
    # 652 "/tmp/fs-test.nc"
    unsigned char  secondbuf[512]  ;
    memset(&secondbuf, 0, sizeof(secondbuf));
    # 653 "/tmp/fs-test.nc"
    read_block(first_blk,secondbuf);
    # 654 "/tmp/fs-test.nc"
    second_entries=(unsigned int* )secondbuf;
    # 661 "/tmp/fs-test.nc"
    if(second_entries[idx2]==0) {
        # 656 "/tmp/fs-test.nc"
        db_5=alloc_data_block();
        # 658 "/tmp/fs-test.nc"
        if(!db_5) {
            # 657 "/tmp/fs-test.nc"
                        return 0;
        }
        # 658 "/tmp/fs-test.nc"
        second_entries[idx2]=db_5;
        # 659 "/tmp/fs-test.nc"
        write_block(first_blk,secondbuf);
    }
    # 661 "/tmp/fs-test.nc"
        return second_entries[idx2];
}

void read_data(struct dinode*  ip  , unsigned int  offset  , unsigned char*  buf  , unsigned int  size  )
{
    unsigned int  left  ;
    unsigned int  off  ;
    unsigned char*  dst  ;
    unsigned int  blk_idx  ;
    unsigned int  blk_off  ;
    unsigned int  to_read  ;
    unsigned int  disk_blk  ;
    memset(&left, 0, sizeof(left));
    memset(&off, 0, sizeof(off));
    memset(&dst, 0, sizeof(dst));
    memset(&blk_idx, 0, sizeof(blk_idx));
    memset(&blk_off, 0, sizeof(blk_off));
    memset(&to_read, 0, sizeof(to_read));
    memset(&disk_blk, 0, sizeof(disk_blk));
    # 665 "/tmp/fs-test.nc"
    left=size;
    # 666 "/tmp/fs-test.nc"
    off=offset;
    # 667 "/tmp/fs-test.nc"
    dst=buf;
    # 686 "/tmp/fs-test.nc"
    while(left>0) {
        # 670 "/tmp/fs-test.nc"
        blk_idx=off/512;
        # 671 "/tmp/fs-test.nc"
        blk_off=off%512;
        # 672 "/tmp/fs-test.nc"
        to_read=512-blk_off;
        # 675 "/tmp/fs-test.nc"
        if(to_read>left) {
            # 673 "/tmp/fs-test.nc"
            to_read=left;
        }
        # 675 "/tmp/fs-test.nc"
        disk_blk=inode_blockno(ip,blk_idx);
        # 682 "/tmp/fs-test.nc"
        if(disk_blk==0) {
            # 677 "/tmp/fs-test.nc"
            memset(dst,0,to_read);
        }
        else {
            # 679 "/tmp/fs-test.nc"
            read_block(disk_blk,block_buf);
            # 680 "/tmp/fs-test.nc"
            memcpy(dst,block_buf+blk_off,to_read);
        }
        # 682 "/tmp/fs-test.nc"
        left-=to_read;
        # 683 "/tmp/fs-test.nc"
        off+=to_read;
        # 684 "/tmp/fs-test.nc"
        dst+=to_read;
    }
}

unsigned int  dir_lookup(struct dinode*  parent  , const char* name)
{
    unsigned int  off  ;
    struct dirent*  de  ;
    int entries;
    int i;
    memset(&off, 0, sizeof(off));
    memset(&de, 0, sizeof(de));
    memset(&entries, 0, sizeof(entries));
    memset(&i, 0, sizeof(i));
    # 689 "/tmp/fs-test.nc"
    off=0;
    # 690 "/tmp/fs-test.nc"
    char namebuf[14+1];
    memset(&namebuf, 0, sizeof(namebuf));
    # 706 "/tmp/fs-test.nc"
    while(off<parent->size) {
        # 693 "/tmp/fs-test.nc"
        read_data(parent,off,block_buf,512);
        # 694 "/tmp/fs-test.nc"
        de=(struct dirent* )block_buf;
        # 695 "/tmp/fs-test.nc"
        entries=512/sizeof(struct dirent );
        # 704 "/tmp/fs-test.nc"
        for(i=0        ;i<entries;i++){
            # 698 "/tmp/fs-test.nc"
            if(de[i].inum==0) {
                # 697 "/tmp/fs-test.nc"
                continue;
            }
            # 698 "/tmp/fs-test.nc"
            memcpy(namebuf,de[i].name,14);
            # 699 "/tmp/fs-test.nc"
            namebuf[14]=0;
            # 703 "/tmp/fs-test.nc"
            if(strncmp(namebuf,name,14)==0) {
                # 701 "/tmp/fs-test.nc"
                                return de[i].inum;
            }
        }
        # 704 "/tmp/fs-test.nc"
        off+=512;
    }
    # 706 "/tmp/fs-test.nc"
        return 0;
}

unsigned int  path_lookup(const char* path)
{
    # 712 "/tmp/fs-test.nc"
        return path_lookup_lim(path,8);
}

static unsigned int  path_lookup_lim(const char* path, int depth)
{
    struct dinode  ipr  ;
    char* rest;
    char* tok;
    unsigned int  cur  ;
    unsigned int  next  ;
    struct dinode  nxt  ;
    int n;
    char* p;
    memset(&ipr, 0, sizeof(ipr));
    memset(&rest, 0, sizeof(rest));
    memset(&tok, 0, sizeof(tok));
    memset(&cur, 0, sizeof(cur));
    memset(&next, 0, sizeof(next));
    memset(&nxt, 0, sizeof(nxt));
    memset(&n, 0, sizeof(n));
    memset(&p, 0, sizeof(p));
    # 717 "/tmp/fs-test.nc"
    if(depth<=0) {
        # 716 "/tmp/fs-test.nc"
                return 0;
    }
    # 718 "/tmp/fs-test.nc"
    if(!path||path[0]!=47) {
        # 717 "/tmp/fs-test.nc"
                return 0;
    }
    # 720 "/tmp/fs-test.nc"
    if(strcmp(path,"/")==0) {
        # 718 "/tmp/fs-test.nc"
                return 1;
    }
    # 720 "/tmp/fs-test.nc"
    # 721 "/tmp/fs-test.nc"
    read_inode(1,&ipr);
    # 724 "/tmp/fs-test.nc"
    if(ipr.type!=1) {
        # 722 "/tmp/fs-test.nc"
                return 0;
    }
    # 724 "/tmp/fs-test.nc"
    char buf[256];
    memset(&buf, 0, sizeof(buf));
    # 725 "/tmp/fs-test.nc"
    strncpy(buf,path,sizeof(buf)-1);
    # 725 "/tmp/fs-test.nc"
    buf[sizeof(buf)-1]=0;
    # 726 "/tmp/fs-test.nc"
    rest=buf;
    # 727 "/tmp/fs-test.nc"
    # 728 "/tmp/fs-test.nc"
    cur=1;
    # 729 "/tmp/fs-test.nc"
    char prefix[256];
    memset(&prefix, 0, sizeof(prefix));
    # 729 "/tmp/fs-test.nc"
    prefix[0]=47;
    # 729 "/tmp/fs-test.nc"
    prefix[1]=0;
    # 777 "/tmp/fs-test.nc"
    while((tok=strtok(rest,"/"))!=((void*)0)) {
        # 732 "/tmp/fs-test.nc"
        rest=((void*)0);
        # 735 "/tmp/fs-test.nc"
        if(ipr.type!=1) {
            # 733 "/tmp/fs-test.nc"
                        return 0;
        }
        # 736 "/tmp/fs-test.nc"
        if(!check_perm(&ipr,1)) {
            # 735 "/tmp/fs-test.nc"
                        return 0;
        }
        # 736 "/tmp/fs-test.nc"
        next=dir_lookup(&ipr,tok);
        # 738 "/tmp/fs-test.nc"
        if(next==0) {
            # 737 "/tmp/fs-test.nc"
                        return 0;
        }
        # 738 "/tmp/fs-test.nc"
        # 738 "/tmp/fs-test.nc"
        read_inode(next,&nxt);
        # 772 "/tmp/fs-test.nc"
        if(nxt.type==3) {
            # 741 "/tmp/fs-test.nc"
            char lbuf[128];
            memset(&lbuf, 0, sizeof(lbuf));
            # 742 "/tmp/fs-test.nc"
            n=nxt.size;
            # 743 "/tmp/fs-test.nc"
            if(n>=(int)sizeof(lbuf)) {
                # 742 "/tmp/fs-test.nc"
                n=sizeof(lbuf)-1;
            }
            # 743 "/tmp/fs-test.nc"
            read_data(&nxt,0,(unsigned char* )lbuf,n);
            # 744 "/tmp/fs-test.nc"
            lbuf[n]=0;
            # 746 "/tmp/fs-test.nc"
            char remain[256];
            memset(&remain, 0, sizeof(remain));
            # 747 "/tmp/fs-test.nc"
            remain[0]=0;
            # 748 "/tmp/fs-test.nc"
            p=strtok(((void*)0),"/");
            # 754 "/tmp/fs-test.nc"
            while(p) {
                # 751 "/tmp/fs-test.nc"
                if(remain[0]) {
                    # 750 "/tmp/fs-test.nc"
                    strncat(remain,"/",sizeof(remain)-strlen(remain)-1);
                }
                # 751 "/tmp/fs-test.nc"
                strncat(remain,p,sizeof(remain)-strlen(remain)-1);
                # 752 "/tmp/fs-test.nc"
                p=strtok(((void*)0),"/");
            }
            # 754 "/tmp/fs-test.nc"
            char joined[256];
            memset(&joined, 0, sizeof(joined));
            # 765 "/tmp/fs-test.nc"
            if(lbuf[0]==47) {
                # 756 "/tmp/fs-test.nc"
                strncpy(joined,lbuf,sizeof(joined)-1);
                # 757 "/tmp/fs-test.nc"
                joined[sizeof(joined)-1]=0;
            }
            else {
                # 760 "/tmp/fs-test.nc"
                strncpy(joined,prefix,sizeof(joined)-1);
                # 761 "/tmp/fs-test.nc"
                joined[sizeof(joined)-1]=0;
                # 763 "/tmp/fs-test.nc"
                if(!(joined[0]==47&&joined[1]==0)) {
                    # 762 "/tmp/fs-test.nc"
                    strncat(joined,"/",sizeof(joined)-strlen(joined)-1);
                }
                # 763 "/tmp/fs-test.nc"
                strncat(joined,lbuf,sizeof(joined)-strlen(joined)-1);
            }
            # 769 "/tmp/fs-test.nc"
            if(remain[0]) {
                # 766 "/tmp/fs-test.nc"
                strncat(joined,"/",sizeof(joined)-strlen(joined)-1);
                # 767 "/tmp/fs-test.nc"
                strncat(joined,remain,sizeof(joined)-strlen(joined)-1);
            }
            # 769 "/tmp/fs-test.nc"
                        return path_lookup_lim(joined,depth-1);
        }
        # 772 "/tmp/fs-test.nc"
        cur=next;
        # 772 "/tmp/fs-test.nc"
        ipr=nxt;
        # 775 "/tmp/fs-test.nc"
        if(!(prefix[0]==47&&prefix[1]==0)) {
            # 774 "/tmp/fs-test.nc"
            strncat(prefix,"/",sizeof(prefix)-strlen(prefix)-1);
        }
        # 775 "/tmp/fs-test.nc"
        strncat(prefix,tok,sizeof(prefix)-strlen(prefix)-1);
    }
    # 777 "/tmp/fs-test.nc"
        return cur;
}

int fs_realpath(const char* path, char* out, int outsz)
{
    struct dinode  dir  ;
    int depth;
    int first;
    int n;
    unsigned int  next  ;
    struct dinode  nxt  ;
    int len;
    char* p;
    int l;
    int i;
    memset(&dir, 0, sizeof(dir));
    memset(&depth, 0, sizeof(depth));
    memset(&first, 0, sizeof(first));
    memset(&n, 0, sizeof(n));
    memset(&next, 0, sizeof(next));
    memset(&nxt, 0, sizeof(nxt));
    memset(&len, 0, sizeof(len));
    memset(&p, 0, sizeof(p));
    memset(&l, 0, sizeof(l));
    memset(&i, 0, sizeof(i));
    # 784 "/tmp/fs-test.nc"
    if(!out||outsz<=0) {
        # 783 "/tmp/fs-test.nc"
                return -1;
    }
    # 784 "/tmp/fs-test.nc"
    char abs[256];
    memset(&abs, 0, sizeof(abs));
    # 784 "/tmp/fs-test.nc"
    build_abs_normalized(abs,sizeof(abs),path);
    # 787 "/tmp/fs-test.nc"
    if(abs[0]!=47) {
        # 786 "/tmp/fs-test.nc"
                return -1;
    }
    # 788 "/tmp/fs-test.nc"
    if(strcmp(abs,"/")==0) {
        # 787 "/tmp/fs-test.nc"
        if(outsz>=2) {
            # 787 "/tmp/fs-test.nc"
            out[0]=47;
            # 787 "/tmp/fs-test.nc"
            out[1]=0;
            # 787 "/tmp/fs-test.nc"
                        return 0;
        }
        # 787 "/tmp/fs-test.nc"
                return -1;
    }
    # 788 "/tmp/fs-test.nc"
    # 788 "/tmp/fs-test.nc"
    read_inode(1,&dir);
    # 789 "/tmp/fs-test.nc"
    char buf[256];
    memset(&buf, 0, sizeof(buf));
    # 789 "/tmp/fs-test.nc"
    strncpy(buf,abs,sizeof(buf)-1);
    # 789 "/tmp/fs-test.nc"
    buf[sizeof(buf)-1]=0;
    # 790 "/tmp/fs-test.nc"
    char  *rest=buf,  **tok;
    memset(&tok, 0, sizeof(tok));
;
    # 791 "/tmp/fs-test.nc"
    depth=8;
    # 791 "/tmp/fs-test.nc"
    first=1;
    # 791 "/tmp/fs-test.nc"
    n=0;
    # 791 "/tmp/fs-test.nc"
    out[n++]=47;
    # 791 "/tmp/fs-test.nc"
    out[1]=0;
    # 819 "/tmp/fs-test.nc"
    while((tok=strtok(rest,"/"))!=((void*)0)) {
        # 793 "/tmp/fs-test.nc"
        rest=((void*)0);
        # 795 "/tmp/fs-test.nc"
        if(dir.type!=1) {
            # 794 "/tmp/fs-test.nc"
                        return -1;
        }
        # 796 "/tmp/fs-test.nc"
        if(!check_perm(&dir,1)) {
            # 795 "/tmp/fs-test.nc"
                        return -1;
        }
        # 796 "/tmp/fs-test.nc"
        next=dir_lookup(&dir,tok);
        # 798 "/tmp/fs-test.nc"
        if(!next) {
            # 797 "/tmp/fs-test.nc"
                        return -1;
        }
        # 798 "/tmp/fs-test.nc"
        # 798 "/tmp/fs-test.nc"
        read_inode(next,&nxt);
        # 813 "/tmp/fs-test.nc"
        if(nxt.type==3) {
            # 801 "/tmp/fs-test.nc"
            if(--depth<=0) {
                # 800 "/tmp/fs-test.nc"
                                return -1;
            }
            # 801 "/tmp/fs-test.nc"
            char lbuf[128];
            memset(&lbuf, 0, sizeof(lbuf));
            # 801 "/tmp/fs-test.nc"
            len=nxt.size;
            # 802 "/tmp/fs-test.nc"
            if(len>(int)sizeof(lbuf)-1) {
                # 801 "/tmp/fs-test.nc"
                len=sizeof(lbuf)-1;
            }
            # 802 "/tmp/fs-test.nc"
            read_data(&nxt,0,(unsigned char* )lbuf,len);
            # 802 "/tmp/fs-test.nc"
            lbuf[len]=0;
            # 803 "/tmp/fs-test.nc"
            char remain[256];
            memset(&remain, 0, sizeof(remain));
            # 803 "/tmp/fs-test.nc"
            remain[0]=0;
            # 803 "/tmp/fs-test.nc"
            p=strtok(((void*)0),"/");
            # 805 "/tmp/fs-test.nc"
            while(p) {
                # 804 "/tmp/fs-test.nc"
                if(remain[0]) {
                    # 804 "/tmp/fs-test.nc"
                    strncat(remain,"/",sizeof(remain)-strlen(remain)-1);
                }
                # 804 "/tmp/fs-test.nc"
                strncat(remain,p,sizeof(remain)-strlen(remain)-1);
                # 804 "/tmp/fs-test.nc"
                p=strtok(((void*)0),"/");
            }
            # 805 "/tmp/fs-test.nc"
            char joined[512];
            memset(&joined, 0, sizeof(joined));
            # 809 "/tmp/fs-test.nc"
            if(lbuf[0]==47) {
                # 805 "/tmp/fs-test.nc"
                strncpy(joined,lbuf,sizeof(joined)-1);
            }
            else {
                # 807 "/tmp/fs-test.nc"
                joined[0]=0;
                # 807 "/tmp/fs-test.nc"
                strncat(joined,out,sizeof(joined)-1);
                # 807 "/tmp/fs-test.nc"
                if(joined[strlen(joined)-1]!=47) {
                    # 807 "/tmp/fs-test.nc"
                    strncat(joined,"/",sizeof(joined)-strlen(joined)-1);
                }
                # 807 "/tmp/fs-test.nc"
                strncat(joined,lbuf,sizeof(joined)-strlen(joined)-1);
            }
            # 810 "/tmp/fs-test.nc"
            if(remain[0]) {
                # 809 "/tmp/fs-test.nc"
                if(joined[strlen(joined)-1]!=47) {
                    # 809 "/tmp/fs-test.nc"
                    strncat(joined,"/",sizeof(joined)-strlen(joined)-1);
                }
                # 809 "/tmp/fs-test.nc"
                strncat(joined,remain,sizeof(joined)-strlen(joined)-1);
            }
            # 810 "/tmp/fs-test.nc"
                        return fs_realpath(joined,out,outsz);
        }
        # 813 "/tmp/fs-test.nc"
        l=strlen(tok);
        # 815 "/tmp/fs-test.nc"
        if(n+l+1>=outsz) {
            # 814 "/tmp/fs-test.nc"
                        return -1;
        }
        # 816 "/tmp/fs-test.nc"
        if(!(n==1&&out[0]==47)) {
            # 815 "/tmp/fs-test.nc"
            out[n++]=47;
        }
        # 816 "/tmp/fs-test.nc"
        for(i=0        ;i<l;i++){
            # 816 "/tmp/fs-test.nc"
            out[n++]=tok[i];
        }
        # 816 "/tmp/fs-test.nc"
        out[n]=0;
        # 817 "/tmp/fs-test.nc"
        dir=nxt;
    }
    # 819 "/tmp/fs-test.nc"
        return 0;
}

void dump_inode(unsigned int  inum  )
{
    struct dinode  ip  ;
    int i;
    memset(&ip, 0, sizeof(ip));
    memset(&i, 0, sizeof(i));
    # 823 "/tmp/fs-test.nc"
    # 824 "/tmp/fs-test.nc"
    read_inode(inum,&ip);
    # 825 "/tmp/fs-test.nc"
    printf("== i-node %u ==\n",inum);
    # 826 "/tmp/fs-test.nc"
    printf("  type  = %u\n",ip.type);
    # 827 "/tmp/fs-test.nc"
    printf("  size  = %u\n",ip.size);
    # 828 "/tmp/fs-test.nc"
    printf("  addrs =");
    # 832 "/tmp/fs-test.nc"
    for(i=0    ;i<12;i++){
        # 831 "/tmp/fs-test.nc"
        if(ip.addrs[i]!=0) {
            # 830 "/tmp/fs-test.nc"
            printf(" %u",ip.addrs[i]);
        }
    }
    # 835 "/tmp/fs-test.nc"
    if(ip.addrs[12]!=0) {
        # 833 "/tmp/fs-test.nc"
        printf(" [indirect %u]",ip.addrs[12]);
    }
    # 838 "/tmp/fs-test.nc"
    if(ip.addrs[12+1]!=0) {
        # 836 "/tmp/fs-test.nc"
        printf(" [double-indirect %u]",ip.addrs[12+1]);
    }
    # 838 "/tmp/fs-test.nc"
    printf("\n");
}

static int owner_cap(struct file*  f  )
{
    # 847 "/tmp/fs-test.nc"
    (void)f;
    # 848 "/tmp/fs-test.nc"
        return 64;
}

static void owner_add(struct file*  f  , struct proc*  o  )
{
    # 852 "/tmp/fs-test.nc"
    if(!f||!o) {
        # 851 "/tmp/fs-test.nc"
                return;
    }
    # 852 "/tmp/fs-test.nc"
    neoc_file_owner_add(f,o);
}

static void owner_remove(struct file*  f  , struct proc*  o  )
{
    # 856 "/tmp/fs-test.nc"
    if(!f||!o) {
        # 855 "/tmp/fs-test.nc"
                return;
    }
    # 856 "/tmp/fs-test.nc"
    neoc_file_owner_remove(f,o);
}

void file_system_init()
{
    int i;
    struct spipe*  p  ;
    int i_6;
    struct file*  p_7  ;
    memset(&i, 0, sizeof(i));
    memset(&p, 0, sizeof(p));
    memset(&i_6, 0, sizeof(i_6));
    memset(&p_7, 0, sizeof(p_7));
    # 871 "/tmp/fs-test.nc"
    memset(gPipes,0,sizeof(struct spipe )*32);
    # 872 "/tmp/fs-test.nc"
    memset(gFiles,0,sizeof(struct file )*32);
    # 881 "/tmp/fs-test.nc"
    for(i=0    ;i<32;i++){
        # 875 "/tmp/fs-test.nc"
        p=&gPipes[i];
        # 877 "/tmp/fs-test.nc"
        p->free_next=gFreePipes;
        # 878 "/tmp/fs-test.nc"
        gFreePipes=p;
    }
    # 887 "/tmp/fs-test.nc"
    for(i_6=0    ;i_6<32;i_6++){
        # 882 "/tmp/fs-test.nc"
        p_7=&gFiles[i_6];
        # 884 "/tmp/fs-test.nc"
        p_7->free_next=gFreeFiles;
        # 885 "/tmp/fs-test.nc"
        gFreeFiles=p_7;
    }
}

struct spipe*  alloc_pipe()
{
    struct spipe*  p  ;
    void* linked_file_list;
    memset(&p, 0, sizeof(p));
    memset(&linked_file_list, 0, sizeof(linked_file_list));
    # 891 "/tmp/fs-test.nc"
    p=gFreePipes;
    # 892 "/tmp/fs-test.nc"
    linked_file_list=((p)?(p->linked_file_list):(((void*)0)));
    # 894 "/tmp/fs-test.nc"
    gFreePipes=gFreePipes->free_next;
    # 896 "/tmp/fs-test.nc"
    memset(p,0,sizeof(struct spipe ));
    # 897 "/tmp/fs-test.nc"
    p->linked_file_list=linked_file_list;
    # 899 "/tmp/fs-test.nc"
        return p;
}

void free_pipe(struct spipe*  p  )
{
    # 904 "/tmp/fs-test.nc"
    neoc_pipe_linked_file_clear(p);
    # 905 "/tmp/fs-test.nc"
    p->free_next=gFreePipes;
    # 906 "/tmp/fs-test.nc"
    gFreePipes=p;
}

struct file*  alloc_file()
{
    struct file*  p  ;
    void* owner_process_list;
    memset(&p, 0, sizeof(p));
    memset(&owner_process_list, 0, sizeof(owner_process_list));
    # 911 "/tmp/fs-test.nc"
    if(!gFreeFiles) {
        # 910 "/tmp/fs-test.nc"
                return ((void*)0);
    }
    # 911 "/tmp/fs-test.nc"
    p=gFreeFiles;
    # 912 "/tmp/fs-test.nc"
    owner_process_list=p->owner_process_list;
    # 913 "/tmp/fs-test.nc"
    gFreeFiles=gFreeFiles->free_next;
    # 914 "/tmp/fs-test.nc"
    memset(p,0,sizeof(*p));
    # 915 "/tmp/fs-test.nc"
    p->owner_process_list=owner_process_list;
    # 916 "/tmp/fs-test.nc"
        return p;
}

void free_file(struct file*  p  )
{
    # 922 "/tmp/fs-test.nc"
    neoc_file_owner_clear(p);
    # 923 "/tmp/fs-test.nc"
    p->free_next=gFreeFiles;
    # 924 "/tmp/fs-test.nc"
    gFreeFiles=p;
}

struct spipe*  pipealloc()
{
    struct spipe*  p  ;
    void* user_va;
    void* pa;
    memset(&p, 0, sizeof(p));
    memset(&user_va, 0, sizeof(user_va));
    memset(&pa, 0, sizeof(pa));
    # 932 "/tmp/fs-test.nc"
    p=(struct spipe* )alloc_pipe();
    # 935 "/tmp/fs-test.nc"
    if(p==0) {
        # 934 "/tmp/fs-test.nc"
                return 0;
    }
    # 935 "/tmp/fs-test.nc"
    p->nread=0;
    # 936 "/tmp/fs-test.nc"
    p->nwrite=0;
    # 937 "/tmp/fs-test.nc"
    p->read_open=1;
    # 938 "/tmp/fs-test.nc"
    p->write_open=1;
    # 939 "/tmp/fs-test.nc"
    p->used=0;
    # 940 "/tmp/fs-test.nc"
    p->num_linked_file=0;
    # 941 "/tmp/fs-test.nc"
    neoc_pipe_linked_file_clear(p);
    # 943 "/tmp/fs-test.nc"
    user_va=p;
    # 944 "/tmp/fs-test.nc"
    pa=p;
    # 946 "/tmp/fs-test.nc"
        return p;
}

struct file*  new_file_table()
{
    struct file*  result  ;
    memset(&result, 0, sizeof(result));
    # 953 "/tmp/fs-test.nc"
    result=(struct file* )alloc_file();
    # 956 "/tmp/fs-test.nc"
    if(!result) {
        # 954 "/tmp/fs-test.nc"
                return ((void*)0);
    }
    # 956 "/tmp/fs-test.nc"
    neoc_file_owner_clear(result);
    # 958 "/tmp/fs-test.nc"
    owner_add(result,gProc[gActiveProc]);
    # 960 "/tmp/fs-test.nc"
        return result;
}

void fs_init(struct file**  file_table  )
{
    # 965 "/tmp/fs-test.nc"
    memset(file_table,0,sizeof(struct file* )*32);
    # 967 "/tmp/fs-test.nc"
    file_table[0]=new_file_table();
    # 969 "/tmp/fs-test.nc"
    file_table[0]->kind=(0);
    # 970 "/tmp/fs-test.nc"
    file_table[0]->used=1;
    # 972 "/tmp/fs-test.nc"
    file_table[1]=new_file_table();
    # 974 "/tmp/fs-test.nc"
    file_table[1]->kind=(1);
    # 975 "/tmp/fs-test.nc"
    file_table[1]->used=1;
    # 977 "/tmp/fs-test.nc"
    file_table[2]=new_file_table();
    # 979 "/tmp/fs-test.nc"
    file_table[2]->kind=(2);
    # 980 "/tmp/fs-test.nc"
    file_table[2]->used=1;
}

int is_pipe(int fd)
{
    struct file**  file_table  ;
    memset(&file_table, 0, sizeof(file_table));
    # 985 "/tmp/fs-test.nc"
    file_table=get_current_file_table();
    # 995 "/tmp/fs-test.nc"
    if(fd<0||fd>=32) {
        # 994 "/tmp/fs-test.nc"
                return 0;
    }
    # 996 "/tmp/fs-test.nc"
    if(!file_table[fd]) {
        # 995 "/tmp/fs-test.nc"
                return 0;
    }
    # 998 "/tmp/fs-test.nc"
    if(!file_table[fd]->used) {
        # 996 "/tmp/fs-test.nc"
                return 0;
    }
    # 1001 "/tmp/fs-test.nc"
    if(file_table[fd]->kind==(4)&&file_table[fd]->pipe!=((void*)0)) {
        # 999 "/tmp/fs-test.nc"
                return 1;
    }
    # 1001 "/tmp/fs-test.nc"
        return 0;
}

int is_stdin(int fd)
{
    struct file**  file_table  ;
    memset(&file_table, 0, sizeof(file_table));
    # 1006 "/tmp/fs-test.nc"
    file_table=get_current_file_table();
    # 1013 "/tmp/fs-test.nc"
    if(file_table[fd]&&file_table[fd]->used) {
        # 1011 "/tmp/fs-test.nc"
        if(file_table[fd]->kind==(0)) {
            # 1009 "/tmp/fs-test.nc"
                        return 1;
        }
    }
    # 1013 "/tmp/fs-test.nc"
        return 0;
}

int is_stdout(int fd)
{
    struct file**  file_table  ;
    memset(&file_table, 0, sizeof(file_table));
    # 1018 "/tmp/fs-test.nc"
    file_table=get_current_file_table();
    # 1026 "/tmp/fs-test.nc"
    if(file_table[fd]&&file_table[fd]->used) {
        # 1024 "/tmp/fs-test.nc"
        if(file_table[fd]->kind==(1)) {
            # 1022 "/tmp/fs-test.nc"
                        return 1;
        }
    }
    # 1026 "/tmp/fs-test.nc"
        return 0;
}

int is_tty(int fd)
{
    struct file**  file_table  ;
    int k;
    memset(&file_table, 0, sizeof(file_table));
    memset(&k, 0, sizeof(k));
    # 1031 "/tmp/fs-test.nc"
    file_table=get_current_file_table();
    # 1033 "/tmp/fs-test.nc"
    if(fd<0||fd>=32) {
        # 1032 "/tmp/fs-test.nc"
                return 0;
    }
    # 1034 "/tmp/fs-test.nc"
    if(!file_table[fd]) {
        # 1033 "/tmp/fs-test.nc"
                return 0;
    }
    # 1034 "/tmp/fs-test.nc"
    k=file_table[fd]->kind;
    # 1035 "/tmp/fs-test.nc"
        return (k==(0)||k==(1)||k==(2)||k==(5));
}

void pipe_open(int* fd1, int* fd2)
{
    struct file**  file_table  ;
    struct spipe*  pip  ;
    int i;
    int i_8;
    memset(&file_table, 0, sizeof(file_table));
    memset(&pip, 0, sizeof(pip));
    memset(&i, 0, sizeof(i));
    memset(&i_8, 0, sizeof(i_8));
    # 1039 "/tmp/fs-test.nc"
    file_table=get_current_file_table();
    # 1041 "/tmp/fs-test.nc"
    pip=pipealloc();
    # 1064 "/tmp/fs-test.nc"
    for(i=3    ;i<32;i++){
        # 1063 "/tmp/fs-test.nc"
        if(file_table[i]==((void*)0)) {
            # 1045 "/tmp/fs-test.nc"
            file_table[i]=new_file_table();
            # 1047 "/tmp/fs-test.nc"
            file_table[i]->kind=(4);
            # 1048 "/tmp/fs-test.nc"
            file_table[i]->used=1;
            # 1049 "/tmp/fs-test.nc"
            file_table[i]->inum=-1;
            # 1050 "/tmp/fs-test.nc"
            file_table[i]->off=0;
            # 1051 "/tmp/fs-test.nc"
            file_table[i]->pipe=pip;
            # 1052 "/tmp/fs-test.nc"
            file_table[i]->read_pipe=1;
            # 1053 "/tmp/fs-test.nc"
            file_table[i]->write_pipe=0;
            # 1054 "/tmp/fs-test.nc"
            *fd1=i;
            # 1056 "/tmp/fs-test.nc"
            pip->used++;
            # 1057 "/tmp/fs-test.nc"
            neoc_pipe_linked_file_add(pip,file_table[i]);
            # 1058 "/tmp/fs-test.nc"
            pip->nreader++;
            # 1061 "/tmp/fs-test.nc"
            break;
        }
    }
    # 1086 "/tmp/fs-test.nc"
    for(i_8=3    ;i_8<32;i_8++){
        # 1085 "/tmp/fs-test.nc"
        if(file_table[i_8]==((void*)0)) {
            # 1066 "/tmp/fs-test.nc"
            file_table[i_8]=new_file_table();
            # 1068 "/tmp/fs-test.nc"
            file_table[i_8]->kind=(4);
            # 1069 "/tmp/fs-test.nc"
            file_table[i_8]->used=1;
            # 1070 "/tmp/fs-test.nc"
            file_table[i_8]->inum=-1;
            # 1072 "/tmp/fs-test.nc"
            file_table[i_8]->off=0;
            # 1073 "/tmp/fs-test.nc"
            file_table[i_8]->pipe=pip;
            # 1074 "/tmp/fs-test.nc"
            file_table[i_8]->write_pipe=1;
            # 1075 "/tmp/fs-test.nc"
            file_table[i_8]->read_pipe=0;
            # 1076 "/tmp/fs-test.nc"
            *fd2=i_8;
            # 1078 "/tmp/fs-test.nc"
            pip->used++;
            # 1079 "/tmp/fs-test.nc"
            neoc_pipe_linked_file_add(pip,file_table[i_8]);
            # 1080 "/tmp/fs-test.nc"
            pip->nwriter++;
            # 1083 "/tmp/fs-test.nc"
            break;
        }
    }
}

int piperead(int fd, char* addr, int n)
{
    struct file**  file_table  ;
    struct spipe*  p  ;
    volatile int j;
    volatile int i;
    memset(&file_table, 0, sizeof(file_table));
    memset(&p, 0, sizeof(p));
    memset(&j, 0, sizeof(j));
    memset(&i, 0, sizeof(i));
    # 1097 "/tmp/fs-test.nc"
    file_table=get_current_file_table();
    # 1103 "/tmp/fs-test.nc"
    if(file_table[fd]==((void*)0)) {
        # 1100 "/tmp/fs-test.nc"
        panic("piperead");
    }
    # 1106 "/tmp/fs-test.nc"
    if(fd<0||fd>=32) {
        # 1104 "/tmp/fs-test.nc"
        panic("piperead");
    }
    # 1106 "/tmp/fs-test.nc"
    p=file_table[fd]->pipe;
    # 1112 "/tmp/fs-test.nc"
    if(p==((void*)0)) {
        # 1109 "/tmp/fs-test.nc"
        panic("piperead");
    }
    # 1116 "/tmp/fs-test.nc"
    while(p->nread==p->nwrite&&p->write_open) {
        # 1113 "/tmp/fs-test.nc"
        yield();
    }
    # 1121 "/tmp/fs-test.nc"
    if(p->nread==p->nwrite&&!p->write_open) {
        # 1117 "/tmp/fs-test.nc"
                return 0;
    }
    # 1121 "/tmp/fs-test.nc"
    j=0;
    # 1140 "/tmp/fs-test.nc"
    for(i=0    ;i<n&&p->nread<p->nwrite;i++){
        # 1128 "/tmp/fs-test.nc"
        while(p->nread==p->nwrite&&p->write_open) {
            # 1124 "/tmp/fs-test.nc"
            yield();
        }
        # 1132 "/tmp/fs-test.nc"
        if(p->nread==p->nwrite&&!p->write_open) {
            # 1129 "/tmp/fs-test.nc"
            break;
        }
        # 1132 "/tmp/fs-test.nc"
        addr[i]=p->data[p->nread%512];
        # 1133 "/tmp/fs-test.nc"
        p->nread++;
        # 1136 "/tmp/fs-test.nc"
        j++;
    }
    # 1140 "/tmp/fs-test.nc"
        return j;
}

int pipewrite(int fd, char* addr, int n)
{
    struct file**  file_table  ;
    struct spipe*  p  ;
    volatile int i;
    memset(&file_table, 0, sizeof(file_table));
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    # 1147 "/tmp/fs-test.nc"
    file_table=get_current_file_table();
    # 1153 "/tmp/fs-test.nc"
    if(file_table[fd]==((void*)0)) {
        # 1150 "/tmp/fs-test.nc"
        panic("pipewrite");
    }
    # 1156 "/tmp/fs-test.nc"
    if(fd<0||fd>=32) {
        # 1154 "/tmp/fs-test.nc"
        panic("pipewrite");
    }
    # 1156 "/tmp/fs-test.nc"
    p=file_table[fd]->pipe;
    # 1162 "/tmp/fs-test.nc"
    if(p==((void*)0)) {
        # 1159 "/tmp/fs-test.nc"
        panic("pipewrite");
    }
    # 1180 "/tmp/fs-test.nc"
    for(i=0    ;i<n;i++){
        # 1168 "/tmp/fs-test.nc"
        while(p->nwrite-p->nread==512&&p->read_open) {
            # 1165 "/tmp/fs-test.nc"
            yield();
        }
        # 1172 "/tmp/fs-test.nc"
        if(!p->read_open) {
            # 1170 "/tmp/fs-test.nc"
                        return (((i>0))?(i):(-1));
        }
        # 1172 "/tmp/fs-test.nc"
        p->data[p->nwrite%512]=addr[i];
        # 1173 "/tmp/fs-test.nc"
        p->nwrite++;
    }
    # 1180 "/tmp/fs-test.nc"
        return n;
}

static int path_parent_lookup_abs(const char* path, unsigned int*  parent_inum  , char* leafname)
{
    char* save;
    char* last;
    char* tok;
    unsigned int  cur  ;
    struct dinode  ip  ;
    char* nexttok;
    unsigned int  next_inum  ;
    int n;
    int i;
    memset(&save, 0, sizeof(save));
    memset(&last, 0, sizeof(last));
    memset(&tok, 0, sizeof(tok));
    memset(&cur, 0, sizeof(cur));
    memset(&ip, 0, sizeof(ip));
    memset(&nexttok, 0, sizeof(nexttok));
    memset(&next_inum, 0, sizeof(next_inum));
    memset(&n, 0, sizeof(n));
    memset(&i, 0, sizeof(i));
    # 1195 "/tmp/fs-test.nc"
    if(!path||path[0]!=47) {
        # 1194 "/tmp/fs-test.nc"
                return 0;
    }
    # 1198 "/tmp/fs-test.nc"
    if(strcmp(path,"/")==0) {
        # 1195 "/tmp/fs-test.nc"
                return 0;
    }
    # 1198 "/tmp/fs-test.nc"
    char copy[strlen(path)+1];
    memset(&copy, 0, sizeof(copy));
    # 1199 "/tmp/fs-test.nc"
    strncpy(copy,path,sizeof(copy));
    # 1202 "/tmp/fs-test.nc"
    save=copy;
    # 1203 "/tmp/fs-test.nc"
    last=((void*)0);
    # 1204 "/tmp/fs-test.nc"
    tok=strtok(save,"/");
    # 1205 "/tmp/fs-test.nc"
    cur=1;
    # 1206 "/tmp/fs-test.nc"
    # 1207 "/tmp/fs-test.nc"
    read_inode(cur,&ip);
    # 1225 "/tmp/fs-test.nc"
    while(tok) {
        # 1210 "/tmp/fs-test.nc"
        nexttok=strtok(((void*)0),"/");
        # 1217 "/tmp/fs-test.nc"
        if(!nexttok) {
            # 1213 "/tmp/fs-test.nc"
            last=tok;
            # 1214 "/tmp/fs-test.nc"
            break;
        }
        # 1218 "/tmp/fs-test.nc"
        if(ip.type!=1) {
            # 1217 "/tmp/fs-test.nc"
                        return 0;
        }
        # 1218 "/tmp/fs-test.nc"
        next_inum=dir_lookup(&ip,tok);
        # 1220 "/tmp/fs-test.nc"
        if(next_inum==0) {
            # 1219 "/tmp/fs-test.nc"
                        return 0;
        }
        # 1220 "/tmp/fs-test.nc"
        read_inode(next_inum,&ip);
        # 1221 "/tmp/fs-test.nc"
        cur=next_inum;
        # 1222 "/tmp/fs-test.nc"
        tok=nexttok;
    }
    # 1226 "/tmp/fs-test.nc"
    if(!last) {
        # 1225 "/tmp/fs-test.nc"
                return 0;
    }
    # 1226 "/tmp/fs-test.nc"
    *parent_inum=cur;
    # 1228 "/tmp/fs-test.nc"
    n=strlen(last);
    # 1230 "/tmp/fs-test.nc"
    if(n>14) {
        # 1229 "/tmp/fs-test.nc"
        n=14;
    }
    # 1231 "/tmp/fs-test.nc"
    for(i=0    ;i<14;i++){
        # 1230 "/tmp/fs-test.nc"
        leafname[i]=0;
    }
    # 1231 "/tmp/fs-test.nc"
    strncpy(leafname,last,n);
    # 1232 "/tmp/fs-test.nc"
        return 1;
}

static unsigned int  alloc_inode_T_FILE()
{
    struct dinode  di  ;
    unsigned int  inum  ;
    struct dinode  newi  ;
    memset(&di, 0, sizeof(di));
    memset(&inum, 0, sizeof(inum));
    memset(&newi, 0, sizeof(newi));
    # 1239 "/tmp/fs-test.nc"
    # 1254 "/tmp/fs-test.nc"
    for(inum=1    ;inum<=sb.ninodes;inum++){
        # 1241 "/tmp/fs-test.nc"
        read_inode(inum,&di);
        # 1253 "/tmp/fs-test.nc"
        if(di.type==0) {
            # 1244 "/tmp/fs-test.nc"
            # 1245 "/tmp/fs-test.nc"
            memset(&newi,0,sizeof(newi));
            # 1246 "/tmp/fs-test.nc"
            newi.type=2;
            # 1247 "/tmp/fs-test.nc"
            newi.nlink=1;
            # 1248 "/tmp/fs-test.nc"
            newi.size=0;
            # 1249 "/tmp/fs-test.nc"
            newi.mode=0644;
            # 1249 "/tmp/fs-test.nc"
            newi.uid=0;
            # 1249 "/tmp/fs-test.nc"
            newi.gid=0;
            # 1249 "/tmp/fs-test.nc"
            newi.atime=newi.mtime=newi.ctime=fs_now();
            # 1250 "/tmp/fs-test.nc"
            write_inode(inum,&newi);
            # 1251 "/tmp/fs-test.nc"
                        return inum;
        }
    }
    # 1254 "/tmp/fs-test.nc"
        return 0;
}

static int add_dirent(unsigned int  parent_inum  , const char* name, unsigned int  child_inum  )
{
    struct dinode  pdi  ;
    struct dirent  de  ;
    int i;
    unsigned int  off  ;
    struct dirent*  ents  ;
    int entries;
    int i_9;
    unsigned int  blk_idx  ;
    unsigned int  disk_blk  ;
    unsigned int  cur_entries  ;
    unsigned int  abs_idx  ;
    unsigned int  block_end  ;
    unsigned int  idx  ;
    unsigned int  blk_idx_10  ;
    unsigned int  blk_off  ;
    unsigned int  disk_blk_11  ;
    struct dirent*  ents_12  ;
    unsigned int  block_end_13  ;
    memset(&pdi, 0, sizeof(pdi));
    memset(&de, 0, sizeof(de));
    memset(&i, 0, sizeof(i));
    memset(&off, 0, sizeof(off));
    memset(&ents, 0, sizeof(ents));
    memset(&entries, 0, sizeof(entries));
    memset(&i_9, 0, sizeof(i_9));
    memset(&blk_idx, 0, sizeof(blk_idx));
    memset(&disk_blk, 0, sizeof(disk_blk));
    memset(&cur_entries, 0, sizeof(cur_entries));
    memset(&abs_idx, 0, sizeof(abs_idx));
    memset(&block_end, 0, sizeof(block_end));
    memset(&idx, 0, sizeof(idx));
    memset(&blk_idx_10, 0, sizeof(blk_idx_10));
    memset(&blk_off, 0, sizeof(blk_off));
    memset(&disk_blk_11, 0, sizeof(disk_blk_11));
    memset(&ents_12, 0, sizeof(ents_12));
    memset(&block_end_13, 0, sizeof(block_end_13));
    # 1263 "/tmp/fs-test.nc"
    if(!name||name[0]==0) {
        # 1261 "/tmp/fs-test.nc"
                return -1;
    }
    # 1263 "/tmp/fs-test.nc"
    # 1264 "/tmp/fs-test.nc"
    read_inode(parent_inum,&pdi);
    # 1268 "/tmp/fs-test.nc"
    if(pdi.type!=1) {
        # 1265 "/tmp/fs-test.nc"
                return -1;
    }
    # 1268 "/tmp/fs-test.nc"
    # 1269 "/tmp/fs-test.nc"
    de.inum=(unsigned short int )child_inum;
    # 1272 "/tmp/fs-test.nc"
    for(i=0    ;i<14;i++){
        # 1271 "/tmp/fs-test.nc"
        de.name[i]=0;
    }
    # 1272 "/tmp/fs-test.nc"
    strncpy(de.name,name,14);
    # 1275 "/tmp/fs-test.nc"
    off=0;
    # 1305 "/tmp/fs-test.nc"
    while(off<pdi.size) {
        # 1277 "/tmp/fs-test.nc"
        read_data(&pdi,off,block_buf,512);
        # 1278 "/tmp/fs-test.nc"
        ents=(struct dirent* )block_buf;
        # 1279 "/tmp/fs-test.nc"
        entries=512/sizeof(struct dirent );
        # 1301 "/tmp/fs-test.nc"
        for(i_9=0        ;i_9<entries;i_9++){
            # 1300 "/tmp/fs-test.nc"
            if(ents[i_9].inum==0) {
                # 1282 "/tmp/fs-test.nc"
                ents[i_9]=de;
                # 1284 "/tmp/fs-test.nc"
                blk_idx=(off/512);
                # 1285 "/tmp/fs-test.nc"
                disk_blk=inode_bmap_alloc(parent_inum,&pdi,blk_idx);
                # 1287 "/tmp/fs-test.nc"
                if(!disk_blk) {
                    # 1286 "/tmp/fs-test.nc"
                                        return -1;
                }
                # 1287 "/tmp/fs-test.nc"
                write_block(disk_blk,(unsigned char* )ents);
                # 1290 "/tmp/fs-test.nc"
                cur_entries=pdi.size/(unsigned int )sizeof(struct dirent );
                # 1291 "/tmp/fs-test.nc"
                abs_idx=(off/(unsigned int )sizeof(struct dirent ))+(unsigned int )i_9;
                # 1298 "/tmp/fs-test.nc"
                if(abs_idx>=cur_entries) {
                    # 1293 "/tmp/fs-test.nc"
                    block_end=((off/512)+1)*512;
                    # 1295 "/tmp/fs-test.nc"
                    if(pdi.size<block_end) {
                        # 1294 "/tmp/fs-test.nc"
                        pdi.size=block_end;
                    }
                    # 1295 "/tmp/fs-test.nc"
                    pdi.mtime=fs_now();
                    # 1296 "/tmp/fs-test.nc"
                    write_inode(parent_inum,&pdi);
                }
                # 1298 "/tmp/fs-test.nc"
                                return 0;
            }
        }
        # 1301 "/tmp/fs-test.nc"
        off+=512;
    }
    # 1305 "/tmp/fs-test.nc"
    idx=pdi.size/sizeof(struct dirent );
    # 1306 "/tmp/fs-test.nc"
    blk_idx_10=(idx*sizeof(struct dirent ))/512;
    # 1307 "/tmp/fs-test.nc"
    blk_off=(idx*sizeof(struct dirent ))%512;
    # 1308 "/tmp/fs-test.nc"
    disk_blk_11=inode_bmap_alloc(parent_inum,&pdi,blk_idx_10);
    # 1311 "/tmp/fs-test.nc"
    if(!disk_blk_11) {
        # 1309 "/tmp/fs-test.nc"
                return -1;
    }
    # 1311 "/tmp/fs-test.nc"
    unsigned char  buf[512]  ;
    memset(&buf, 0, sizeof(buf));
    # 1312 "/tmp/fs-test.nc"
    read_block(disk_blk_11,buf);
    # 1313 "/tmp/fs-test.nc"
    ents_12=(struct dirent* )buf;
    # 1314 "/tmp/fs-test.nc"
    ents_12[(blk_off/sizeof(struct dirent ))]=de;
    # 1315 "/tmp/fs-test.nc"
    write_block(disk_blk_11,buf);
    # 1317 "/tmp/fs-test.nc"
    block_end_13=(blk_idx_10+1)*512;
    # 1319 "/tmp/fs-test.nc"
    if(pdi.size<block_end_13) {
        # 1318 "/tmp/fs-test.nc"
        pdi.size=block_end_13;
    }
    # 1319 "/tmp/fs-test.nc"
    pdi.mtime=fs_now();
    # 1320 "/tmp/fs-test.nc"
    write_inode(parent_inum,&pdi);
    # 1321 "/tmp/fs-test.nc"
        return 0;
}

static int remove_dirent(unsigned int  parent_inum  , const char* name)
{
    struct dinode  pdi  ;
    unsigned int  off  ;
    struct dirent*  de  ;
    int entries;
    int i;
    memset(&pdi, 0, sizeof(pdi));
    memset(&off, 0, sizeof(off));
    memset(&de, 0, sizeof(de));
    memset(&entries, 0, sizeof(entries));
    memset(&i, 0, sizeof(i));
    # 1327 "/tmp/fs-test.nc"
    # 1328 "/tmp/fs-test.nc"
    read_inode(parent_inum,&pdi);
    # 1331 "/tmp/fs-test.nc"
    if(pdi.type!=1) {
        # 1329 "/tmp/fs-test.nc"
                return -1;
    }
    # 1331 "/tmp/fs-test.nc"
    off=0;
    # 1332 "/tmp/fs-test.nc"
    char namebuf[14+1];
    memset(&namebuf, 0, sizeof(namebuf));
    # 1351 "/tmp/fs-test.nc"
    while(off<pdi.size) {
        # 1334 "/tmp/fs-test.nc"
        read_block(inode_bmap_alloc(parent_inum,&pdi,off/512),block_buf);
        # 1335 "/tmp/fs-test.nc"
        de=(struct dirent* )block_buf;
        # 1336 "/tmp/fs-test.nc"
        entries=512/sizeof(struct dirent );
        # 1349 "/tmp/fs-test.nc"
        for(i=0        ;i<entries;i++){
            # 1339 "/tmp/fs-test.nc"
            if(de[i].inum==0) {
                # 1338 "/tmp/fs-test.nc"
                continue;
            }
            # 1339 "/tmp/fs-test.nc"
            memcpy(namebuf,de[i].name,14);
            # 1340 "/tmp/fs-test.nc"
            namebuf[14]=0;
            # 1348 "/tmp/fs-test.nc"
            if(strncmp(namebuf,name,14)==0) {
                # 1342 "/tmp/fs-test.nc"
                de[i].inum=0;
                # 1343 "/tmp/fs-test.nc"
                write_block(inode_bmap_alloc(parent_inum,&pdi,off/512),block_buf);
                # 1344 "/tmp/fs-test.nc"
                pdi.mtime=fs_now();
                # 1345 "/tmp/fs-test.nc"
                write_inode(parent_inum,&pdi);
                # 1346 "/tmp/fs-test.nc"
                                return 0;
            }
        }
        # 1349 "/tmp/fs-test.nc"
        off+=512;
    }
    # 1351 "/tmp/fs-test.nc"
        return -1;
}

static void build_abs_normalized(char* out, unsigned long  int  outsz  , const char* path)
{
    struct proc*  p  ;
    int n;
    const char* tok_start;
    int compn;
    int len;
    int llen;
    int i;
    int i_14;
    int pos;
    int i_15;
    int need;
    int j;
    memset(&p, 0, sizeof(p));
    memset(&n, 0, sizeof(n));
    memset(&tok_start, 0, sizeof(tok_start));
    memset(&compn, 0, sizeof(compn));
    memset(&len, 0, sizeof(len));
    memset(&llen, 0, sizeof(llen));
    memset(&i, 0, sizeof(i));
    memset(&i_14, 0, sizeof(i_14));
    memset(&pos, 0, sizeof(pos));
    memset(&i_15, 0, sizeof(i_15));
    memset(&need, 0, sizeof(need));
    memset(&j, 0, sizeof(j));
    # 1357 "/tmp/fs-test.nc"
    p=gProc[gActiveProc];
    # 1358 "/tmp/fs-test.nc"
    char merged[256];
    memset(&merged, 0, sizeof(merged));
    # 1374 "/tmp/fs-test.nc"
    if(path&&path[0]==47) {
        # 1360 "/tmp/fs-test.nc"
        strncpy(merged,path,sizeof(merged)-1);
        # 1361 "/tmp/fs-test.nc"
        merged[sizeof(merged)-1]=0;
    }
    else {
        # 1364 "/tmp/fs-test.nc"
        strncpy(merged,p->cwd,sizeof(merged)-1);
        # 1365 "/tmp/fs-test.nc"
        merged[sizeof(merged)-1]=0;
        # 1366 "/tmp/fs-test.nc"
        n=strlen(merged);
        # 1370 "/tmp/fs-test.nc"
        if(!(n==1&&merged[0]==47)) {
            # 1369 "/tmp/fs-test.nc"
            if(n<(int)sizeof(merged)-1) {
                # 1368 "/tmp/fs-test.nc"
                merged[n++]=47;
                # 1368 "/tmp/fs-test.nc"
                merged[n]=0;
            }
        }
        # 1371 "/tmp/fs-test.nc"
        if(path&&path[0]) {
            # 1370 "/tmp/fs-test.nc"
            strncat(merged,path,sizeof(merged)-strlen(merged)-1);
        }
    }
    # 1374 "/tmp/fs-test.nc"
    char tmp[256];
    memset(&tmp, 0, sizeof(tmp));
    # 1375 "/tmp/fs-test.nc"
    strncpy(tmp,merged,sizeof(tmp)-1);
    # 1376 "/tmp/fs-test.nc"
    tmp[sizeof(tmp)-1]=0;
    # 1377 "/tmp/fs-test.nc"
    const char* s=tmp;
    # 1378 "/tmp/fs-test.nc"
    const char* end=tmp+strlen(tmp);
    # 1379 "/tmp/fs-test.nc"
    # 1380 "/tmp/fs-test.nc"
    char comps[32][14+1];
    memset(&comps, 0, sizeof(comps));
    # 1381 "/tmp/fs-test.nc"
    compn=0;
    # 1402 "/tmp/fs-test.nc"
    while(s<end) {
        # 1384 "/tmp/fs-test.nc"
        while(*s==47) {
            # 1383 "/tmp/fs-test.nc"
            s++;
        }
        # 1385 "/tmp/fs-test.nc"
        if(*s==0) {
            # 1384 "/tmp/fs-test.nc"
            break;
        }
        # 1385 "/tmp/fs-test.nc"
        tok_start=s;
        # 1387 "/tmp/fs-test.nc"
        while(*s&&*s!=47) {
            # 1386 "/tmp/fs-test.nc"
            s++;
        }
        # 1387 "/tmp/fs-test.nc"
        len=s-tok_start;
        # 1400 "/tmp/fs-test.nc"
        if(len==1&&tok_start[0]==46) {
        }
        else if(len==2&&tok_start[0]==46&&tok_start[1]==46) {
            # 1392 "/tmp/fs-test.nc"
            if(compn>0) {
                # 1391 "/tmp/fs-test.nc"
                compn--;
            }
        }
        else if(len>0) {
            # 1393 "/tmp/fs-test.nc"
            llen=len;
            # 1395 "/tmp/fs-test.nc"
            if(llen>14) {
                # 1394 "/tmp/fs-test.nc"
                llen=14;
            }
            # 1396 "/tmp/fs-test.nc"
            for(i=0            ;i<14+1;i++){
                # 1395 "/tmp/fs-test.nc"
                comps[compn][i]=0;
            }
            # 1397 "/tmp/fs-test.nc"
            for(i_14=0            ;i_14<llen;i_14++){
                # 1396 "/tmp/fs-test.nc"
                comps[compn][i_14]=tok_start[i_14];
            }
            # 1397 "/tmp/fs-test.nc"
            comps[compn][llen]=0;
            # 1399 "/tmp/fs-test.nc"
            if(compn<31) {
                # 1398 "/tmp/fs-test.nc"
                compn++;
            }
        }
    }
    # 1402 "/tmp/fs-test.nc"
    pos=0;
    # 1404 "/tmp/fs-test.nc"
    if(outsz>0) {
        # 1403 "/tmp/fs-test.nc"
        out[pos++]=47;
    }
    # 1410 "/tmp/fs-test.nc"
    for(i_15=0    ;i_15<compn;i_15++){
        # 1405 "/tmp/fs-test.nc"
        need=(((i_15)?(1):(0)))+strlen(comps[i_15]);
        # 1407 "/tmp/fs-test.nc"
        if((unsigned long  int )pos+need>=outsz) {
            # 1406 "/tmp/fs-test.nc"
            break;
        }
        # 1408 "/tmp/fs-test.nc"
        if(i_15) {
            # 1407 "/tmp/fs-test.nc"
            out[pos++]=47;
        }
        # 1409 "/tmp/fs-test.nc"
        for(j=0        ;comps[i_15][j]&&(unsigned long  int )pos<outsz-1;j++){
            # 1408 "/tmp/fs-test.nc"
            out[pos++]=comps[i_15][j];
        }
    }
    # 1416 "/tmp/fs-test.nc"
    if(pos==0) {
        # 1413 "/tmp/fs-test.nc"
        if(outsz>=2) {
            # 1411 "/tmp/fs-test.nc"
            out[0]=47;
            # 1411 "/tmp/fs-test.nc"
            out[1]=0;
        }
        else if(outsz>=1) {
            # 1412 "/tmp/fs-test.nc"
            out[0]=0;
        }
    }
    else {
        # 1414 "/tmp/fs-test.nc"
        out[pos]=0;
    }
}

int fs_mkdir(const char* path, int mode)
{
    unsigned int  parent  ;
    int i;
    struct dinode  pdi  ;
    struct dinode  di  ;
    unsigned int  inum  ;
    unsigned int  i_16  ;
    struct dinode  newi  ;
    unsigned short int um;
    struct dinode  pdi_inh  ;
    memset(&parent, 0, sizeof(parent));
    memset(&i, 0, sizeof(i));
    memset(&pdi, 0, sizeof(pdi));
    memset(&di, 0, sizeof(di));
    memset(&inum, 0, sizeof(inum));
    memset(&i_16, 0, sizeof(i_16));
    memset(&newi, 0, sizeof(newi));
    memset(&um, 0, sizeof(um));
    memset(&pdi_inh, 0, sizeof(pdi_inh));
    # 1421 "/tmp/fs-test.nc"
    (void)mode;
    # 1422 "/tmp/fs-test.nc"
    char abs[128];
    memset(&abs, 0, sizeof(abs));
    # 1423 "/tmp/fs-test.nc"
    build_abs_normalized(abs,sizeof(abs),path);
    # 1427 "/tmp/fs-test.nc"
    if(strcmp(abs,"/")==0) {
        # 1424 "/tmp/fs-test.nc"
                return -1;
    }
    # 1430 "/tmp/fs-test.nc"
    if(path_lookup(abs)!=0) {
        # 1427 "/tmp/fs-test.nc"
                return -1;
    }
    # 1430 "/tmp/fs-test.nc"
    # 1431 "/tmp/fs-test.nc"
    char leaf[14+1];
    memset(&leaf, 0, sizeof(leaf));
    # 1432 "/tmp/fs-test.nc"
    for(i=0    ;i<14+1;i++){
        # 1431 "/tmp/fs-test.nc"
        leaf[i]=0;
    }
    # 1434 "/tmp/fs-test.nc"
    if(!path_parent_lookup_abs(abs,&parent,leaf)) {
        # 1432 "/tmp/fs-test.nc"
                return -1;
    }
    # 1434 "/tmp/fs-test.nc"
    # 1434 "/tmp/fs-test.nc"
    read_inode(parent,&pdi);
    # 1436 "/tmp/fs-test.nc"
    if(!check_perm(&pdi,2|1)) {
        # 1435 "/tmp/fs-test.nc"
                return -1;
    }
    # 1439 "/tmp/fs-test.nc"
    if(leaf[0]==0) {
        # 1436 "/tmp/fs-test.nc"
                return -1;
    }
    # 1439 "/tmp/fs-test.nc"
    # 1440 "/tmp/fs-test.nc"
    inum=0;
    # 1445 "/tmp/fs-test.nc"
    for(i_16=1    ;i_16<=sb.ninodes;i_16++){
        # 1442 "/tmp/fs-test.nc"
        read_inode(i_16,&di);
        # 1444 "/tmp/fs-test.nc"
        if(di.type==0) {
            # 1443 "/tmp/fs-test.nc"
            inum=i_16;
            # 1443 "/tmp/fs-test.nc"
            break;
        }
    }
    # 1446 "/tmp/fs-test.nc"
    if(!inum) {
        # 1445 "/tmp/fs-test.nc"
                return -1;
    }
    # 1446 "/tmp/fs-test.nc"
    # 1446 "/tmp/fs-test.nc"
    memset(&newi,0,sizeof(newi));
    # 1447 "/tmp/fs-test.nc"
    newi.type=1;
    # 1447 "/tmp/fs-test.nc"
    newi.nlink=1;
    # 1447 "/tmp/fs-test.nc"
    newi.size=0;
    # 1447 "/tmp/fs-test.nc"
    newi.mtime=fs_now();
    # 1447 "/tmp/fs-test.nc"
    newi.ctime=newi.mtime;
    # 1449 "/tmp/fs-test.nc"
    um=gProc[gActiveProc]->umask;
    # 1450 "/tmp/fs-test.nc"
    # 1450 "/tmp/fs-test.nc"
    read_inode(parent,&pdi_inh);
    # 1451 "/tmp/fs-test.nc"
    newi.atime=newi.mtime;
    # 1451 "/tmp/fs-test.nc"
    newi.uid=gProc[gActiveProc]->uid;
    # 1452 "/tmp/fs-test.nc"
    newi.gid=(((pdi_inh.mode&02000))?(pdi_inh.gid):(gProc[gActiveProc]->gid));
    # 1453 "/tmp/fs-test.nc"
    newi.mode=((((mode)?((mode&0777)):(0755)))&~um);
    # 1455 "/tmp/fs-test.nc"
    if(pdi_inh.mode&02000) {
        # 1454 "/tmp/fs-test.nc"
        newi.mode|=02000;
    }
    # 1455 "/tmp/fs-test.nc"
    write_inode(inum,&newi);
    # 1458 "/tmp/fs-test.nc"
    if(add_dirent(parent,leaf,inum)!=0) {
        # 1457 "/tmp/fs-test.nc"
                return -1;
    }
    # 1458 "/tmp/fs-test.nc"
        return 0;
}

int fs_rmdir(const char* path)
{
    unsigned int  inum  ;
    struct dinode  di  ;
    unsigned int  off  ;
    int has_entries;
    struct dirent*  de  ;
    int entries;
    int i;
    unsigned int  parent  ;
    int i_17;
    struct dinode  pdi2  ;
    struct dinode  zero  ;
    memset(&inum, 0, sizeof(inum));
    memset(&di, 0, sizeof(di));
    memset(&off, 0, sizeof(off));
    memset(&has_entries, 0, sizeof(has_entries));
    memset(&de, 0, sizeof(de));
    memset(&entries, 0, sizeof(entries));
    memset(&i, 0, sizeof(i));
    memset(&parent, 0, sizeof(parent));
    memset(&i_17, 0, sizeof(i_17));
    memset(&pdi2, 0, sizeof(pdi2));
    memset(&zero, 0, sizeof(zero));
    # 1464 "/tmp/fs-test.nc"
    char abs[128];
    memset(&abs, 0, sizeof(abs));
    # 1465 "/tmp/fs-test.nc"
    build_abs_normalized(abs,sizeof(abs),path);
    # 1468 "/tmp/fs-test.nc"
    if(strcmp(abs,"/")==0) {
        # 1466 "/tmp/fs-test.nc"
                return -1;
    }
    # 1468 "/tmp/fs-test.nc"
    inum=path_lookup(abs);
    # 1470 "/tmp/fs-test.nc"
    if(inum==0) {
        # 1469 "/tmp/fs-test.nc"
                return -1;
    }
    # 1470 "/tmp/fs-test.nc"
    # 1470 "/tmp/fs-test.nc"
    read_inode(inum,&di);
    # 1473 "/tmp/fs-test.nc"
    if(di.type!=1) {
        # 1471 "/tmp/fs-test.nc"
                return -1;
    }
    # 1487 "/tmp/fs-test.nc"
    if(di.size!=0) {
        # 1475 "/tmp/fs-test.nc"
        off=0;
        # 1475 "/tmp/fs-test.nc"
        has_entries=0;
        # 1484 "/tmp/fs-test.nc"
        while(off<di.size) {
            # 1477 "/tmp/fs-test.nc"
            read_data(&di,off,block_buf,512);
            # 1478 "/tmp/fs-test.nc"
            de=(struct dirent* )block_buf;
            # 1479 "/tmp/fs-test.nc"
            entries=512/sizeof(struct dirent );
            # 1481 "/tmp/fs-test.nc"
            for(i=0            ;i<entries;i++){
                # 1481 "/tmp/fs-test.nc"
                if(de[i].inum) {
                    # 1480 "/tmp/fs-test.nc"
                    has_entries=1;
                    # 1480 "/tmp/fs-test.nc"
                    break;
                }
            }
            # 1482 "/tmp/fs-test.nc"
            if(has_entries) {
                # 1481 "/tmp/fs-test.nc"
                break;
            }
            # 1482 "/tmp/fs-test.nc"
            off+=512;
        }
        # 1485 "/tmp/fs-test.nc"
        if(has_entries) {
            # 1484 "/tmp/fs-test.nc"
                        return -1;
        }
    }
    # 1487 "/tmp/fs-test.nc"
    # 1487 "/tmp/fs-test.nc"
    char leaf[14+1];
    memset(&leaf, 0, sizeof(leaf));
    # 1488 "/tmp/fs-test.nc"
    for(i_17=0    ;i_17<14+1;i_17++){
        # 1487 "/tmp/fs-test.nc"
        leaf[i_17]=0;
    }
    # 1490 "/tmp/fs-test.nc"
    if(!path_parent_lookup_abs(abs,&parent,leaf)) {
        # 1488 "/tmp/fs-test.nc"
                return -1;
    }
    # 1490 "/tmp/fs-test.nc"
    # 1490 "/tmp/fs-test.nc"
    read_inode(parent,&pdi2);
    # 1492 "/tmp/fs-test.nc"
    if(!check_perm(&pdi2,2|1)) {
        # 1491 "/tmp/fs-test.nc"
                return -1;
    }
    # 1495 "/tmp/fs-test.nc"
    if(remove_dirent(parent,leaf)!=0) {
        # 1492 "/tmp/fs-test.nc"
                return -1;
    }
    # 1495 "/tmp/fs-test.nc"
    free_inode_blocks(inum,&di);
    # 1497 "/tmp/fs-test.nc"
    # 1497 "/tmp/fs-test.nc"
    memset(&zero,0,sizeof(zero));
    # 1498 "/tmp/fs-test.nc"
    write_inode(inum,&zero);
    # 1499 "/tmp/fs-test.nc"
        return 0;
}

int fs_unlink(const char* path)
{
    unsigned int  inum  ;
    struct dinode  di  ;
    unsigned int  parent  ;
    int i;
    struct dinode  pdi3  ;
    struct dinode  pdir  ;
    struct proc*  pr  ;
    struct dinode  zero  ;
    memset(&inum, 0, sizeof(inum));
    memset(&di, 0, sizeof(di));
    memset(&parent, 0, sizeof(parent));
    memset(&i, 0, sizeof(i));
    memset(&pdi3, 0, sizeof(pdi3));
    memset(&pdir, 0, sizeof(pdir));
    memset(&pr, 0, sizeof(pr));
    memset(&zero, 0, sizeof(zero));
    # 1505 "/tmp/fs-test.nc"
    char abs[128];
    memset(&abs, 0, sizeof(abs));
    # 1506 "/tmp/fs-test.nc"
    build_abs_normalized(abs,sizeof(abs),path);
    # 1509 "/tmp/fs-test.nc"
    if(strcmp(abs,"/")==0) {
        # 1507 "/tmp/fs-test.nc"
                return -1;
    }
    # 1509 "/tmp/fs-test.nc"
    inum=path_lookup(abs);
    # 1511 "/tmp/fs-test.nc"
    if(inum==0) {
        # 1510 "/tmp/fs-test.nc"
                return -1;
    }
    # 1511 "/tmp/fs-test.nc"
    # 1511 "/tmp/fs-test.nc"
    read_inode(inum,&di);
    # 1515 "/tmp/fs-test.nc"
    if(di.type!=2) {
        # 1512 "/tmp/fs-test.nc"
                return -1;
    }
    # 1519 "/tmp/fs-test.nc"
    if(neoc_proc_is_file_open(inum)) {
        # 1516 "/tmp/fs-test.nc"
                return -1;
    }
    # 1519 "/tmp/fs-test.nc"
    # 1519 "/tmp/fs-test.nc"
    char leaf[14+1];
    memset(&leaf, 0, sizeof(leaf));
    # 1520 "/tmp/fs-test.nc"
    for(i=0    ;i<14+1;i++){
        # 1519 "/tmp/fs-test.nc"
        leaf[i]=0;
    }
    # 1522 "/tmp/fs-test.nc"
    if(!path_parent_lookup_abs(abs,&parent,leaf)) {
        # 1520 "/tmp/fs-test.nc"
                return -1;
    }
    # 1522 "/tmp/fs-test.nc"
    # 1522 "/tmp/fs-test.nc"
    read_inode(parent,&pdi3);
    # 1525 "/tmp/fs-test.nc"
    if(!check_perm(&pdi3,2|1)) {
        # 1523 "/tmp/fs-test.nc"
                return -1;
    }
    # 1525 "/tmp/fs-test.nc"
    # 1525 "/tmp/fs-test.nc"
    read_inode(parent,&pdir);
    # 1530 "/tmp/fs-test.nc"
    if(pdir.mode&01000) {
        # 1527 "/tmp/fs-test.nc"
        pr=gProc[gActiveProc];
        # 1529 "/tmp/fs-test.nc"
        if(!(pr->uid==0||pr->uid==di.uid||pr->uid==pdir.uid)) {
            # 1528 "/tmp/fs-test.nc"
                        return -1;
        }
    }
    # 1533 "/tmp/fs-test.nc"
    if(remove_dirent(parent,leaf)!=0) {
        # 1530 "/tmp/fs-test.nc"
                return -1;
    }
    # 1533 "/tmp/fs-test.nc"
    free_inode_blocks(inum,&di);
    # 1534 "/tmp/fs-test.nc"
    # 1534 "/tmp/fs-test.nc"
    memset(&zero,0,sizeof(zero));
    # 1535 "/tmp/fs-test.nc"
    write_inode(inum,&zero);
    # 1536 "/tmp/fs-test.nc"
        return 0;
}

static int write_data_inode(unsigned int  inum  , struct dinode*  ip  , const unsigned char*  src  , unsigned int  size  )
{
    unsigned int  left  ;
    unsigned int  off  ;
    unsigned int  blk_idx  ;
    unsigned int  blk_off  ;
    unsigned int  to_write  ;
    unsigned int  disk_blk  ;
    memset(&left, 0, sizeof(left));
    memset(&off, 0, sizeof(off));
    memset(&blk_idx, 0, sizeof(blk_idx));
    memset(&blk_off, 0, sizeof(blk_off));
    memset(&to_write, 0, sizeof(to_write));
    memset(&disk_blk, 0, sizeof(disk_blk));
    # 1542 "/tmp/fs-test.nc"
    left=size;
    # 1542 "/tmp/fs-test.nc"
    off=0;
    # 1542 "/tmp/fs-test.nc"
    const unsigned char*  s  =src;
    # 1553 "/tmp/fs-test.nc"
    while(left>0) {
        # 1544 "/tmp/fs-test.nc"
        blk_idx=off/512;
        # 1544 "/tmp/fs-test.nc"
        blk_off=off%512;
        # 1545 "/tmp/fs-test.nc"
        to_write=512-blk_off;
        # 1546 "/tmp/fs-test.nc"
        if(to_write>left) {
            # 1545 "/tmp/fs-test.nc"
            to_write=left;
        }
        # 1546 "/tmp/fs-test.nc"
        disk_blk=inode_bmap_alloc(inum,ip,blk_idx);
        # 1548 "/tmp/fs-test.nc"
        if(!disk_blk) {
            # 1547 "/tmp/fs-test.nc"
                        return -1;
        }
        # 1548 "/tmp/fs-test.nc"
        read_block(disk_blk,block_buf);
        # 1549 "/tmp/fs-test.nc"
        memcpy(block_buf+blk_off,s,to_write);
        # 1550 "/tmp/fs-test.nc"
        write_block(disk_blk,block_buf);
        # 1551 "/tmp/fs-test.nc"
        left-=to_write;
        # 1551 "/tmp/fs-test.nc"
        off+=to_write;
        # 1551 "/tmp/fs-test.nc"
        s+=to_write;
    }
    # 1553 "/tmp/fs-test.nc"
    ip->size=size;
    # 1553 "/tmp/fs-test.nc"
    ip->mtime=fs_now();
    # 1553 "/tmp/fs-test.nc"
    write_inode(inum,ip);
    # 1553 "/tmp/fs-test.nc"
        return 0;
}

int fs_symlink(const char* target, const char* linkpath)
{
    unsigned int  parent  ;
    int i;
    struct dinode  pdi  ;
    struct dinode  di  ;
    unsigned int  inum  ;
    unsigned int  i_18  ;
    struct dinode  ni  ;
    unsigned int  tlen  ;
    memset(&parent, 0, sizeof(parent));
    memset(&i, 0, sizeof(i));
    memset(&pdi, 0, sizeof(pdi));
    memset(&di, 0, sizeof(di));
    memset(&inum, 0, sizeof(inum));
    memset(&i_18, 0, sizeof(i_18));
    memset(&ni, 0, sizeof(ni));
    memset(&tlen, 0, sizeof(tlen));
    # 1559 "/tmp/fs-test.nc"
    char abs[128];
    memset(&abs, 0, sizeof(abs));
    # 1559 "/tmp/fs-test.nc"
    build_abs_normalized(abs,sizeof(abs),linkpath);
    # 1561 "/tmp/fs-test.nc"
    if(strcmp(abs,"/")==0) {
        # 1560 "/tmp/fs-test.nc"
                return -1;
    }
    # 1563 "/tmp/fs-test.nc"
    if(path_lookup(abs)!=0) {
        # 1561 "/tmp/fs-test.nc"
                return -1;
    }
    # 1563 "/tmp/fs-test.nc"
    # 1563 "/tmp/fs-test.nc"
    char leaf[14+1];
    memset(&leaf, 0, sizeof(leaf));
    # 1564 "/tmp/fs-test.nc"
    for(i=0    ;i<14+1;i++){
        # 1563 "/tmp/fs-test.nc"
        leaf[i]=0;
    }
    # 1565 "/tmp/fs-test.nc"
    if(!path_parent_lookup_abs(abs,&parent,leaf)) {
        # 1564 "/tmp/fs-test.nc"
                return -1;
    }
    # 1567 "/tmp/fs-test.nc"
    if(leaf[0]==0) {
        # 1565 "/tmp/fs-test.nc"
                return -1;
    }
    # 1567 "/tmp/fs-test.nc"
    # 1567 "/tmp/fs-test.nc"
    read_inode(parent,&pdi);
    # 1571 "/tmp/fs-test.nc"
    if(!check_perm(&pdi,2|1)) {
        # 1568 "/tmp/fs-test.nc"
                return -1;
    }
    # 1571 "/tmp/fs-test.nc"
    # 1571 "/tmp/fs-test.nc"
    inum=0;
    # 1573 "/tmp/fs-test.nc"
    for(i_18=1    ;i_18<=sb.ninodes;i_18++){
        # 1572 "/tmp/fs-test.nc"
        read_inode(i_18,&di);
        # 1572 "/tmp/fs-test.nc"
        if(di.type==0) {
            # 1572 "/tmp/fs-test.nc"
            inum=i_18;
            # 1572 "/tmp/fs-test.nc"
            break;
        }
    }
    # 1574 "/tmp/fs-test.nc"
    if(!inum) {
        # 1573 "/tmp/fs-test.nc"
                return -1;
    }
    # 1574 "/tmp/fs-test.nc"
    # 1574 "/tmp/fs-test.nc"
    memset(&ni,0,sizeof(ni));
    # 1574 "/tmp/fs-test.nc"
    ni.type=3;
    # 1574 "/tmp/fs-test.nc"
    ni.nlink=1;
    # 1574 "/tmp/fs-test.nc"
    ni.size=0;
    # 1574 "/tmp/fs-test.nc"
    ni.mtime=fs_now();
    # 1574 "/tmp/fs-test.nc"
    ni.ctime=ni.mtime;
    # 1574 "/tmp/fs-test.nc"
    write_inode(inum,&ni);
    # 1578 "/tmp/fs-test.nc"
    if(add_dirent(parent,leaf,inum)!=0) {
        # 1576 "/tmp/fs-test.nc"
                return -1;
    }
    # 1578 "/tmp/fs-test.nc"
    tlen=strlen(target);
    # 1579 "/tmp/fs-test.nc"
    if(tlen>240) {
        # 1578 "/tmp/fs-test.nc"
        tlen=240;
    }
    # 1579 "/tmp/fs-test.nc"
    unsigned char  buf[240]  ;
    memset(&buf, 0, sizeof(buf));
    # 1579 "/tmp/fs-test.nc"
    memset(buf,0,sizeof(buf));
    # 1579 "/tmp/fs-test.nc"
    strncpy((char*)buf,target,tlen);
    # 1580 "/tmp/fs-test.nc"
    read_inode(inum,&ni);
    # 1582 "/tmp/fs-test.nc"
    if(write_data_inode(inum,&ni,buf,tlen)!=0) {
        # 1581 "/tmp/fs-test.nc"
                return -1;
    }
    # 1582 "/tmp/fs-test.nc"
        return 0;
}

int fs_rename(const char* oldpath, const char* newpath)
{
    unsigned int  inum  ;
    int i;
    struct dinode  pdi  ;
    struct dinode  opd  ;
    struct dinode  oldpd  ;
    struct dinode  filedi  ;
    struct proc*  pr  ;
    memset(&inum, 0, sizeof(inum));
    memset(&i, 0, sizeof(i));
    memset(&pdi, 0, sizeof(pdi));
    memset(&opd, 0, sizeof(opd));
    memset(&oldpd, 0, sizeof(oldpd));
    memset(&filedi, 0, sizeof(filedi));
    memset(&pr, 0, sizeof(pr));
    # 1588 "/tmp/fs-test.nc"
    char oldabs[128], newabs[128];
    memset(&newabs, 0, sizeof(newabs));
;
    # 1589 "/tmp/fs-test.nc"
    build_abs_normalized(oldabs,sizeof(oldabs),oldpath);
    # 1590 "/tmp/fs-test.nc"
    build_abs_normalized(newabs,sizeof(newabs),newpath);
    # 1593 "/tmp/fs-test.nc"
    if(strcmp(oldabs,newabs)==0) {
        # 1592 "/tmp/fs-test.nc"
                return 0;
    }
    # 1595 "/tmp/fs-test.nc"
    if(strcmp(oldabs,"/")==0) {
        # 1593 "/tmp/fs-test.nc"
                return -1;
    }
    # 1595 "/tmp/fs-test.nc"
    inum=path_lookup(oldabs);
    # 1597 "/tmp/fs-test.nc"
    if(inum==0) {
        # 1596 "/tmp/fs-test.nc"
                return -1;
    }
    # 1599 "/tmp/fs-test.nc"
    if(path_lookup(newabs)!=0) {
        # 1597 "/tmp/fs-test.nc"
                return -1;
    }
    # 1599 "/tmp/fs-test.nc"
    unsigned int   op  ,  np  ;
    memset(&np, 0, sizeof(np));
;
    # 1599 "/tmp/fs-test.nc"
    char oname[14+1];
    memset(&oname, 0, sizeof(oname));
    # 1599 "/tmp/fs-test.nc"
    char nname[14+1];
    memset(&nname, 0, sizeof(nname));
    # 1601 "/tmp/fs-test.nc"
    for(i=0    ;i<14+1;i++){
        # 1600 "/tmp/fs-test.nc"
        oname[i]=0;
        # 1600 "/tmp/fs-test.nc"
        nname[i]=0;
    }
    # 1602 "/tmp/fs-test.nc"
    if(!path_parent_lookup_abs(oldabs,&op,oname)) {
        # 1601 "/tmp/fs-test.nc"
                return -1;
    }
    # 1603 "/tmp/fs-test.nc"
    if(!path_parent_lookup_abs(newabs,&np,nname)) {
        # 1602 "/tmp/fs-test.nc"
                return -1;
    }
    # 1605 "/tmp/fs-test.nc"
    if(oname[0]==0||nname[0]==0) {
        # 1603 "/tmp/fs-test.nc"
                return -1;
    }
    # 1605 "/tmp/fs-test.nc"
    # 1605 "/tmp/fs-test.nc"
    read_inode(np,&pdi);
    # 1608 "/tmp/fs-test.nc"
    if(pdi.type!=1) {
        # 1606 "/tmp/fs-test.nc"
                return -1;
    }
    # 1608 "/tmp/fs-test.nc"
    # 1608 "/tmp/fs-test.nc"
    read_inode(op,&opd);
    # 1610 "/tmp/fs-test.nc"
    if(!check_perm(&opd,2|1)) {
        # 1609 "/tmp/fs-test.nc"
                return -1;
    }
    # 1613 "/tmp/fs-test.nc"
    if(!check_perm(&pdi,2|1)) {
        # 1610 "/tmp/fs-test.nc"
                return -1;
    }
    # 1613 "/tmp/fs-test.nc"
    # 1613 "/tmp/fs-test.nc"
    read_inode(op,&oldpd);
    # 1614 "/tmp/fs-test.nc"
    # 1614 "/tmp/fs-test.nc"
    read_inode(inum,&filedi);
    # 1619 "/tmp/fs-test.nc"
    if(oldpd.mode&01000) {
        # 1616 "/tmp/fs-test.nc"
        pr=gProc[gActiveProc];
        # 1618 "/tmp/fs-test.nc"
        if(!(pr->uid==0||pr->uid==filedi.uid||pr->uid==oldpd.uid)) {
            # 1617 "/tmp/fs-test.nc"
                        return -1;
        }
    }
    # 1620 "/tmp/fs-test.nc"
    if(add_dirent(np,nname,inum)!=0) {
        # 1619 "/tmp/fs-test.nc"
                return -1;
    }
    # 1621 "/tmp/fs-test.nc"
    if(remove_dirent(op,oname)!=0) {
        # 1620 "/tmp/fs-test.nc"
                return -1;
    }
    # 1621 "/tmp/fs-test.nc"
        return 0;
}

int fs_link(const char* oldpath, const char* newpath)
{
    unsigned int  inum  ;
    struct dinode  di  ;
    unsigned int  parent  ;
    int i;
    struct dinode  pdi  ;
    memset(&inum, 0, sizeof(inum));
    memset(&di, 0, sizeof(di));
    memset(&parent, 0, sizeof(parent));
    memset(&i, 0, sizeof(i));
    memset(&pdi, 0, sizeof(pdi));
    # 1627 "/tmp/fs-test.nc"
    char oldabs[128], newabs[128];
    memset(&newabs, 0, sizeof(newabs));
;
    # 1628 "/tmp/fs-test.nc"
    build_abs_normalized(oldabs,sizeof(oldabs),oldpath);
    # 1629 "/tmp/fs-test.nc"
    build_abs_normalized(newabs,sizeof(newabs),newpath);
    # 1632 "/tmp/fs-test.nc"
    if(strcmp(newabs,"/")==0||strcmp(oldabs,"/")==0) {
        # 1631 "/tmp/fs-test.nc"
                return -1;
    }
    # 1632 "/tmp/fs-test.nc"
    inum=path_lookup(oldabs);
    # 1634 "/tmp/fs-test.nc"
    if(inum==0) {
        # 1633 "/tmp/fs-test.nc"
                return -1;
    }
    # 1636 "/tmp/fs-test.nc"
    if(path_lookup(newabs)!=0) {
        # 1634 "/tmp/fs-test.nc"
                return -1;
    }
    # 1636 "/tmp/fs-test.nc"
    # 1636 "/tmp/fs-test.nc"
    read_inode(inum,&di);
    # 1639 "/tmp/fs-test.nc"
    if(di.type!=2) {
        # 1637 "/tmp/fs-test.nc"
                return -1;
    }
    # 1639 "/tmp/fs-test.nc"
    # 1639 "/tmp/fs-test.nc"
    char leaf[14+1];
    memset(&leaf, 0, sizeof(leaf));
    # 1640 "/tmp/fs-test.nc"
    for(i=0    ;i<14+1;i++){
        # 1639 "/tmp/fs-test.nc"
        leaf[i]=0;
    }
    # 1641 "/tmp/fs-test.nc"
    if(!path_parent_lookup_abs(newabs,&parent,leaf)) {
        # 1640 "/tmp/fs-test.nc"
                return -1;
    }
    # 1643 "/tmp/fs-test.nc"
    if(leaf[0]==0) {
        # 1641 "/tmp/fs-test.nc"
                return -1;
    }
    # 1643 "/tmp/fs-test.nc"
    # 1643 "/tmp/fs-test.nc"
    read_inode(parent,&pdi);
    # 1646 "/tmp/fs-test.nc"
    if(!check_perm(&pdi,2|1)) {
        # 1644 "/tmp/fs-test.nc"
                return -1;
    }
    # 1648 "/tmp/fs-test.nc"
    if(add_dirent(parent,leaf,inum)!=0) {
        # 1646 "/tmp/fs-test.nc"
                return -1;
    }
    # 1648 "/tmp/fs-test.nc"
    di.nlink++;
    # 1649 "/tmp/fs-test.nc"
    di.ctime=fs_now();
    # 1650 "/tmp/fs-test.nc"
    write_inode(inum,&di);
    # 1651 "/tmp/fs-test.nc"
        return 0;
}

int fs_stat(const char* path, struct stat*  st  )
{
    unsigned int  inum  ;
    struct dinode  di  ;
    memset(&inum, 0, sizeof(inum));
    memset(&di, 0, sizeof(di));
    # 1657 "/tmp/fs-test.nc"
    if(!st) {
        # 1656 "/tmp/fs-test.nc"
                return -1;
    }
    # 1657 "/tmp/fs-test.nc"
    char abs[128];
    memset(&abs, 0, sizeof(abs));
    # 1657 "/tmp/fs-test.nc"
    build_abs_normalized(abs,sizeof(abs),path);
    # 1658 "/tmp/fs-test.nc"
    inum=path_lookup(abs);
    # 1660 "/tmp/fs-test.nc"
    if(!inum) {
        # 1659 "/tmp/fs-test.nc"
                return -1;
    }
    # 1660 "/tmp/fs-test.nc"
    # 1660 "/tmp/fs-test.nc"
    read_inode(inum,&di);
    # 1661 "/tmp/fs-test.nc"
    st->type=di.type;
    # 1661 "/tmp/fs-test.nc"
    st->nlink=di.nlink;
    # 1661 "/tmp/fs-test.nc"
    st->size=di.size;
    # 1661 "/tmp/fs-test.nc"
    st->inum=inum;
    # 1662 "/tmp/fs-test.nc"
    st->mode=di.mode;
    # 1662 "/tmp/fs-test.nc"
    st->uid=di.uid;
    # 1662 "/tmp/fs-test.nc"
    st->gid=di.gid;
    # 1663 "/tmp/fs-test.nc"
    st->atime=di.atime;
    # 1663 "/tmp/fs-test.nc"
    st->mtime=di.mtime;
    # 1663 "/tmp/fs-test.nc"
    st->ctime=di.ctime;
    # 1664 "/tmp/fs-test.nc"
        return 0;
}

int fs_readlink(const char* path, char* buf, int bufsz)
{
    unsigned int  parent  ;
    int i;
    struct dinode  pdi  ;
    unsigned int  inum  ;
    struct dinode  di  ;
    int n;
    memset(&parent, 0, sizeof(parent));
    memset(&i, 0, sizeof(i));
    memset(&pdi, 0, sizeof(pdi));
    memset(&inum, 0, sizeof(inum));
    memset(&di, 0, sizeof(di));
    memset(&n, 0, sizeof(n));
    # 1670 "/tmp/fs-test.nc"
    if(!buf||bufsz<=0) {
        # 1669 "/tmp/fs-test.nc"
                return -1;
    }
    # 1670 "/tmp/fs-test.nc"
    char abs[128];
    memset(&abs, 0, sizeof(abs));
    # 1670 "/tmp/fs-test.nc"
    build_abs_normalized(abs,sizeof(abs),path);
    # 1671 "/tmp/fs-test.nc"
    # 1671 "/tmp/fs-test.nc"
    char leaf[14+1];
    memset(&leaf, 0, sizeof(leaf));
    # 1672 "/tmp/fs-test.nc"
    for(i=0    ;i<14+1;i++){
        # 1671 "/tmp/fs-test.nc"
        leaf[i]=0;
    }
    # 1673 "/tmp/fs-test.nc"
    if(!path_parent_lookup_abs(abs,&parent,leaf)) {
        # 1672 "/tmp/fs-test.nc"
                return -1;
    }
    # 1673 "/tmp/fs-test.nc"
    # 1673 "/tmp/fs-test.nc"
    read_inode(parent,&pdi);
    # 1674 "/tmp/fs-test.nc"
    if(pdi.type!=1) {
        # 1673 "/tmp/fs-test.nc"
                return -1;
    }
    # 1674 "/tmp/fs-test.nc"
    inum=dir_lookup(&pdi,leaf);
    # 1675 "/tmp/fs-test.nc"
    if(!inum) {
        # 1674 "/tmp/fs-test.nc"
                return -1;
    }
    # 1675 "/tmp/fs-test.nc"
    # 1675 "/tmp/fs-test.nc"
    read_inode(inum,&di);
    # 1677 "/tmp/fs-test.nc"
    if(di.type!=3) {
        # 1676 "/tmp/fs-test.nc"
                return -1;
    }
    # 1677 "/tmp/fs-test.nc"
    n=di.size;
    # 1677 "/tmp/fs-test.nc"
    if(n>bufsz) {
        # 1677 "/tmp/fs-test.nc"
        n=bufsz;
    }
    # 1678 "/tmp/fs-test.nc"
    if(n<0) {
        # 1677 "/tmp/fs-test.nc"
        n=0;
    }
    # 1679 "/tmp/fs-test.nc"
    if(n>0) {
        # 1678 "/tmp/fs-test.nc"
        read_data(&di,0,(unsigned char* )buf,n);
    }
    # 1679 "/tmp/fs-test.nc"
        return n;
}

int fs_lstat(const char* path, struct stat*  st  )
{
    unsigned int  parent  ;
    int i;
    struct dinode  pdi  ;
    unsigned int  inum  ;
    struct dinode  di  ;
    memset(&parent, 0, sizeof(parent));
    memset(&i, 0, sizeof(i));
    memset(&pdi, 0, sizeof(pdi));
    memset(&inum, 0, sizeof(inum));
    memset(&di, 0, sizeof(di));
    # 1685 "/tmp/fs-test.nc"
    if(!st) {
        # 1684 "/tmp/fs-test.nc"
                return -1;
    }
    # 1685 "/tmp/fs-test.nc"
    char abs[128];
    memset(&abs, 0, sizeof(abs));
    # 1685 "/tmp/fs-test.nc"
    build_abs_normalized(abs,sizeof(abs),path);
    # 1686 "/tmp/fs-test.nc"
    # 1686 "/tmp/fs-test.nc"
    char leaf[14+1];
    memset(&leaf, 0, sizeof(leaf));
    # 1687 "/tmp/fs-test.nc"
    for(i=0    ;i<14+1;i++){
        # 1686 "/tmp/fs-test.nc"
        leaf[i]=0;
    }
    # 1688 "/tmp/fs-test.nc"
    if(!path_parent_lookup_abs(abs,&parent,leaf)) {
        # 1687 "/tmp/fs-test.nc"
                return -1;
    }
    # 1688 "/tmp/fs-test.nc"
    # 1688 "/tmp/fs-test.nc"
    read_inode(parent,&pdi);
    # 1689 "/tmp/fs-test.nc"
    if(pdi.type!=1) {
        # 1688 "/tmp/fs-test.nc"
                return -1;
    }
    # 1689 "/tmp/fs-test.nc"
    inum=dir_lookup(&pdi,leaf);
    # 1690 "/tmp/fs-test.nc"
    if(!inum) {
        # 1689 "/tmp/fs-test.nc"
                return -1;
    }
    # 1690 "/tmp/fs-test.nc"
    # 1690 "/tmp/fs-test.nc"
    read_inode(inum,&di);
    # 1691 "/tmp/fs-test.nc"
    st->type=di.type;
    # 1691 "/tmp/fs-test.nc"
    st->nlink=di.nlink;
    # 1691 "/tmp/fs-test.nc"
    st->size=di.size;
    # 1691 "/tmp/fs-test.nc"
    st->inum=inum;
    # 1692 "/tmp/fs-test.nc"
    st->mode=di.mode;
    # 1692 "/tmp/fs-test.nc"
    st->uid=di.uid;
    # 1692 "/tmp/fs-test.nc"
    st->gid=di.gid;
    # 1693 "/tmp/fs-test.nc"
    st->atime=di.atime;
    # 1693 "/tmp/fs-test.nc"
    st->mtime=di.mtime;
    # 1693 "/tmp/fs-test.nc"
    st->ctime=di.ctime;
    # 1694 "/tmp/fs-test.nc"
        return 0;
}

int fs_chmod(const char* path, unsigned int  mode  )
{
    unsigned int  inum  ;
    struct dinode  di  ;
    struct proc*  p  ;
    memset(&inum, 0, sizeof(inum));
    memset(&di, 0, sizeof(di));
    memset(&p, 0, sizeof(p));
    # 1699 "/tmp/fs-test.nc"
    char abs[128];
    memset(&abs, 0, sizeof(abs));
    # 1699 "/tmp/fs-test.nc"
    build_abs_normalized(abs,sizeof(abs),path);
    # 1700 "/tmp/fs-test.nc"
    inum=path_lookup(abs);
    # 1702 "/tmp/fs-test.nc"
    if(!inum) {
        # 1701 "/tmp/fs-test.nc"
                return -1;
    }
    # 1702 "/tmp/fs-test.nc"
    # 1702 "/tmp/fs-test.nc"
    read_inode(inum,&di);
    # 1704 "/tmp/fs-test.nc"
    p=gProc[gActiveProc];
    # 1706 "/tmp/fs-test.nc"
    if(!(p->uid==0||p->uid==di.uid)) {
        # 1705 "/tmp/fs-test.nc"
                return -1;
    }
    # 1706 "/tmp/fs-test.nc"
    di.mode=mode&07777;
    # 1706 "/tmp/fs-test.nc"
    di.ctime=fs_now();
    # 1707 "/tmp/fs-test.nc"
    write_inode(inum,&di);
    # 1708 "/tmp/fs-test.nc"
        return 0;
}

int fs_chown(const char* path, unsigned short int  uid  , unsigned short int  gid  )
{
    unsigned int  inum  ;
    struct dinode  di  ;
    memset(&inum, 0, sizeof(inum));
    memset(&di, 0, sizeof(di));
    # 1713 "/tmp/fs-test.nc"
    char abs[128];
    memset(&abs, 0, sizeof(abs));
    # 1713 "/tmp/fs-test.nc"
    build_abs_normalized(abs,sizeof(abs),path);
    # 1714 "/tmp/fs-test.nc"
    inum=path_lookup(abs);
    # 1716 "/tmp/fs-test.nc"
    if(!inum) {
        # 1715 "/tmp/fs-test.nc"
                return -1;
    }
    # 1716 "/tmp/fs-test.nc"
    # 1716 "/tmp/fs-test.nc"
    read_inode(inum,&di);
    # 1719 "/tmp/fs-test.nc"
    if(gProc[gActiveProc]->uid!=0) {
        # 1718 "/tmp/fs-test.nc"
                return -1;
    }
    # 1719 "/tmp/fs-test.nc"
    di.uid=uid;
    # 1719 "/tmp/fs-test.nc"
    di.gid=gid;
    # 1719 "/tmp/fs-test.nc"
    di.ctime=fs_now();
    # 1720 "/tmp/fs-test.nc"
    write_inode(inum,&di);
    # 1721 "/tmp/fs-test.nc"
        return 0;
}

int fs_utimes(const char* path, unsigned int  atime  , unsigned int  mtime  )
{
    unsigned int  inum  ;
    struct dinode  di  ;
    unsigned int  now  ;
    memset(&inum, 0, sizeof(inum));
    memset(&di, 0, sizeof(di));
    memset(&now, 0, sizeof(now));
    # 1726 "/tmp/fs-test.nc"
    char abs[128];
    memset(&abs, 0, sizeof(abs));
    # 1726 "/tmp/fs-test.nc"
    build_abs_normalized(abs,sizeof(abs),path);
    # 1727 "/tmp/fs-test.nc"
    inum=path_lookup(abs);
    # 1729 "/tmp/fs-test.nc"
    if(!inum) {
        # 1728 "/tmp/fs-test.nc"
                return -1;
    }
    # 1729 "/tmp/fs-test.nc"
    # 1729 "/tmp/fs-test.nc"
    read_inode(inum,&di);
    # 1730 "/tmp/fs-test.nc"
    now=fs_now();
    # 1731 "/tmp/fs-test.nc"
    di.atime=(((atime==0xFFFFFFFFU))?(now):(atime));
    # 1732 "/tmp/fs-test.nc"
    di.mtime=(((mtime==0xFFFFFFFFU))?(now):(mtime));
    # 1733 "/tmp/fs-test.nc"
    di.ctime=now;
    # 1734 "/tmp/fs-test.nc"
    write_inode(inum,&di);
    # 1735 "/tmp/fs-test.nc"
        return 0;
}

int fs_open(const char* path)
{
    # 1739 "/tmp/fs-test.nc"
        return fs_open2(path,0,0);
}

int fs_open2(const char* path, int flags, int mode)
{
    struct file**  file_table  ;
    struct proc*  p  ;
    int i;
    unsigned int  inum  ;
    struct dinode  di  ;
    int created_new;
    unsigned int  parent  ;
    int i_19;
    unsigned int  new_inum  ;
    unsigned short int um;
    unsigned int  pinum  ;
    int ii;
    unsigned short int  gid  ;
    struct dinode  pdi_inh  ;
    int want;
    int i_20;
    unsigned int  now  ;
    memset(&file_table, 0, sizeof(file_table));
    memset(&p, 0, sizeof(p));
    memset(&i, 0, sizeof(i));
    memset(&inum, 0, sizeof(inum));
    memset(&di, 0, sizeof(di));
    memset(&created_new, 0, sizeof(created_new));
    memset(&parent, 0, sizeof(parent));
    memset(&i_19, 0, sizeof(i_19));
    memset(&new_inum, 0, sizeof(new_inum));
    memset(&um, 0, sizeof(um));
    memset(&pinum, 0, sizeof(pinum));
    memset(&ii, 0, sizeof(ii));
    memset(&gid, 0, sizeof(gid));
    memset(&pdi_inh, 0, sizeof(pdi_inh));
    memset(&want, 0, sizeof(want));
    memset(&i_20, 0, sizeof(i_20));
    memset(&now, 0, sizeof(now));
    # 1744 "/tmp/fs-test.nc"
    file_table=get_current_file_table();
    # 1745 "/tmp/fs-test.nc"
    char path2[128];
    memset(&path2, 0, sizeof(path2));
    # 1754 "/tmp/fs-test.nc"
    if(!path||path[0]==0||(path[0]==46&&path[1]==0)) {
        # 1747 "/tmp/fs-test.nc"
        p=gProc[gActiveProc];
        # 1748 "/tmp/fs-test.nc"
        build_abs_normalized(path2,sizeof(path2),p->cwd);
    }
    else {
        # 1750 "/tmp/fs-test.nc"
        build_abs_normalized(path2,sizeof(path2),path);
    }
    # 1771 "/tmp/fs-test.nc"
    if(strcmp(path2,"/dev/tty")==0) {
        # 1768 "/tmp/fs-test.nc"
        for(i=3        ;i<32;i++){
            # 1767 "/tmp/fs-test.nc"
            if(file_table[i]==((void*)0)) {
                # 1757 "/tmp/fs-test.nc"
                file_table[i]=new_file_table();
                # 1758 "/tmp/fs-test.nc"
                file_table[i]->kind=(5);
                # 1759 "/tmp/fs-test.nc"
                file_table[i]->used=1;
                # 1760 "/tmp/fs-test.nc"
                file_table[i]->inum=(unsigned int )-1;
                # 1761 "/tmp/fs-test.nc"
                file_table[i]->off=0;
                # 1762 "/tmp/fs-test.nc"
                file_table[i]->read_pipe=0;
                # 1763 "/tmp/fs-test.nc"
                file_table[i]->write_pipe=0;
                # 1764 "/tmp/fs-test.nc"
                file_table[i]->oflags=flags;
                # 1765 "/tmp/fs-test.nc"
                                return i;
            }
        }
        # 1768 "/tmp/fs-test.nc"
                return -1;
    }
    # 1771 "/tmp/fs-test.nc"
    inum=path_lookup(path2);
    # 1772 "/tmp/fs-test.nc"
    # 1773 "/tmp/fs-test.nc"
    created_new=0;
    # 1814 "/tmp/fs-test.nc"
    if(inum==0) {
        # 1810 "/tmp/fs-test.nc"
        if(flags&(1<<9)) {
            # 1779 "/tmp/fs-test.nc"
            # 1780 "/tmp/fs-test.nc"
            char leaf[14+1];
            memset(&leaf, 0, sizeof(leaf));
            # 1782 "/tmp/fs-test.nc"
            for(i_19=0            ;i_19<14+1;i_19++){
                # 1781 "/tmp/fs-test.nc"
                leaf[i_19]=0;
            }
            # 1785 "/tmp/fs-test.nc"
            if(!path_parent_lookup_abs(path2,&parent,leaf)) {
                # 1783 "/tmp/fs-test.nc"
                                return -1;
            }
            # 1785 "/tmp/fs-test.nc"
            new_inum=alloc_inode_T_FILE();
            # 1787 "/tmp/fs-test.nc"
            if(new_inum==0) {
                # 1786 "/tmp/fs-test.nc"
                                return -1;
            }
            # 1788 "/tmp/fs-test.nc"
            if(add_dirent(parent,leaf,new_inum)!=0) {
                # 1787 "/tmp/fs-test.nc"
                                return -1;
            }
            # 1788 "/tmp/fs-test.nc"
            inum=new_inum;
            # 1789 "/tmp/fs-test.nc"
            read_inode(inum,&di);
            # 1793 "/tmp/fs-test.nc"
            um=gProc[gActiveProc]->umask;
            # 1795 "/tmp/fs-test.nc"
            # 1795 "/tmp/fs-test.nc"
            char leafx[14+1];
            memset(&leafx, 0, sizeof(leafx));
            # 1796 "/tmp/fs-test.nc"
            for(ii=0            ;ii<14+1;ii++){
                # 1795 "/tmp/fs-test.nc"
                leafx[ii]=0;
            }
            # 1796 "/tmp/fs-test.nc"
            gid=gProc[gActiveProc]->gid;
            # 1801 "/tmp/fs-test.nc"
            if(path_parent_lookup_abs(path2,&pinum,leafx)) {
                # 1798 "/tmp/fs-test.nc"
                # 1798 "/tmp/fs-test.nc"
                read_inode(pinum,&pdi_inh);
                # 1800 "/tmp/fs-test.nc"
                if(pdi_inh.mode&02000) {
                    # 1799 "/tmp/fs-test.nc"
                    gid=pdi_inh.gid;
                }
            }
            # 1801 "/tmp/fs-test.nc"
            di.uid=gProc[gActiveProc]->uid;
            # 1802 "/tmp/fs-test.nc"
            di.gid=gid;
            # 1803 "/tmp/fs-test.nc"
            di.mode=((((mode&0777))?((mode&0777)):(0644)))&~um;
            # 1804 "/tmp/fs-test.nc"
            di.atime=di.mtime=di.ctime=fs_now();
            # 1805 "/tmp/fs-test.nc"
            write_inode(inum,&di);
            # 1806 "/tmp/fs-test.nc"
            created_new=1;
        }
        else {
            # 1808 "/tmp/fs-test.nc"
                        return -1;
        }
    }
    else {
        # 1811 "/tmp/fs-test.nc"
        read_inode(inum,&di);
    }
    # 1817 "/tmp/fs-test.nc"
    if(di.type!=2&&di.type!=1) {
        # 1814 "/tmp/fs-test.nc"
                return -1;
    }
    # 1831 "/tmp/fs-test.nc"
    if(di.type==2) {
        # 1818 "/tmp/fs-test.nc"
        want=0;
        # 1820 "/tmp/fs-test.nc"
        if(flags==0) {
            # 1819 "/tmp/fs-test.nc"
            want|=4;
        }
        # 1821 "/tmp/fs-test.nc"
        if(flags&1) {
            # 1820 "/tmp/fs-test.nc"
            want|=2;
        }
        # 1824 "/tmp/fs-test.nc"
        if(flags&2) {
            # 1821 "/tmp/fs-test.nc"
            want|=(4|2);
        }
        # 1827 "/tmp/fs-test.nc"
        if(!created_new) {
            # 1826 "/tmp/fs-test.nc"
            if(!check_perm(&di,((want)?(want):(4)))) {
                # 1825 "/tmp/fs-test.nc"
                                return -1;
            }
        }
    }
    else if(di.type==1) {
        # 1829 "/tmp/fs-test.nc"
        if(!check_perm(&di,4|1)) {
            # 1828 "/tmp/fs-test.nc"
                        return -1;
        }
    }
    # 1865 "/tmp/fs-test.nc"
    for(i_20=3    ;i_20<32;i_20++){
        # 1864 "/tmp/fs-test.nc"
        if(file_table[i_20]==((void*)0)) {
            # 1833 "/tmp/fs-test.nc"
            file_table[i_20]=new_file_table();
            # 1835 "/tmp/fs-test.nc"
            file_table[i_20]->kind=(3);
            # 1836 "/tmp/fs-test.nc"
            file_table[i_20]->used=1;
            # 1837 "/tmp/fs-test.nc"
            file_table[i_20]->inum=inum;
            # 1838 "/tmp/fs-test.nc"
            file_table[i_20]->din=di;
            # 1839 "/tmp/fs-test.nc"
            file_table[i_20]->off=0;
            # 1840 "/tmp/fs-test.nc"
            file_table[i_20]->read_pipe=0;
            # 1841 "/tmp/fs-test.nc"
            file_table[i_20]->write_pipe=0;
            # 1842 "/tmp/fs-test.nc"
            file_table[i_20]->oflags=flags;
            # 1855 "/tmp/fs-test.nc"
            if((flags&(1<<10))&&file_table[i_20]->din.type==2) {
                # 1846 "/tmp/fs-test.nc"
                free_inode_blocks(inum,&file_table[i_20]->din);
                # 1847 "/tmp/fs-test.nc"
                now=fs_now();
                # 1848 "/tmp/fs-test.nc"
                file_table[i_20]->din.mtime=now;
                # 1849 "/tmp/fs-test.nc"
                file_table[i_20]->din.ctime=now;
                # 1850 "/tmp/fs-test.nc"
                file_table[i_20]->din.atime=now;
                # 1851 "/tmp/fs-test.nc"
                write_inode(inum,&file_table[i_20]->din);
                # 1852 "/tmp/fs-test.nc"
                file_table[i_20]->off=0;
            }
            # 1859 "/tmp/fs-test.nc"
            if((flags&(1<<11))&&file_table[i_20]->din.type==2) {
                # 1856 "/tmp/fs-test.nc"
                file_table[i_20]->off=file_table[i_20]->din.size;
            }
            # 1862 "/tmp/fs-test.nc"
            if(created_new) {
                # 1860 "/tmp/fs-test.nc"
                file_table[i_20]->din=di;
            }
            # 1862 "/tmp/fs-test.nc"
                        return i_20;
        }
    }
    # 1865 "/tmp/fs-test.nc"
        return -1;
}

int  fs_read(int fd, void* buf, unsigned long  int  count  )
{
    struct file**  file_table  ;
    int idx;
    struct file*  f  ;
    unsigned int  remaining  ;
    unsigned int  to_read  ;
    memset(&file_table, 0, sizeof(file_table));
    memset(&idx, 0, sizeof(idx));
    memset(&f, 0, sizeof(f));
    memset(&remaining, 0, sizeof(remaining));
    memset(&to_read, 0, sizeof(to_read));
    # 1871 "/tmp/fs-test.nc"
    file_table=get_current_file_table();
    # 1877 "/tmp/fs-test.nc"
    if(file_table[fd]==((void*)0)) {
        # 1874 "/tmp/fs-test.nc"
                return -1;
    }
    # 1877 "/tmp/fs-test.nc"
    idx=fd;
    # 1881 "/tmp/fs-test.nc"
    if(idx<0||idx>=32) {
        # 1879 "/tmp/fs-test.nc"
                return -1;
    }
    # 1881 "/tmp/fs-test.nc"
    f=file_table[idx];
    # 1882 "/tmp/fs-test.nc"
    remaining=f->din.size-f->off;
    # 1885 "/tmp/fs-test.nc"
    if(remaining==0) {
        # 1883 "/tmp/fs-test.nc"
                return 0;
    }
    # 1885 "/tmp/fs-test.nc"
    to_read=(((count<remaining))?(count):(remaining));
    # 1886 "/tmp/fs-test.nc"
    read_data(&f->din,f->off,buf,to_read);
    # 1887 "/tmp/fs-test.nc"
    f->off+=to_read;
    # 1889 "/tmp/fs-test.nc"
    f->din.atime=fs_now();
    # 1890 "/tmp/fs-test.nc"
    write_inode(f->inum,&f->din);
    # 1891 "/tmp/fs-test.nc"
        return to_read;
}

int  fs_write(int fd, const void* buf, unsigned long  int  count  )
{
    struct file**  file_table  ;
    struct file*  f  ;
    unsigned int  to_total  ;
    unsigned int  left  ;
    unsigned int  off  ;
    unsigned int  written  ;
    unsigned int  blk_idx  ;
    unsigned int  blk_off  ;
    unsigned int  to_write  ;
    unsigned int  disk_blk  ;
    unsigned int  newsize  ;
    memset(&file_table, 0, sizeof(file_table));
    memset(&f, 0, sizeof(f));
    memset(&to_total, 0, sizeof(to_total));
    memset(&left, 0, sizeof(left));
    memset(&off, 0, sizeof(off));
    memset(&written, 0, sizeof(written));
    memset(&blk_idx, 0, sizeof(blk_idx));
    memset(&blk_off, 0, sizeof(blk_off));
    memset(&to_write, 0, sizeof(to_write));
    memset(&disk_blk, 0, sizeof(disk_blk));
    memset(&newsize, 0, sizeof(newsize));
    # 1897 "/tmp/fs-test.nc"
    file_table=get_current_file_table();
    # 1900 "/tmp/fs-test.nc"
    if(fd<0||fd>=32) {
        # 1899 "/tmp/fs-test.nc"
                return -1;
    }
    # 1902 "/tmp/fs-test.nc"
    if(file_table[fd]==((void*)0)) {
        # 1900 "/tmp/fs-test.nc"
                return -1;
    }
    # 1902 "/tmp/fs-test.nc"
    f=file_table[fd];
    # 1904 "/tmp/fs-test.nc"
    if(f->kind!=(3)) {
        # 1903 "/tmp/fs-test.nc"
                return -1;
    }
    # 1907 "/tmp/fs-test.nc"
    if(!check_perm(&f->din,2)) {
        # 1904 "/tmp/fs-test.nc"
                return -1;
    }
    # 1907 "/tmp/fs-test.nc"
    to_total=count;
    # 1909 "/tmp/fs-test.nc"
    const unsigned char*  src  =(const unsigned char* )buf;
    # 1910 "/tmp/fs-test.nc"
    left=to_total;
    # 1912 "/tmp/fs-test.nc"
    off=(((f->oflags&(1<<11)))?(f->din.size):(f->off));
    # 1916 "/tmp/fs-test.nc"
    if(f->oflags&(1<<11)) {
        # 1914 "/tmp/fs-test.nc"
        f->off=off;
    }
    # 1916 "/tmp/fs-test.nc"
    written=0;
    # 1939 "/tmp/fs-test.nc"
    while(left>0) {
        # 1919 "/tmp/fs-test.nc"
        blk_idx=off/512;
        # 1920 "/tmp/fs-test.nc"
        blk_off=off%512;
        # 1921 "/tmp/fs-test.nc"
        to_write=512-blk_off;
        # 1924 "/tmp/fs-test.nc"
        if(to_write>left) {
            # 1922 "/tmp/fs-test.nc"
            to_write=left;
        }
        # 1924 "/tmp/fs-test.nc"
        disk_blk=inode_bmap_alloc(f->inum,&f->din,blk_idx);
        # 1928 "/tmp/fs-test.nc"
        if(disk_blk==0) {
            # 1925 "/tmp/fs-test.nc"
            break;
        }
        # 1928 "/tmp/fs-test.nc"
        unsigned char  bufblk[512]  ;
        memset(&bufblk, 0, sizeof(bufblk));
        # 1929 "/tmp/fs-test.nc"
        read_block(disk_blk,bufblk);
        # 1930 "/tmp/fs-test.nc"
        memcpy(bufblk+blk_off,src,to_write);
        # 1931 "/tmp/fs-test.nc"
        write_block(disk_blk,bufblk);
        # 1933 "/tmp/fs-test.nc"
        left-=to_write;
        # 1934 "/tmp/fs-test.nc"
        off+=to_write;
        # 1935 "/tmp/fs-test.nc"
        src+=to_write;
        # 1936 "/tmp/fs-test.nc"
        written+=to_write;
    }
    # 1939 "/tmp/fs-test.nc"
    f->off+=written;
    # 1941 "/tmp/fs-test.nc"
    newsize=f->off;
    # 1945 "/tmp/fs-test.nc"
    if(newsize>f->din.size) {
        # 1943 "/tmp/fs-test.nc"
        f->din.size=newsize;
    }
    # 1945 "/tmp/fs-test.nc"
    f->din.mtime=fs_now();
    # 1946 "/tmp/fs-test.nc"
    write_inode(f->inum,&f->din);
    # 1947 "/tmp/fs-test.nc"
        return written;
}

int  fs_size(int fd)
{
    struct file**  file_table  ;
    int idx;
    struct file*  f  ;
    memset(&file_table, 0, sizeof(file_table));
    memset(&idx, 0, sizeof(idx));
    memset(&f, 0, sizeof(f));
    # 1951 "/tmp/fs-test.nc"
    file_table=get_current_file_table();
    # 1957 "/tmp/fs-test.nc"
    if(file_table[fd]==((void*)0)) {
        # 1954 "/tmp/fs-test.nc"
                return -1;
    }
    # 1957 "/tmp/fs-test.nc"
    idx=fd;
    # 1961 "/tmp/fs-test.nc"
    if(idx<0||idx>=32||!file_table[idx]->used) {
        # 1959 "/tmp/fs-test.nc"
                return -1;
    }
    # 1961 "/tmp/fs-test.nc"
    f=file_table[idx];
    # 1962 "/tmp/fs-test.nc"
        return f->din.size;
}

int fs_close(long fd, int massive)
{
    struct file**  ft  ;
    struct file*  f  ;
    struct spipe*  p  ;
    memset(&ft, 0, sizeof(ft));
    memset(&f, 0, sizeof(f));
    memset(&p, 0, sizeof(p));
    # 1969 "/tmp/fs-test.nc"
    ft=get_current_file_table();
    # 1971 "/tmp/fs-test.nc"
    if(fd<0||fd>=32) {
        # 1970 "/tmp/fs-test.nc"
                return -1;
    }
    # 1971 "/tmp/fs-test.nc"
    f=ft[fd];
    # 1975 "/tmp/fs-test.nc"
    if(!f) {
        # 1972 "/tmp/fs-test.nc"
                return -1;
    }
    # 1975 "/tmp/fs-test.nc"
    ft[fd]=((void*)0);
    # 1981 "/tmp/fs-test.nc"
    if(massive) {
        # 1978 "/tmp/fs-test.nc"
        owner_remove(f,gProc[gActiveProc]);
    }
    # 1984 "/tmp/fs-test.nc"
    if(f->used>0) {
        # 1981 "/tmp/fs-test.nc"
        f->used--;
    }
    # 1987 "/tmp/fs-test.nc"
    if(f->used>0) {
        # 1984 "/tmp/fs-test.nc"
                return 0;
    }
    # 1987 "/tmp/fs-test.nc"
    p=f->pipe;
    # 2001 "/tmp/fs-test.nc"
    if(p) {
        # 1990 "/tmp/fs-test.nc"
        if(f->read_pipe&&p->nreader>0) {
            # 1989 "/tmp/fs-test.nc"
            if(--p->nreader==0) {
                # 1989 "/tmp/fs-test.nc"
                p->read_open=0;
            }
        }
        # 1991 "/tmp/fs-test.nc"
        if(f->write_pipe&&p->nwriter>0) {
            # 1990 "/tmp/fs-test.nc"
            if(--p->nwriter==0) {
                # 1990 "/tmp/fs-test.nc"
                p->write_open=0;
            }
        }
        # 1992 "/tmp/fs-test.nc"
        if(p->used>0) {
            # 1991 "/tmp/fs-test.nc"
            p->used--;
        }
        # 1992 "/tmp/fs-test.nc"
        neoc_pipe_linked_file_remove(p,f);
        # 1998 "/tmp/fs-test.nc"
        if(p->used==0) {
            # 1995 "/tmp/fs-test.nc"
            neoc_pipe_linked_file_clear_pipe_refs(p);
            # 1996 "/tmp/fs-test.nc"
            free_pipe(p);
        }
    }
    # 2001 "/tmp/fs-test.nc"
    free_file(f);
    # 2002 "/tmp/fs-test.nc"
        return 0;
}

void fs_exit(struct file**  file_table  )
{
    int i;
    memset(&i, 0, sizeof(i));
    # 2010 "/tmp/fs-test.nc"
    for(i=0    ;i<32;i++){
        # 2008 "/tmp/fs-test.nc"
        fs_close(i,1);
    }
}

void fs_dup_table(struct proc*  owner  , struct file**  result  , struct file**  orig  )
{
    int i;
    memset(&i, 0, sizeof(i));
    # 2047 "/tmp/fs-test.nc"
    for(i=0    ;i<32;i++){
        # 2045 "/tmp/fs-test.nc"
        if(orig[i]) {
            # 2017 "/tmp/fs-test.nc"
            result[i]=orig[i];
            # 2018 "/tmp/fs-test.nc"
            result[i]->used++;
            # 2021 "/tmp/fs-test.nc"
            owner_add(result[i],owner);
        }
    }
}

void free_fs_table(struct file**  file_table  )
{
}

void fs_dup2(int oldfd, int newfd)
{
    struct file**  ft  ;
    memset(&ft, 0, sizeof(ft));
    # 2068 "/tmp/fs-test.nc"
    ft=get_current_file_table();
    # 2070 "/tmp/fs-test.nc"
    if(oldfd<0||oldfd>=32) {
        # 2069 "/tmp/fs-test.nc"
                return;
    }
    # 2071 "/tmp/fs-test.nc"
    if(newfd<0||newfd>=32) {
        # 2070 "/tmp/fs-test.nc"
                return;
    }
    # 2072 "/tmp/fs-test.nc"
    if(ft[oldfd]==((void*)0)) {
        # 2071 "/tmp/fs-test.nc"
                return;
    }
    # 2074 "/tmp/fs-test.nc"
    if(oldfd==newfd) {
        # 2072 "/tmp/fs-test.nc"
                return;
    }
    # 2075 "/tmp/fs-test.nc"
    if(ft[newfd]!=((void*)0)) {
        # 2074 "/tmp/fs-test.nc"
        fs_close(newfd,0);
    }
    # 2075 "/tmp/fs-test.nc"
    ft[newfd]=ft[oldfd];
    # 2076 "/tmp/fs-test.nc"
    ft[oldfd]->used++;
}

int fs_fstat_fd(int fd, struct stat*  st  )
{
    struct file**  ft  ;
    struct file*  f  ;
    memset(&ft, 0, sizeof(ft));
    memset(&f, 0, sizeof(f));
    # 2085 "/tmp/fs-test.nc"
    if(!st) {
        # 2083 "/tmp/fs-test.nc"
                return -1;
    }
    # 2085 "/tmp/fs-test.nc"
    ft=get_current_file_table();
    # 2087 "/tmp/fs-test.nc"
    if(fd<0||fd>=32) {
        # 2086 "/tmp/fs-test.nc"
                return -1;
    }
    # 2087 "/tmp/fs-test.nc"
    f=ft[fd];
    # 2092 "/tmp/fs-test.nc"
    if(!f||!f->used) {
        # 2088 "/tmp/fs-test.nc"
                return -1;
    }
    # 2092 "/tmp/fs-test.nc"
    memset(st,0,sizeof(*st));
    # 2104 "/tmp/fs-test.nc"
    st->type=f->din.type;
    # 2104 "/tmp/fs-test.nc"
    st->nlink=f->din.nlink;
    # 2104 "/tmp/fs-test.nc"
    st->size=f->din.size;
    # 2105 "/tmp/fs-test.nc"
    st->mode=f->din.mode;
    # 2105 "/tmp/fs-test.nc"
    st->uid=f->din.uid;
    # 2105 "/tmp/fs-test.nc"
    st->gid=f->din.gid;
    # 2106 "/tmp/fs-test.nc"
    st->atime=f->din.atime;
    # 2106 "/tmp/fs-test.nc"
    st->mtime=f->din.mtime;
    # 2106 "/tmp/fs-test.nc"
    st->ctime=f->din.ctime;
    # 2108 "/tmp/fs-test.nc"
        return 0;
}

long fs_lseek(int fd, long offset, int whence)
{
    struct file**  ft  ;
    struct file*  f  ;
    long base;
    long newoff;
    memset(&ft, 0, sizeof(ft));
    memset(&f, 0, sizeof(f));
    memset(&base, 0, sizeof(base));
    memset(&newoff, 0, sizeof(newoff));
    # 2115 "/tmp/fs-test.nc"
    if(fd<0||fd>=32) {
        # 2114 "/tmp/fs-test.nc"
                return -1;
    }
    # 2115 "/tmp/fs-test.nc"
    ft=get_current_file_table();
    # 2116 "/tmp/fs-test.nc"
    f=ft[fd];
    # 2119 "/tmp/fs-test.nc"
    if(!f) {
        # 2117 "/tmp/fs-test.nc"
                return -1;
    }
    # 2119 "/tmp/fs-test.nc"
    # 2127 "/tmp/fs-test.nc"
    switch (    whence) {
        # 2121 "/tmp/fs-test.nc"
        case 0:
        # 2121 "/tmp/fs-test.nc"
        base=0;
        # 2121 "/tmp/fs-test.nc"
        break;
        # 2122 "/tmp/fs-test.nc"
        case 1:
        # 2122 "/tmp/fs-test.nc"
        base=(long)f->off;
        # 2122 "/tmp/fs-test.nc"
        break;
        # 2123 "/tmp/fs-test.nc"
        case 2:
        # 2123 "/tmp/fs-test.nc"
        base=(long)f->din.size;
        # 2123 "/tmp/fs-test.nc"
        break;
        # 2124 "/tmp/fs-test.nc"
        default:
        # 2124 "/tmp/fs-test.nc"
                return -1;
    }
    # 2127 "/tmp/fs-test.nc"
    newoff=base+offset;
    # 2130 "/tmp/fs-test.nc"
    if(newoff<0) {
        # 2128 "/tmp/fs-test.nc"
                return -1;
    }
    # 2130 "/tmp/fs-test.nc"
    f->off=(unsigned int )newoff;
    # 2131 "/tmp/fs-test.nc"
        return (long)f->off;
}

