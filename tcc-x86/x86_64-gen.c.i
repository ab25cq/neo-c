# 0 "x86_64-gen.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "x86_64-gen.c"
# 23 "x86_64-gen.c"
using c
{

# 1 "/usr/include/assert.h" 1 3 4
# 1 "/usr/include/features.h" 1 3 4
# 2 "/usr/include/assert.h" 2 3 4
# 19 "/usr/include/assert.h" 3 4

# 19 "/usr/include/assert.h" 3 4
_Noreturn void __assert_fail (const char *, const char *, int, const char *);
# 27 "x86_64-gen.c" 2
# 46 "x86_64-gen.c"

# 46 "x86_64-gen.c"
enum {
    TREG_RAX = 0,
    TREG_RCX = 1,
    TREG_RDX = 2,
    TREG_RSI = 6,
    TREG_RDI = 7,
    TREG_R8 = 8,
    TREG_R9 = 9,
    TREG_R10 = 10,
    TREG_R11 = 11,

    TREG_XMM0 = 3,
    TREG_ST0 = 4,

    TREG_MEM = 0x10,
};




int reg_classes[5] = {
              0x0001 | 0x0004,
              0x0001 | 0x0008,
              0x0001 | 0x0010,
               0x0002 | 0x0020,
              0x0040,
};
# 106 "x86_64-gen.c"
static unsigned long func_sub_sp_offset;
static int func_ret_sub;


void g(int c)
{
    int ind1;
    ind1 = ind + 1;
    if (ind1 > cur_text_section->data_allocated)
        section_realloc(cur_text_section, ind1);
    cur_text_section->data[ind] = c;
    ind = ind1;
}

void o(unsigned int c)
{
    while (c) {
        g(c);
        c = c >> 8;
    }
}

void gen_le32(int c)
{
    g(c);
    g(c >> 8);
    g(c >> 16);
    g(c >> 24);
}

void gen_le64(int64_t c)
{
    g(c);
    g(c >> 8);
    g(c >> 16);
    g(c >> 24);
    g(c >> 32);
    g(c >> 40);
    g(c >> 48);
    g(c >> 56);
}


void gsym_addr(int t, int a)
{
    int n, *ptr;
    while (t) {
        ptr = (int *)(cur_text_section->data + t);
        n = *ptr;
        *ptr = a - t - 4;
        t = n;
    }
}

void gsym(int t)
{
    gsym_addr(t, ind);
}





static int is64_type(int t)
{
    return ((t & VT_BTYPE) == VT_PTR ||
            (t & VT_BTYPE) == VT_FUNC ||
            (t & VT_BTYPE) == VT_LLONG);
}

static int is_sse_float(int t) {
    int bt;
    bt = t & VT_BTYPE;
    return bt == VT_DOUBLE || bt == VT_FLOAT;
}


static int oad(int c, int s)
{
    int ind1;

    o(c);
    ind1 = ind + 4;
    if (ind1 > cur_text_section->data_allocated)
        section_realloc(cur_text_section, ind1);
    *(int *)(cur_text_section->data + ind) = s;
    s = ind;
    ind = ind1;
    return s;
}


static void gen_addr64(int r, Sym *sym, int64_t c)
{
    if (r & VT_SYM)
        greloc(cur_text_section, sym, ind, R_X86_64_64);
    gen_le64(c);
}


static void gen_addrpc32(int r, Sym *sym, int c)
{
    if (r & VT_SYM)
        greloc(cur_text_section, sym, ind, R_X86_64_PC32);
    gen_le32(c-4);
}


static void gen_gotpcrel(int r, Sym *sym, int c)
{
    Section *sr;
    ElfW(Rela) *rel;
    greloc(cur_text_section, sym, ind, R_X86_64_GOTPCREL);
    sr = cur_text_section->reloc;
    rel = (ElfW(Rela) *)(sr->data + sr->data_offset - sizeof(ElfW(Rela)));
    rel->r_addend = -4;
    gen_le32(0);

    if (c) {

        o(0x48 + (((r) >> 3) & 1));
        o(0x81);
        o(0xc0 + ((r) & 7));
        gen_le32(c);
    }
}

static void gen_modrm_impl(int op_reg, int r, Sym *sym, int c, int is_got)
{
    op_reg = ((op_reg) & 7) << 3;
    if ((r & VT_VALMASK) == VT_CONST) {

        o(0x05 | op_reg);
        if (is_got) {
            gen_gotpcrel(r, sym, c);
        } else {
            gen_addrpc32(r, sym, c);
        }
    } else if ((r & VT_VALMASK) == VT_LOCAL) {

        if (c == (char)c) {

            o(0x45 | op_reg);
            g(c);
        } else {
            oad(0x85 | op_reg, c);
        }
    } else if ((r & VT_VALMASK) >= TREG_MEM) {
        if (c) {
            g(0x80 | op_reg | ((r) & 7));
            gen_le32(c);
        } else {
            g(0x00 | op_reg | ((r) & 7));
        }
    } else {
        g(0x00 | op_reg | (r & VT_VALMASK));
    }
}



static void gen_modrm(int op_reg, int r, Sym *sym, int c)
{
    gen_modrm_impl(op_reg, r, sym, c, 0);
}



static void gen_modrm64(int opcode, int op_reg, int r, Sym *sym, int c)
{
    int is_got;
    int rex = 0x48 | ((((op_reg) >> 3) & 1) << 2);
    if ((r & VT_VALMASK) != VT_CONST &&
        (r & VT_VALMASK) != VT_LOCAL) {
        rex |= (((VT_VALMASK & r) >> 3) & 1);
    }
    o(rex);
    o(opcode);
    is_got = (op_reg & TREG_MEM) && !(sym->type.t & VT_STATIC);
    gen_modrm_impl(op_reg, r, sym, c, is_got);
}



void load(int r, SValue *sv)
{
    int v, t, ft, fc, fr;
    SValue v1;

    fr = sv->r;
    ft = sv->type.t;
    fc = sv->c.ul;


    if ((fr & VT_VALMASK) == VT_CONST && (fr & VT_SYM) &&
        (fr & VT_LVAL) && !(sv->sym->type.t & VT_STATIC)) {

        int tr = r | TREG_MEM;
        if (is_float(ft)) {

            tr = get_reg(0x0001) | TREG_MEM;
        }
        gen_modrm64(0x8b, tr, fr, sv->sym, 0);


        fr = tr | VT_LVAL;
    }

    v = fr & VT_VALMASK;
    if (fr & VT_LVAL) {
        if (v == VT_LLOCAL) {
            v1.type.t = VT_PTR;
            v1.r = VT_LOCAL | VT_LVAL;
            v1.c.ul = fc;
            load(r, &v1);
            fr = r;
        }
        if ((ft & VT_BTYPE) == VT_FLOAT) {
            o(0x6e0f66);
            r = 0;
        } else if ((ft & VT_BTYPE) == VT_DOUBLE) {
            o(0x7e0ff3);
            r = 0;
        } else if ((ft & VT_BTYPE) == VT_LDOUBLE) {
            o(0xdb);
            r = 5;
        } else if ((ft & VT_TYPE) == VT_BYTE) {
            o(0xbe0f);
        } else if ((ft & VT_TYPE) == (VT_BYTE | VT_UNSIGNED)) {
            o(0xb60f);
        } else if ((ft & VT_TYPE) == VT_SHORT) {
            o(0xbf0f);
        } else if ((ft & VT_TYPE) == (VT_SHORT | VT_UNSIGNED)) {
            o(0xb70f);
        } else if (is64_type(ft)) {
            gen_modrm64(0x8b, r, fr, sv->sym, fc);
            return;
        } else {
            o(0x8b);
        }
        gen_modrm(r, fr, sv->sym, fc);
    } else {
        if (v == VT_CONST) {
            if ((ft & VT_BTYPE) == VT_LLONG) {
                
# 350 "x86_64-gen.c" 3 4
               ((void)((
# 350 "x86_64-gen.c"
               !(fr & VT_SYM)
# 350 "x86_64-gen.c" 3 4
               ) || (__assert_fail(
# 350 "x86_64-gen.c"
               "!(fr & VT_SYM)"
# 350 "x86_64-gen.c" 3 4
               , "x86_64-gen.c", 350, __func__),0)))
# 350 "x86_64-gen.c"
                                     ;
                o(0x48);
                o(0xb8 + ((r) & 7));
                gen_addr64(fr, sv->sym, sv->c.ull);
            } else {
                if (fr & VT_SYM) {
                    if (sv->sym->type.t & VT_STATIC) {
                        o(0x8d48);
                        o(0x05 + ((r) & 7) * 8);
                        gen_addrpc32(fr, sv->sym, fc);
                    } else {
                        o(0x8b48);
                        o(0x05 + ((r) & 7) * 8);
                        gen_gotpcrel(r, sv->sym, fc);
                    }
                } else {
                    o(0xb8 + ((r) & 7));
                    gen_le32(fc);
                }
            }
        } else if (v == VT_LOCAL) {
            o(0x48 | (((r) >> 3) & 1));
            o(0x8d);
            gen_modrm(r, VT_LOCAL, sv->sym, fc);
        } else if (v == VT_CMP) {
            oad(0xb8 + r, 0);
            o(0x0f);
            o(fc);
            o(0xc0 + r);
        } else if (v == VT_JMP || v == VT_JMPI) {
            t = v & 1;
            oad(0xb8 + r, t);
            o(0x05eb);
            gsym(fc);
            oad(0xb8 + r, t ^ 1);
        } else if (v != r) {
            if (r == TREG_XMM0) {
                
# 387 "x86_64-gen.c" 3 4
               ((void)((
# 387 "x86_64-gen.c"
               v == TREG_ST0
# 387 "x86_64-gen.c" 3 4
               ) || (__assert_fail(
# 387 "x86_64-gen.c"
               "v == TREG_ST0"
# 387 "x86_64-gen.c" 3 4
               , "x86_64-gen.c", 387, __func__),0)))
# 387 "x86_64-gen.c"
                                    ;

                o(0xf0245cdd);

                o(0x44100ff2);
                o(0xf024);
            } else if (r == TREG_ST0) {
                
# 394 "x86_64-gen.c" 3 4
               ((void)((
# 394 "x86_64-gen.c"
               v == TREG_XMM0
# 394 "x86_64-gen.c" 3 4
               ) || (__assert_fail(
# 394 "x86_64-gen.c"
               "v == TREG_XMM0"
# 394 "x86_64-gen.c" 3 4
               , "x86_64-gen.c", 394, __func__),0)))
# 394 "x86_64-gen.c"
                                     ;


                o(0x44110ff2);
                o(0xf024);
                o(0xf02444dd);
            } else {
                o(0x48 | (((r) >> 3) & 1) | ((((v) >> 3) & 1) << 2));
                o(0x89);
                o(0xc0 + r + v * 8);
            }
        }
    }
}


void store(int r, SValue *v)
{
    int fr, bt, ft, fc;
    int op64 = 0;

    int pic = 0;

    ft = v->type.t;
    fc = v->c.ul;
    fr = v->r & VT_VALMASK;
    bt = ft & VT_BTYPE;


    if (fr == VT_CONST && (v->r & VT_SYM)) {

        o(0x1d8b4c);
        gen_gotpcrel(TREG_R11, v->sym, v->c.ul);
        pic = is64_type(bt) ? 0x49 : 0x41;
    }


    if (bt == VT_FLOAT) {
        o(0x66);
        o(pic);
        o(0x7e0f);
        r = 0;
    } else if (bt == VT_DOUBLE) {
        o(0x66);
        o(pic);
        o(0xd60f);
        r = 0;
    } else if (bt == VT_LDOUBLE) {
        o(0xc0d9);
        o(pic);
        o(0xdb);
        r = 7;
    } else {
        if (bt == VT_SHORT)
            o(0x66);
        o(pic);
        if (bt == VT_BYTE || bt == VT_BOOL)
            o(0x88);
        else if (is64_type(bt))
            op64 = 0x89;
        else
            o(0x89);
    }
    if (pic) {

        if (op64)
            o(op64);
        o(3 + (r << 3));
    } else if (op64) {
        if (fr == VT_CONST ||
            fr == VT_LOCAL ||
            (v->r & VT_LVAL)) {
            gen_modrm64(op64, r, v->r, v->sym, fc);
        } else if (fr != r) {

            abort();
            o(0xc0 + fr + r * 8);
        }
    } else {
        if (fr == VT_CONST ||
            fr == VT_LOCAL ||
            (v->r & VT_LVAL)) {
            gen_modrm(r, v->r, v->sym, fc);
        } else if (fr != r) {

            abort();
            o(0xc0 + fr + r * 8);
        }
    }
}

static void gadd_sp(int val)
{
    if (val == (char)val) {
        o(0xc48348);
        g(val);
    } else {
        oad(0xc48148, val);
    }
}


static void gcall_or_jmp(int is_jmp)
{
    int r;
    if ((vtop->r & (VT_VALMASK | VT_LVAL)) == VT_CONST) {

        if (vtop->r & VT_SYM) {

            greloc(cur_text_section, vtop->sym,
                   ind + 1, R_X86_64_PC32);
        } else {

            put_elf_reloc(symtab_section, cur_text_section,
                          ind + 1, R_X86_64_PC32, 0);
        }
        oad(0xe8 + is_jmp, vtop->c.ul - 4);
    } else {

        r = TREG_R11;
        load(r, vtop);
        o(0x41);
        o(0xff);
        o(0xd0 + ((r) & 7) + (is_jmp << 4));
    }
}

static uint8_t arg_regs[6] = {
    TREG_RDI, TREG_RSI, TREG_RDX, TREG_RCX, TREG_R8, TREG_R9
};



void gfunc_call(int nb_args)
{
    int size, align, r, args_size, i, func_call;
    Sym *func_sym;
    SValue *orig_vtop;
    int nb_reg_args = 0;
    int nb_sse_args = 0;
    int sse_reg, gen_reg;


    args_size = 0;
    for(i = 0; i < nb_args; i++) {
        if ((vtop[-i].type.t & VT_BTYPE) == VT_STRUCT) {
            args_size += type_size(&vtop->type, &align);
        } else if ((vtop[-i].type.t & VT_BTYPE) == VT_LDOUBLE) {
            args_size += 16;
        } else if (is_sse_float(vtop[-i].type.t)) {
            nb_sse_args++;
            if (nb_sse_args > 8) args_size += 8;
        } else {
            nb_reg_args++;
            if (nb_reg_args > 6) args_size += 8;
        }
    }




    orig_vtop = vtop;
    gen_reg = nb_reg_args;
    sse_reg = nb_sse_args;

    if (args_size &= 8) {
        o(0x50);
    }
    for(i = 0; i < nb_args; i++) {
        if ((vtop->type.t & VT_BTYPE) == VT_STRUCT) {
            size = type_size(&vtop->type, &align);

            size = (size + 3) & ~3;

            o(0x48);
            oad(0xec81, size);

            r = get_reg(0x0001);
            o(0x48 + (((r) >> 3) & 1));
            o(0x89);
            o(0xe0 + r);
            {

                SValue tmp = vtop[1];
                vset(&vtop->type, r | VT_LVAL, 0);
                vswap();
                vstore();
                vtop[1] = tmp;
            }
            args_size += size;
        } else if ((vtop->type.t & VT_BTYPE) == VT_LDOUBLE) {
            gv(0x0040);
            size = 16;
            oad(0xec8148, size);
            o(0x7cdb);
            g(0x24);
            g(0x00);
            args_size += size;
        } else if (is_sse_float(vtop->type.t)) {
            int j = --sse_reg;
            if (j >= 8) {
                gv(0x0002);
                o(0x50);

                o(0x04d60f66);
                o(0x24);
                args_size += 8;
            }
        } else {
            int j = --gen_reg;


            if (j >= 6) {
                r = gv(0x0001);
                o(0x50 + r);
                args_size += 8;
            }
        }
        vtop--;
    }
    vtop = orig_vtop;





    gen_reg = nb_reg_args;
    sse_reg = nb_sse_args;
    for(i = 0; i < nb_args; i++) {
        if ((vtop->type.t & VT_BTYPE) == VT_STRUCT ||
            (vtop->type.t & VT_BTYPE) == VT_LDOUBLE) {
        } else if (is_sse_float(vtop->type.t)) {
            int j = --sse_reg;
            if (j < 8) {
                gv(0x0002);

                o(0x280f);
                o(0xc0 + (sse_reg << 3));
            }
        } else {
            int j = --gen_reg;


            if (j < 6) {
                r = gv(0x0001);
                if (j < 2) {
                    o(0x8948);
                    o(0xc0 + r * 8 + arg_regs[j]);
                } else if (j < 4) {
                    o(0x8949);

                    o(0xc0 + r * 8 + j);
                } else {
                    o(0x8949);

                    o(0xc0 + r * 8 + j - 4);
                }
            }
        }
        vtop--;
    }

    save_regs(0);


    if (nb_reg_args > 2) {
        o(0xd2894c);
        if (nb_reg_args > 3) {
            o(0xd9894c);
        }
    }

    func_sym = vtop->type.ref;
    func_call = FUNC_CALL(func_sym->r);
    oad(0xb8, nb_sse_args < 8 ? nb_sse_args : 8);
    gcall_or_jmp(0);
    if (args_size)
        gadd_sp(args_size);
    vtop--;
}
# 683 "x86_64-gen.c"
static void push_arg_reg(int i) {
    loc -= 8;
    gen_modrm64(0x89, arg_regs[i], VT_LOCAL, NULL, loc);
}


void gfunc_prolog(CType *func_type)
{
    int i, addr, align, size, func_call;
    int param_index, param_addr, reg_param_index, sse_param_index;
    Sym *sym;
    CType *type;

    func_ret_sub = 0;

    sym = func_type->ref;
    func_call = FUNC_CALL(sym->r);
    addr = 8 * 2;
    loc = 0;
    ind += 11;
    func_sub_sp_offset = ind;

    if (func_type->ref->c == FUNC_ELLIPSIS) {
        int seen_reg_num, seen_sse_num, seen_stack_size;
        seen_reg_num = seen_sse_num = 0;

        seen_stack_size = 8 * 2;

        sym = func_type->ref;
        while ((sym = sym->next) != NULL) {
            type = &sym->type;
            if (is_sse_float(type->t)) {
                if (seen_sse_num < 8) {
                    seen_sse_num++;
                } else {
                    seen_stack_size += 8;
                }
            } else if ((type->t & VT_BTYPE) == VT_STRUCT) {
                size = type_size(type, &align);
                size = (size + 3) & ~3;
                seen_stack_size += size;
            } else if ((type->t & VT_BTYPE) == VT_LDOUBLE) {
                seen_stack_size += 16;
            } else {
                if (seen_reg_num < 6) {
                    seen_reg_num++;
                } else {
                    seen_stack_size += 8;
                }
            }
        }

        loc -= 16;

        o(0xf045c7);
        gen_le32(seen_reg_num * 8);

        o(0xf445c7);
        gen_le32(seen_sse_num * 16 + 48);

        o(0xf845c7);
        gen_le32(seen_stack_size);


        for (i = 0; i < 8; i++) {
            loc -= 16;
            o(0xd60f66);
            gen_modrm(7 - i, VT_LOCAL, NULL, loc);

            o(0x85c748);
            gen_le32(loc + 8);
            gen_le32(0);
        }
        for (i = 0; i < 6; i++) {
            push_arg_reg(5 - i);
        }
    }

    sym = func_type->ref;
    param_index = 0;
    reg_param_index = 0;
    sse_param_index = 0;



    func_vt = sym->type;
    if ((func_vt.t & VT_BTYPE) == VT_STRUCT) {
        push_arg_reg(reg_param_index);
        param_addr = loc;

        func_vc = loc;
        param_index++;
        reg_param_index++;
    }

    while ((sym = sym->next) != NULL) {
        type = &sym->type;
        size = type_size(type, &align);
        size = (size + 3) & ~3;
        if (is_sse_float(type->t)) {
            if (sse_param_index < 8) {

                loc -= 8;
                o(0xd60f66);
                gen_modrm(sse_param_index, VT_LOCAL, NULL, loc);
                param_addr = loc;
            } else {
                param_addr = addr;
                addr += size;
            }
            sse_param_index++;
        } else if ((type->t & VT_BTYPE) == VT_STRUCT ||
                   (type->t & VT_BTYPE) == VT_LDOUBLE) {
            param_addr = addr;
            addr += size;
        } else {
            if (reg_param_index < 6) {

                push_arg_reg(reg_param_index);
                param_addr = loc;
            } else {
                param_addr = addr;
                addr += 8;
            }
            reg_param_index++;
        }
        sym_push(sym->v & ~SYM_FIELD, type,
                 VT_LOCAL | VT_LVAL, param_addr);
        param_index++;
    }
}


void gfunc_epilog(void)
{
    int v, saved_ind;

    o(0xc9);
    if (func_ret_sub == 0) {
        o(0xc3);
    } else {
        o(0xc2);
        g(func_ret_sub);
        g(func_ret_sub >> 8);
    }

    v = (-loc + 15) & -16;
    saved_ind = ind;
    ind = func_sub_sp_offset - 11;
# 840 "x86_64-gen.c"
    {
        o(0xe5894855);
        o(0xec8148);
        gen_le32(v);



    }
    ind = saved_ind;
}


int gjmp(int t)
{
    return oad(0xe9, t);
}


void gjmp_addr(int a)
{
    int r;
    r = a - ind - 2;
    if (r == (char)r) {
        g(0xeb);
        g(r);
    } else {
        oad(0xe9, a - ind - 5);
    }
}


int gtst(int inv, int t)
{
    int v, *p;

    v = vtop->r & VT_VALMASK;
    if (v == VT_CMP) {

        g(0x0f);
        t = oad((vtop->c.i - 16) ^ inv, t);
    } else if (v == VT_JMP || v == VT_JMPI) {

        if ((v & 1) == inv) {

            p = &vtop->c.i;
            while (*p != 0)
                p = (int *)(cur_text_section->data + *p);
            *p = t;
            t = vtop->c.i;
        } else {
            t = gjmp(t);
            gsym(vtop->c.i);
        }
    } else {
        if (is_float(vtop->type.t) ||
            (vtop->type.t & VT_BTYPE) == VT_LLONG) {
            vpushi(0);
            gen_op(TOK_NE);
        }
        if ((vtop->r & (VT_VALMASK | VT_LVAL | VT_SYM)) == VT_CONST) {

            if ((vtop->c.i != 0) != inv)
                t = gjmp(t);
        } else {
            v = gv(0x0001);
            o(0x85);
            o(0xc0 + v * 9);
            g(0x0f);
            t = oad(0x85 ^ inv, t);
        }
    }
    vtop--;
    return t;
}


void gen_opi(int op)
{
    int r, fr, opc, c;

    switch(op) {
    case '+':
    case TOK_ADDC1:
        opc = 0;
    gen_op8:
        if ((vtop->r & (VT_VALMASK | VT_LVAL | VT_SYM)) == VT_CONST &&
            !is64_type(vtop->type.t)) {

            vswap();
            r = gv(0x0001);
            if (is64_type(vtop->type.t)) {
                o(0x48 | (((r) >> 3) & 1));
            }
            vswap();
            c = vtop->c.i;
            if (c == (char)c) {

                o(0x83);
                o(0xc0 | (opc << 3) | ((r) & 7));
                g(c);
            } else {
                o(0x81);
                oad(0xc0 | (opc << 3) | ((r) & 7), c);
            }
        } else {
            gv2(0x0001, 0x0001);
            r = vtop[-1].r;
            fr = vtop[0].r;
            if (opc != 7 ||
                is64_type(vtop[0].type.t) || (vtop[0].type.t & VT_UNSIGNED) ||
                is64_type(vtop[-1].type.t) || (vtop[-1].type.t & VT_UNSIGNED)) {
                o(0x48 | (((r) >> 3) & 1) | ((((fr) >> 3) & 1) << 2));
            }
            o((opc << 3) | 0x01);
            o(0xc0 + ((r) & 7) + ((fr) & 7) * 8);
        }
        vtop--;
        if (op >= TOK_ULT && op <= TOK_GT) {
            vtop->r = VT_CMP;
            vtop->c.i = op;
        }
        break;
    case '-':
    case TOK_SUBC1:
        opc = 5;
        goto gen_op8;
    case TOK_ADDC2:
        opc = 2;
        goto gen_op8;
    case TOK_SUBC2:
        opc = 3;
        goto gen_op8;
    case '&':
        opc = 4;
        goto gen_op8;
    case '^':
        opc = 6;
        goto gen_op8;
    case '|':
        opc = 1;
        goto gen_op8;
    case '*':
        gv2(0x0001, 0x0001);
        r = vtop[-1].r;
        fr = vtop[0].r;
        if (is64_type(vtop[0].type.t) || (vtop[0].type.t & VT_UNSIGNED) ||
            is64_type(vtop[-1].type.t) || (vtop[-1].type.t & VT_UNSIGNED)) {
            o(0x48 | (((fr) >> 3) & 1) | ((((r) >> 3) & 1) << 2));
        }
        vtop--;
        o(0xaf0f);
        o(0xc0 + fr + r * 8);
        break;
    case TOK_SHL:
        opc = 4;
        goto gen_shift;
    case TOK_SHR:
        opc = 5;
        goto gen_shift;
    case TOK_SAR:
        opc = 7;
    gen_shift:
        opc = 0xc0 | (opc << 3);
        if ((vtop->r & (VT_VALMASK | VT_LVAL | VT_SYM)) == VT_CONST) {

            vswap();
            r = gv(0x0001);
            if ((vtop->type.t & VT_BTYPE) == VT_LLONG) {
                o(0x48 | (((r) >> 3) & 1));
                c = 0x3f;
            } else {
                c = 0x1f;
            }
            vswap();
            c &= vtop->c.i;
            o(0xc1);
            o(opc | r);
            g(c);
        } else {

            gv2(0x0001, 0x0008);
            r = vtop[-1].r;
            if ((vtop[-1].type.t & VT_BTYPE) == VT_LLONG) {
                o(0x48 | (((r) >> 3) & 1));
            }
            o(0xd3);
            o(opc | r);
        }
        vtop--;
        break;
    case '/':
    case TOK_UDIV:
    case TOK_PDIV:
    case '%':
    case TOK_UMOD:
    case TOK_UMULL:


        gv2(0x0004, 0x0008);
        r = vtop[-1].r;
        fr = vtop[0].r;
        vtop--;
        save_reg(TREG_RDX);
        if (op == TOK_UMULL) {
            o(0xf7);
            o(0xe0 + fr);
            vtop->r2 = TREG_RDX;
            r = TREG_RAX;
        } else {
            if (op == TOK_UDIV || op == TOK_UMOD) {
                o(0xf7d231);
                o(0xf0 + fr);
            } else {
                if ((vtop->type.t & VT_BTYPE) & VT_LLONG) {
                    o(0x9948);
                    o(0x48 + (((fr) >> 3) & 1));
                } else {
                    o(0x99);
                }
                o(0xf7);
                o(0xf8 + fr);
            }
            if (op == '%' || op == TOK_UMOD)
                r = TREG_RDX;
            else
                r = TREG_RAX;
        }
        vtop->r = r;
        break;
    default:
        opc = 7;
        goto gen_op8;
    }
}

void gen_opl(int op)
{
    gen_opi(op);
}




void gen_opf(int op)
{
    int a, ft, fc, swapped, r;
    int float_type =
        (vtop->type.t & VT_BTYPE) == VT_LDOUBLE ? 0x0040 : 0x0002;


    if ((vtop[-1].r & (VT_VALMASK | VT_LVAL)) == VT_CONST) {
        vswap();
        gv(float_type);
        vswap();
    }
    if ((vtop[0].r & (VT_VALMASK | VT_LVAL)) == VT_CONST)
        gv(float_type);


    if ((vtop[-1].r & VT_LVAL) &&
        (vtop[0].r & VT_LVAL)) {
        vswap();
        gv(float_type);
        vswap();
    }
    swapped = 0;


    if (vtop[-1].r & VT_LVAL) {
        vswap();
        swapped = 1;
    }
    if ((vtop->type.t & VT_BTYPE) == VT_LDOUBLE) {
        if (op >= TOK_ULT && op <= TOK_GT) {

            load(TREG_ST0, vtop);
            save_reg(TREG_RAX);
            if (op == TOK_GE || op == TOK_GT)
                swapped = !swapped;
            else if (op == TOK_EQ || op == TOK_NE)
                swapped = 0;
            if (swapped)
                o(0xc9d9);
            o(0xe9da);
            o(0xe0df);
            if (op == TOK_EQ) {
                o(0x45e480);
                o(0x40fC80);
            } else if (op == TOK_NE) {
                o(0x45e480);
                o(0x40f480);
                op = TOK_NE;
            } else if (op == TOK_GE || op == TOK_LE) {
                o(0x05c4f6);
                op = TOK_EQ;
            } else {
                o(0x45c4f6);
                op = TOK_EQ;
            }
            vtop--;
            vtop->r = VT_CMP;
            vtop->c.i = op;
        } else {

            load(TREG_ST0, vtop);
            swapped = !swapped;

            switch(op) {
            default:
            case '+':
                a = 0;
                break;
            case '-':
                a = 4;
                if (swapped)
                    a++;
                break;
            case '*':
                a = 1;
                break;
            case '/':
                a = 6;
                if (swapped)
                    a++;
                break;
            }
            ft = vtop->type.t;
            fc = vtop->c.ul;
            o(0xde);
            o(0xc1 + (a << 3));
            vtop--;
        }
    } else {
        if (op >= TOK_ULT && op <= TOK_GT) {

            r = vtop->r;
            fc = vtop->c.ul;
            if ((r & VT_VALMASK) == VT_LLOCAL) {
                SValue v1;
                r = get_reg(0x0001);
                v1.type.t = VT_INT;
                v1.r = VT_LOCAL | VT_LVAL;
                v1.c.ul = fc;
                load(r, &v1);
                fc = 0;
            }

            if (op == TOK_EQ || op == TOK_NE) {
                swapped = 0;
            } else {
                if (op == TOK_LE || op == TOK_LT)
                    swapped = !swapped;
                if (op == TOK_LE || op == TOK_GE) {
                    op = 0x93;
                } else {
                    op = 0x97;
                }
            }

            if (swapped) {
                o(0x7e0ff3);
                gen_modrm(1, r, vtop->sym, fc);

                if ((vtop->type.t & VT_BTYPE) == VT_DOUBLE) {
                    o(0x66);
                }
                o(0x2e0f);
                o(0xc8);
            } else {
                if ((vtop->type.t & VT_BTYPE) == VT_DOUBLE) {
                    o(0x66);
                }
                o(0x2e0f);
                gen_modrm(0, r, vtop->sym, fc);
            }

            vtop--;
            vtop->r = VT_CMP;
            vtop->c.i = op;
        } else {

            if ((vtop->type.t & VT_BTYPE) == VT_LDOUBLE) {
                load(TREG_XMM0, vtop);
                swapped = !swapped;
            }
            switch(op) {
            default:
            case '+':
                a = 0;
                break;
            case '-':
                a = 4;
                break;
            case '*':
                a = 1;
                break;
            case '/':
                a = 6;
                break;
            }
            ft = vtop->type.t;
            fc = vtop->c.ul;
            if ((ft & VT_BTYPE) == VT_LDOUBLE) {
                o(0xde);
                o(0xc1 + (a << 3));
            } else {

                r = vtop->r;
                if ((r & VT_VALMASK) == VT_LLOCAL) {
                    SValue v1;
                    r = get_reg(0x0001);
                    v1.type.t = VT_INT;
                    v1.r = VT_LOCAL | VT_LVAL;
                    v1.c.ul = fc;
                    load(r, &v1);
                    fc = 0;
                }
                if (swapped) {

                    o(0x7e0ff3);
                    o(0xc8);
                    load(TREG_XMM0, vtop);

                    if ((ft & VT_BTYPE) == VT_DOUBLE) {
                        o(0xf2);
                    } else {
                        o(0xf3);
                    }
                    o(0x0f);
                    o(0x58 + a);
                    o(0xc1);
                } else {
                    if ((ft & VT_BTYPE) == VT_DOUBLE) {
                        o(0xf2);
                    } else {
                        o(0xf3);
                    }
                    o(0x0f);
                    o(0x58 + a);
                    gen_modrm(0, r, vtop->sym, fc);
                }
            }
            vtop--;
        }
    }
}



void gen_cvt_itof(int t)
{
    if ((t & VT_BTYPE) == VT_LDOUBLE) {
        save_reg(TREG_ST0);
        gv(0x0001);
        if ((vtop->type.t & VT_BTYPE) == VT_LLONG) {


            o(0x50 + (vtop->r & VT_VALMASK));
            o(0x242cdf);
            o(0x08c48348);
        } else if ((vtop->type.t & (VT_BTYPE | VT_UNSIGNED)) ==
                   (VT_INT | VT_UNSIGNED)) {

            o(0x6a);
            g(0x00);
            o(0x50 + (vtop->r & VT_VALMASK));
            o(0x242cdf);
            o(0x10c48348);
        } else {

            o(0x50 + (vtop->r & VT_VALMASK));
            o(0x2404db);
            o(0x08c48348);
        }
        vtop->r = TREG_ST0;
    } else {
        save_reg(TREG_XMM0);
        gv(0x0001);
        o(0xf2 + ((t & VT_BTYPE) == VT_FLOAT));
        if ((vtop->type.t & (VT_BTYPE | VT_UNSIGNED)) ==
            (VT_INT | VT_UNSIGNED) ||
            (vtop->type.t & VT_BTYPE) == VT_LLONG) {
            o(0x48);
        }
        o(0x2a0f);
        o(0xc0 + (vtop->r & VT_VALMASK));
        vtop->r = TREG_XMM0;
    }
}


void gen_cvt_ftof(int t)
{
    int ft, bt, tbt;

    ft = vtop->type.t;
    bt = ft & VT_BTYPE;
    tbt = t & VT_BTYPE;

    if (bt == VT_FLOAT) {
        gv(0x0002);
        if (tbt == VT_DOUBLE) {
            o(0xc0140f);
            o(0xc05a0f);
        } else if (tbt == VT_LDOUBLE) {

            o(0x44110ff3);
            o(0xf024);
            o(0xf02444d9);
            vtop->r = TREG_ST0;
        }
    } else if (bt == VT_DOUBLE) {
        gv(0x0002);
        if (tbt == VT_FLOAT) {
            o(0xc0140f66);
            o(0xc05a0f66);
        } else if (tbt == VT_LDOUBLE) {

            o(0x44110ff2);
            o(0xf024);
            o(0xf02444dd);
            vtop->r = TREG_ST0;
        }
    } else {
        gv(0x0040);
        if (tbt == VT_DOUBLE) {
            o(0xf0245cdd);

            o(0x44100ff2);
            o(0xf024);
            vtop->r = TREG_XMM0;
        } else if (tbt == VT_FLOAT) {
            o(0xf0245cd9);

            o(0x44100ff3);
            o(0xf024);
            vtop->r = TREG_XMM0;
        }
    }
}


void gen_cvt_ftoi(int t)
{
    int ft, bt, size, r;
    ft = vtop->type.t;
    bt = ft & VT_BTYPE;
    if (bt == VT_LDOUBLE) {
        gen_cvt_ftof(VT_DOUBLE);
        bt = VT_DOUBLE;
    }

    gv(0x0002);
    if (t != VT_INT)
        size = 8;
    else
        size = 4;

    r = get_reg(0x0001);
    if (bt == VT_FLOAT) {
        o(0xf3);
    } else if (bt == VT_DOUBLE) {
        o(0xf2);
    } else {
        
# 1404 "x86_64-gen.c" 3 4
       ((void)((
# 1404 "x86_64-gen.c"
       0
# 1404 "x86_64-gen.c" 3 4
       ) || (__assert_fail(
# 1404 "x86_64-gen.c"
       "0"
# 1404 "x86_64-gen.c" 3 4
       , "x86_64-gen.c", 1404, __func__),0)))
# 1404 "x86_64-gen.c"
                ;
    }
    if (size == 8) {
        o(0x48 + (((r) >> 3) & 1));
    }
    o(0x2c0f);
    o(0xc0 + (((r) & 7) << 3));
    vtop->r = r;
}


void ggoto(void)
{
    gcall_or_jmp(1);
    vtop--;
}



}
