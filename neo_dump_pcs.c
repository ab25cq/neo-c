// neo_dump_pcs.c
#include "neo_frame.h"
#include <stdio.h>

__thread neo_frame_t *neo_current_frame = NULL;

int neo_dump_pcs_to_file(const char *path, int max_depth) {
    FILE *fp = fopen(path, "w");
    if (!fp) return -1;

    int n = 0;
    for (neo_frame_t *f = neo_current_frame; f && n < max_depth; f = f->prev) {
        // addr2line は「呼び出し元行」に寄せたいことが多いので ret_pc-1 を推奨
        // RISC-V でもだいたいOK（命令境界に注意）。嫌なら ret_pc のままでも良い。
        unsigned long long pc = (f->ret_pc > 0) ? (f->ret_pc - 1) : f->ret_pc;
        fprintf(fp, "0x%llx\n", (unsigned long long)pc);
        n++;
    }

    fclose(fp);
    return n;
}
