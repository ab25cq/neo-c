#ifndef KERNEL_PROC_LIST_NEOC_H
#define KERNEL_PROC_LIST_NEOC_H

#define va_end(ap) __builtin_va_end(ap)
#include <neo-c.h>

typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long uint64_t;

#define MAX_OPEN_FILES 32
#define NDIRECT 12
#define PROC_MAX 64

typedef uint64_t pte_t;
typedef pte_t* pagetable_t;

struct context_t {
    uint64_t ra;
    uint64_t sp;
    uint64_t gp;
    uint64_t tp;
    uint64_t t0;
    uint64_t t1;
    uint64_t t2;
    uint64_t t3;
    uint64_t t4;
    uint64_t t5;
    uint64_t t6;
    uint64_t a0;
    uint64_t a1;
    uint64_t a2;
    uint64_t a3;
    uint64_t a4;
    uint64_t a5;
    uint64_t a6;
    uint64_t a7;
    uint64_t s0;
    uint64_t s1;
    uint64_t s2;
    uint64_t s3;
    uint64_t s4;
    uint64_t s5;
    uint64_t s6;
    uint64_t s7;
    uint64_t s8;
    uint64_t s9;
    uint64_t s10;
    uint64_t s11;
    uint64_t mepc;
};

struct sKernelState
{
    struct context_t gYieldContext;
    struct context_t gYieldReturnContext;
    char* gYieldStack;
    uint64_t gYieldUserSatp;
    uint64_t gYieldUserSP;
    uint64_t gYieldUserActiveProc;
};

struct dinode {
    uint16_t type;
    uint16_t major;
    uint16_t minor;
    uint16_t nlink;
    uint32_t size;
    uint32_t mode;
    uint16_t uid;
    uint16_t gid;
    uint32_t atime;
    uint32_t mtime;
    uint32_t ctime;
    uint32_t addrs[NDIRECT + 2];
};

struct file;

struct process_pages
{
    char** process_kalloc_address;
    int num_process_kalloc_address;
    void* process_kalloc_address_list;
};

struct proc {
    struct context_t trapframe;
    struct context_t context;
    struct proc* parent;
    int parent_pid;
    char* stack_top;
    uint64_t vaddr;
    uint64_t memsz;
    uint64_t sz;
    int zombie;
    pagetable_t pagetable;
    char* program;
    int program_size;
    int xstatus;
    struct file* file_table[MAX_OPEN_FILES];
    struct process_pages** process_pages;
    int num_process_pages;
    void* process_pages_list;
    int debug_;
    int deleted;
    struct proc* next;
    char cwd[128];
    unsigned short umask;
    uint16_t uid;
    uint16_t gid;
    uint16_t pgrp;
    int nsupp;
    void* supp_gid_list;
    char username[32];
};

struct spipe {
    char data[512];
    uint32_t nread;
    uint32_t nwrite;
    int read_open;
    int write_open;
    int nreader;
    int nwriter;
    int used;
    int num_linked_file;
    void* linked_file_list;
};

struct file {
    enum { FK_STDIN, FK_STDOUT, FK_STDERR, FK_FILE, FK_PIPE, FK_TTY } kind;
    uint32_t inum;
    struct dinode din;
    uint32_t off;
    int used;
    struct spipe* pipe;
    int pipe_used;
    int read_pipe;
    int write_pipe;
    int oflags;
    int num_owner_process;
    void* owner_process_list;
};

extern void* gProc;
struct proc* proc_slot_get(int pid);
void proc_slot_set(int pid, struct proc* p);
void proc_slot_reset(void);
int proc_find_pid(struct proc* p);
void* malloc(unsigned int size);
void free(void* ptr);
int strlen(const char* s);
int copyin(pagetable_t pagetable, char *dst, uint64_t srcva, uint64_t len);
int copyinstr(pagetable_t pagetable, char *dst, uint64_t srcva, uint64_t max);
int copyout(pagetable_t pagetable, uint64_t dstva, void *src, uint64_t len);

void neoc_file_owner_clear(struct file* f);
void neoc_file_owner_add(struct file* f, struct proc* owner);
void neoc_file_owner_remove(struct file* f, struct proc* owner);

void neoc_pipe_linked_file_clear(struct spipe* p);
void neoc_pipe_linked_file_add(struct spipe* p, struct file* f);
void neoc_pipe_linked_file_remove(struct spipe* p, struct file* f);
void neoc_pipe_linked_file_clear_pipe_refs(struct spipe* p);

void neoc_proc_process_pages_clear(struct proc* p);
void neoc_proc_process_pages_add(struct proc* p, struct process_pages* page);
struct process_pages* neoc_proc_process_pages_get(struct proc* p, int index);
struct process_pages* neoc_proc_process_pages_last(struct proc* p);

void neoc_process_page_kalloc_clear(struct process_pages* page);
void neoc_process_page_kalloc_add(struct process_pages* page, char* addr);
char* neoc_process_page_kalloc_get(struct process_pages* page, int index);

void neoc_proc_supp_gid_clear(struct proc* p);
void neoc_proc_supp_gid_add(struct proc* p, uint16_t gid);
void neoc_proc_copy_supp_gids(struct proc* dest, struct proc* src);
int neoc_proc_has_supp_gid(struct proc* p, uint16_t gid);

void neoc_fs_pool_init(void);
struct spipe* neoc_fs_pop_free_pipe(void);
void neoc_fs_push_free_pipe(struct spipe* p);
struct file* neoc_fs_pop_free_file(void);
void neoc_fs_push_free_file(struct file* f);
int neoc_exec_load_user_string_vector(pagetable_t pagetable, uint64_t user_vec, int max_items, int max_len, int allow_null_vec, char*** out_items, int* out_count);
void neoc_exec_free_string_vector(char** items, int count);
int neoc_exec_push_string_vector(pagetable_t pagetable, char** items, int count, uint64_t* sp_io, uint64_t* vec_base_out);

#endif
