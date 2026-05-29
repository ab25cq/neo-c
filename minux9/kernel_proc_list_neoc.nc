#include "kernel_proc_list_neoc.h"

static list<struct proc*>* g_proc_list = null;
static list<long>* g_kernel_state_list = null;
static list<struct spipe*>* g_free_pipe_list = null;
static list<struct file*>* g_free_file_list = null;

static list<struct proc*>* get_proc_slot_list()
{
    if(gProc == null) {
        gProc = borrow new list<struct proc*>();
    }

    return (list<struct proc*>*)gProc;
}

struct proc* proc_slot_get(int pid)
{
    list<struct proc*>* proc_list = get_proc_slot_list();

    if(pid < 0 || pid >= proc_list.length()) {
        return null;
    }

    return proc_list[pid];
}

void proc_slot_set(int pid, struct proc* p)
{
    if(pid < 0 || pid >= PROC_MAX) {
        return;
    }

    list<struct proc*>* proc_list = get_proc_slot_list();

    while(proc_list.length() <= pid) {
        proc_list.add(null);
    }

    proc_list.replace(pid, p);
}

void proc_slot_reset(void)
{
    list<struct proc*>* proc_list = get_proc_slot_list();
    proc_list.reset();
}

static list<int>* get_proc_supp_gid_list(struct proc* p)
{
    if(p == null) {
        return null;
    }

    if(p->supp_gid_list == null) {
        p->supp_gid_list = borrow new list<int>();
    }

    return (list<int>*)p->supp_gid_list;
}

static list<struct spipe*>* get_free_pipe_list()
{
    if(g_free_pipe_list == null) {
        g_free_pipe_list = borrow new list<struct spipe*>();
    }

    return g_free_pipe_list;
}

static list<struct file*>* get_free_file_list()
{
    if(g_free_file_list == null) {
        g_free_file_list = borrow new list<struct file*>();
    }

    return g_free_file_list;
}

static list<struct process_pages*>* get_proc_process_pages_list(struct proc* p)
{
    if(p == null) {
        return null;
    }

    if(p->process_pages_list == null) {
        p->process_pages_list = borrow new list<struct process_pages*>();
    }

    return (list<struct process_pages*>*)p->process_pages_list;
}

static list<long>* get_process_page_kalloc_list(struct process_pages* page)
{
    if(page == null) {
        return null;
    }

    if(page->process_kalloc_address_list == null) {
        page->process_kalloc_address_list = borrow new list<long>();
    }

    return (list<long>*)page->process_kalloc_address_list;
}

static list<struct proc*>* get_file_owner_list(struct file* f)
{
    if(f == null) {
        return null;
    }

    if(f->owner_process_list == null) {
        f->owner_process_list = borrow new list<struct proc*>();
    }

    return (list<struct proc*>*)f->owner_process_list;
}

static list<struct file*>* get_pipe_linked_file_list(struct spipe* p)
{
    if(p == null) {
        return null;
    }

    if(p->linked_file_list == null) {
        p->linked_file_list = borrow new list<struct file*>();
    }

    return (list<struct file*>*)p->linked_file_list;
}

static void free_string_ptr_list(list<long>* items)
{
    if(items == null) {
        return;
    }

    int len = items.length();

    for(int i=0; i<len; i++) {
        char* item = (char*)items[i];

        if(item != null) {
            free(item);
        }
    }

    items.reset();
}

void neoc_proc_list_init(void)
{
    if(g_proc_list == null) {
        g_proc_list = borrow new list<struct proc*>();
    }
    else {
        g_proc_list.reset();
    }
}

void neoc_proc_list_add(struct proc* p)
{
    if(p == null) {
        return;
    }

    if(g_proc_list == null) {
        neoc_proc_list_init();
    }

    foreach(proc, g_proc_list) {
        if(proc == p) {
            return;
        }
    }

    g_proc_list.add(p);
}

void neoc_proc_list_remove(struct proc* p)
{
    if(g_proc_list == null || p == null) {
        return;
    }

    int len = g_proc_list.length();
    struct proc* copied[len > 0 ? len : 1];
    int copied_len = 0;

    for(int i=0; i<len; i++) {
        struct proc* proc = g_proc_list[i];

        if(proc != p) {
            copied[copied_len++] = proc;
        }
    }

    g_proc_list.reset();

    for(int i=0; i<copied_len; i++) {
        g_proc_list.add(copied[i]);
    }
}

void neoc_proc_list_replace(struct proc* oldp, struct proc* newp)
{
    if(newp == null) {
        return;
    }

    if(g_proc_list == null) {
        neoc_proc_list_init();
        g_proc_list.add(newp);
        return;
    }

    for(int i=0; i<g_proc_list.length(); i++) {
        struct proc* proc = g_proc_list[i];
        
        if(proc == oldp) {
            g_proc_list.replace(i, newp);
            return;
        }
    }

    neoc_proc_list_add(newp);
}

struct proc* neoc_proc_find_zombie_in_pgrp(uint16_t pgrp)
{
    if(g_proc_list == null) {
        return (struct proc*)0;
    }

    foreach(proc, g_proc_list) {
        if(proc != null
            && proc->zombie
            && proc->pgrp == pgrp)
        {
            return proc;
        }
    }

    return (struct proc*)0;
}

struct proc* neoc_proc_find_zombie_child(int parent_pid)
{
    if(g_proc_list == null) {
        return (struct proc*)0;
    }

    foreach(proc, g_proc_list) {
        if(proc != null
            && proc->zombie
            && proc->parent_pid == parent_pid)
        {
            return proc;
        }
    }

    return (struct proc*)0;
}

bool neoc_proc_has_child(int parent_pid)
{
    if(g_proc_list == null) {
        return false;
    }

    foreach(proc, g_proc_list) {
        if(proc != null
            && proc->parent_pid == parent_pid)
        {
            return true;
        }
    }

    return false;
}

bool neoc_proc_is_file_open(uint32_t inum)
{
    if(g_proc_list == null) {
        return false;
    }

    foreach(proc, g_proc_list) {
        if(proc == null) {
            continue;
        }

        for(int i=0; i<MAX_OPEN_FILES; i++) {
            if(proc->file_table[i] != null
                && proc->file_table[i]->kind == FK_FILE
                && proc->file_table[i]->inum == inum)
            {
                return true;
            }
        }
    }

    return false;
}

void neoc_proc_supp_gid_clear(struct proc* p)
{
    list<int>* supp_gid_list = get_proc_supp_gid_list(p);

    if(supp_gid_list == null) {
        return;
    }

    supp_gid_list.reset();
    p->nsupp = 0;
}

void neoc_proc_supp_gid_add(struct proc* p, uint16_t gid)
{
    list<int>* supp_gid_list = get_proc_supp_gid_list(p);

    if(supp_gid_list == null) {
        return;
    }

    foreach(it, supp_gid_list) {
        if(it == gid) {
            p->nsupp = supp_gid_list.length();
            return;
        }
    }

    supp_gid_list.add(gid);
    p->nsupp = supp_gid_list.length();
}

void neoc_proc_copy_supp_gids(struct proc* dest, struct proc* src)
{
    list<int>* supp_gid_list = get_proc_supp_gid_list(src);

    neoc_proc_supp_gid_clear(dest);

    if(supp_gid_list == null) {
        return;
    }

    foreach(it, supp_gid_list) {
        neoc_proc_supp_gid_add(dest, (uint16_t)it);
    }
}

int neoc_proc_has_supp_gid(struct proc* p, uint16_t gid)
{
    list<int>* supp_gid_list = get_proc_supp_gid_list(p);

    if(supp_gid_list == null) {
        return 0;
    }

    foreach(it, supp_gid_list) {
        if(it == gid) {
            return 1;
        }
    }

    return 0;
}

void neoc_fs_pool_init(void)
{
    get_free_pipe_list();
    get_free_file_list();
}

struct spipe* neoc_fs_pop_free_pipe(void)
{
    list<struct spipe*>* free_pipe_list = get_free_pipe_list();

    if(free_pipe_list == null || free_pipe_list.length() == 0) {
        return null;
    }

    int len = free_pipe_list.length();
    struct spipe* result = free_pipe_list[len-1];

    free_pipe_list.delete(len-1, len);

    return result;
}

void neoc_fs_push_free_pipe(struct spipe* p)
{
    list<struct spipe*>* free_pipe_list = get_free_pipe_list();

    if(free_pipe_list == null || p == null) {
        return;
    }

    foreach(it, free_pipe_list) {
        if(it == p) {
            return;
        }
    }

    free_pipe_list.add(p);
}

struct file* neoc_fs_pop_free_file(void)
{
    list<struct file*>* free_file_list = get_free_file_list();

    if(free_file_list == null || free_file_list.length() == 0) {
        return null;
    }

    int len = free_file_list.length();
    struct file* result = free_file_list[len-1];

    free_file_list.delete(len-1, len);

    return result;
}

void neoc_fs_push_free_file(struct file* f)
{
    list<struct file*>* free_file_list = get_free_file_list();

    if(free_file_list == null || f == null) {
        return;
    }

    foreach(it, free_file_list) {
        if(it == f) {
            return;
        }
    }

    free_file_list.add(f);
}

int neoc_exec_load_user_string_vector(pagetable_t pagetable, uint64_t user_vec, int max_items, int max_len, int allow_null_vec, char*** out_items, int* out_count)
{
    if(out_items == null || out_count == null || max_items < 0 || max_len <= 0) {
        return -1;
    }

    *out_items = null;
    *out_count = 0;

    if(user_vec == 0) {
        if(allow_null_vec) {
            char** empty_items = (char**)malloc(sizeof(char*));

            if(empty_items == null) {
                return -1;
            }

            empty_items[0] = null;
            *out_items = empty_items;
            return 0;
        }

        return -1;
    }

    list<long>* items = borrow new list<long>();

    for(int i=0; i<max_items; i++) {
        uint64_t user_item_ptr = 0;

        if(copyin(pagetable, (char*)&user_item_ptr, user_vec + i * sizeof(uint64_t), sizeof(uint64_t)) < 0) {
            free_string_ptr_list(items);
            return -1;
        }

        if(user_item_ptr == 0) {
            break;
        }

        char* item = (char*)malloc(max_len);

        if(item == null) {
            free_string_ptr_list(items);
            return -1;
        }

        if(copyinstr(pagetable, item, user_item_ptr, max_len) < 0) {
            free(item);
            free_string_ptr_list(items);
            return -1;
        }

        items.add((long)item);
    }

    int count = items.length();
    char** result = (char**)malloc(sizeof(char*) * (count + 1));

    if(result == null) {
        free_string_ptr_list(items);
        return -1;
    }

    for(int i=0; i<count; i++) {
        result[i] = (char*)items[i];
    }
    result[count] = null;

    items.reset();

    *out_items = result;
    *out_count = count;

    return 0;
}

void neoc_exec_free_string_vector(char** items, int count)
{
    if(items == null) {
        return;
    }

    for(int i=0; i<count; i++) {
        if(items[i] != null) {
            free(items[i]);
        }
    }

    free(items);
}

int neoc_exec_push_string_vector(pagetable_t pagetable, char** items, int count, uint64_t* sp_io, uint64_t* vec_base_out)
{
    if(sp_io == NULL || vec_base_out == NULL || count < 0) {
        return -1;
    }

    list<long>* addrs = borrow new list<long>();
    uint64_t sp = *sp_io;

    for(int i=count-1; i>=0; i--) {
        size_t len = strlen(items[i]) + 1;
        sp -= len;

        if(copyout(pagetable, sp, items[i], len) < 0) {
            addrs.reset();
            return -1;
        }

        addrs.add((long)sp);
    }

    sp -= (count + 1) * sizeof(uint64_t);
    sp &= ~7ULL;

    uint64_t vec_base = sp;

    for(int i=0; i<count; i++) {
        uint64_t ptr = (uint64_t)addrs[count - 1 - i];

        if(copyout(pagetable, vec_base + i * sizeof(uint64_t), &ptr, sizeof(uint64_t)) < 0) {
            addrs.reset();
            return -1;
        }
    }

    uint64_t nullp = 0;

    if(copyout(pagetable, vec_base + count * sizeof(uint64_t), &nullp, sizeof(uint64_t)) < 0) {
        addrs.reset();
        return -1;
    }

    addrs.reset();

    *sp_io = sp;
    *vec_base_out = vec_base;

    return 0;
}

void neoc_proc_process_pages_clear(struct proc* p)
{
    list<struct process_pages*>* process_pages_list = get_proc_process_pages_list(p);

    if(process_pages_list == null) {
        return;
    }

    process_pages_list.reset();
    p->num_process_pages = 0;
}

void neoc_proc_process_pages_add(struct proc* p, struct process_pages* page)
{
    list<struct process_pages*>* process_pages_list = get_proc_process_pages_list(p);

    if(process_pages_list == null || page == null) {
        return;
    }

    process_pages_list.add(page);
    p->num_process_pages = process_pages_list.length();
}

struct process_pages* neoc_proc_process_pages_get(struct proc* p, int index)
{
    list<struct process_pages*>* process_pages_list = get_proc_process_pages_list(p);

    if(process_pages_list == null) {
        return (struct process_pages*)0;
    }

    if(index < 0 || index >= process_pages_list.length()) {
        return (struct process_pages*)0;
    }

    return process_pages_list[index];
}

struct process_pages* neoc_proc_process_pages_last(struct proc* p)
{
    list<struct process_pages*>* process_pages_list = get_proc_process_pages_list(p);

    if(process_pages_list == null || process_pages_list.length() == 0) {
        return (struct process_pages*)0;
    }

    return process_pages_list[process_pages_list.length()-1];
}

void neoc_process_page_kalloc_clear(struct process_pages* page)
{
    list<long>* process_kalloc_list = get_process_page_kalloc_list(page);

    if(process_kalloc_list == null) {
        return;
    }

    process_kalloc_list.reset();
    page->num_process_kalloc_address = 0;
}

void neoc_process_page_kalloc_add(struct process_pages* page, char* addr)
{
    list<long>* process_kalloc_list = get_process_page_kalloc_list(page);

    if(process_kalloc_list == null || addr == null) {
        return;
    }

    process_kalloc_list.add((long)addr);
    page->num_process_kalloc_address = process_kalloc_list.length();
}

char* neoc_process_page_kalloc_get(struct process_pages* page, int index)
{
    list<long>* process_kalloc_list = get_process_page_kalloc_list(page);

    if(process_kalloc_list == null) {
        return (char*)0;
    }

    if(index < 0 || index >= process_kalloc_list.length()) {
        return (char*)0;
    }

    return (char*)process_kalloc_list[index];
}

void neoc_file_owner_clear(struct file* f)
{
    list<struct proc*>* owner_list = get_file_owner_list(f);

    if(owner_list == null) {
        return;
    }

    owner_list.reset();
    f->num_owner_process = 0;
}

void neoc_file_owner_add(struct file* f, struct proc* owner)
{
    list<struct proc*>* owner_list = get_file_owner_list(f);

    if(owner_list == null || owner == null) {
        return;
    }

    foreach(proc, owner_list) {
        if(proc == owner) {
            f->num_owner_process = owner_list.length();
            return;
        }
    }

    owner_list.add(owner);
    f->num_owner_process = owner_list.length();
}

void neoc_file_owner_remove(struct file* f, struct proc* owner)
{
    list<struct proc*>* owner_list = get_file_owner_list(f);

    if(owner_list == null || owner == null) {
        return;
    }

    int len = owner_list.length();
    struct proc* copied[len > 0 ? len : 1];
    int copied_len = 0;

    for(int i=0; i<len; i++) {
        struct proc* proc = owner_list[i];

        if(proc != owner) {
            copied[copied_len++] = proc;
        }
    }

    owner_list.reset();

    for(int i=0; i<copied_len; i++) {
        owner_list.add(copied[i]);
    }

    f->num_owner_process = owner_list.length();
}

void neoc_pipe_linked_file_clear(struct spipe* p)
{
    list<struct file*>* linked_file_list = get_pipe_linked_file_list(p);

    if(linked_file_list == null) {
        return;
    }

    linked_file_list.reset();
    p->num_linked_file = 0;
}

void neoc_pipe_linked_file_add(struct spipe* p, struct file* f)
{
    list<struct file*>* linked_file_list = get_pipe_linked_file_list(p);

    if(linked_file_list == null || f == null) {
        return;
    }

    foreach(file, linked_file_list) {
        if(file == f) {
            p->num_linked_file = linked_file_list.length();
            return;
        }
    }

    linked_file_list.add(f);
    p->num_linked_file = linked_file_list.length();
}

void neoc_pipe_linked_file_remove(struct spipe* p, struct file* f)
{
    list<struct file*>* linked_file_list = get_pipe_linked_file_list(p);

    if(linked_file_list == null || f == null) {
        return;
    }

    int len = linked_file_list.length();
    struct file* copied[len > 0 ? len : 1];
    int copied_len = 0;

    for(int i=0; i<len; i++) {
        struct file* file = linked_file_list[i];

        if(file != f) {
            copied[copied_len++] = file;
        }
    }

    linked_file_list.reset();

    for(int i=0; i<copied_len; i++) {
        linked_file_list.add(copied[i]);
    }

    p->num_linked_file = linked_file_list.length();
}

void neoc_pipe_linked_file_clear_pipe_refs(struct spipe* p)
{
    list<struct file*>* linked_file_list = get_pipe_linked_file_list(p);

    if(linked_file_list == null) {
        return;
    }

    foreach(file, linked_file_list) {
        if(file != null) {
            file->pipe = null;
        }
    }

    linked_file_list.reset();
    p->num_linked_file = 0;
}

void neoc_kernel_state_init(void)
{
    if(g_kernel_state_list == null) {
        g_kernel_state_list = borrow new list<long>();
    }
    else {
        g_kernel_state_list.reset();
    }
}

void neoc_kernel_state_clear(void)
{
    if(g_kernel_state_list == null) {
        neoc_kernel_state_init();
        return;
    }

    g_kernel_state_list.reset();
}

void neoc_kernel_state_add(struct sKernelState* state)
{
    if(state == null) {
        return;
    }

    if(g_kernel_state_list == null) {
        neoc_kernel_state_init();
    }

    g_kernel_state_list.add((long)state);
}

struct sKernelState* neoc_kernel_state_find(int active_proc)
{
    if(g_kernel_state_list == null) {
        return (struct sKernelState*)0;
    }

    foreach(state_ptr, g_kernel_state_list) {
        if(state_ptr != 0
            && ((struct sKernelState*)state_ptr)->gYieldUserActiveProc == (uint64_t)active_proc)
        {
            return (struct sKernelState*)state_ptr;
        }
    }

    return (struct sKernelState*)0;
}

struct sKernelState* neoc_kernel_state_take(int active_proc)
{
    long removed_state = 0;

    if(g_kernel_state_list == null) {
        return (struct sKernelState*)0;
    }

    int len = g_kernel_state_list.length();
    long copied[len > 0 ? len : 1];
    int copied_len = 0;

    for(int i=0; i<len; i++) {
        long state_ptr = g_kernel_state_list[i];

        if(state_ptr != 0
            && ((struct sKernelState*)state_ptr)->gYieldUserActiveProc == (uint64_t)active_proc
            && removed_state == 0)
        {
            removed_state = state_ptr;
            continue;
        }

        copied[copied_len++] = state_ptr;
    }

    if(removed_state == 0) {
        return (struct sKernelState*)0;
    }

    g_kernel_state_list.reset();

    for(int i=0; i<copied_len; i++) {
        g_kernel_state_list.add(copied[i]);
    }

    return (struct sKernelState*)removed_state;
}

struct sKernelState* neoc_kernel_state_take_first(void)
{
    if(g_kernel_state_list == null || g_kernel_state_list.length() == 0) {
        return (struct sKernelState*)0;
    }

    long removed_state = g_kernel_state_list[0];
    int len = g_kernel_state_list.length();
    long copied[len > 1 ? len - 1 : 1];
    int copied_len = 0;

    for(int i=1; i<len; i++) {
        copied[copied_len++] = g_kernel_state_list[i];
    }

    g_kernel_state_list.reset();

    for(int i=0; i<copied_len; i++) {
        g_kernel_state_list.add(copied[i]);
    }

    return (struct sKernelState*)removed_state;
}
