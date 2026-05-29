#include "minux.h"

#ifndef SEEK_SET
#define SEEK_SET 0
#define SEEK_CUR 1
#define SEEK_END 2
#endif

// -------- ELF64 types (LE) --------
typedef struct {
  unsigned char e_ident[16];
  uint16_t e_type;
  uint16_t e_machine;
  uint32_t e_version;
  uint64_t e_entry;
  uint64_t e_phoff;
  uint64_t e_shoff;
  uint32_t e_flags;
  uint16_t e_ehsize;
  uint16_t e_phentsize;
  uint16_t e_phnum;
  uint16_t e_shentsize;
  uint16_t e_shnum;
  uint16_t e_shstrndx;
} Elf64_Ehdr;

typedef struct {
  uint32_t p_type;
  uint32_t p_flags;
  uint64_t p_offset;
  uint64_t p_vaddr;
  uint64_t p_paddr;
  uint64_t p_filesz;
  uint64_t p_memsz;
  uint64_t p_align;
} Elf64_Phdr;

typedef struct {
  uint32_t sh_name;
  uint32_t sh_type;
  uint64_t sh_flags;
  uint64_t sh_addr;
  uint64_t sh_offset;
  uint64_t sh_size;
  uint32_t sh_link;
  uint32_t sh_info;
  uint64_t sh_addralign;
  uint64_t sh_entsize;
} Elf64_Shdr;

typedef struct {
  uint32_t st_name;
  unsigned char st_info;
  unsigned char st_other;
  uint16_t st_shndx;
  uint64_t st_value;
  uint64_t st_size;
} Elf64_Sym;

// -------- ELF const --------
#define EI_MAG0 0
#define EI_MAG1 1
#define EI_MAG2 2
#define EI_MAG3 3
#define EI_CLASS 4
#define EI_DATA  5
#define EI_VERSION 6
#define EI_OSABI 7

#define ELFMAG0 0x7f
#define ELFMAG1 'E'
#define ELFMAG2 'L'
#define ELFMAG3 'F'
#define ELFCLASS64 2
#define ELFDATA2LSB 1
#define EM_RISCV 243

#define PT_LOAD 1
#define PF_X 0x1
#define PF_W 0x2
#define PF_R 0x4

#define SHT_NULL    0
#define SHT_PROGBITS 1
#define SHT_SYMTAB  2
#define SHT_STRTAB  3
#define SHT_NOBITS  8

#define STT_NOTYPE 0
#define STT_OBJECT 1
#define STT_FUNC   2

#define ELF64_ST_TYPE(val) ((val) & 0xf)

// -------- utils --------
static int is_printable(unsigned char c) {
  return (c >= 32 && c <= 126);
}
static int check_magic(const Elf64_Ehdr* eh) {
  return (eh->e_ident[EI_MAG0]==ELFMAG0 &&
          eh->e_ident[EI_MAG1]==ELFMAG1 &&
          eh->e_ident[EI_MAG2]==ELFMAG2 &&
          eh->e_ident[EI_MAG3]==ELFMAG3);
}
static const char* secname(const char* shstr, uint32_t off, uint64_t size) {
  if (!shstr) return "(no-shstrtab)";
  if ((uint64_t)off >= size) return "(bad-name)";
  return shstr + off;
}
static void hexdump(const unsigned char* base, uint64_t file_off,
                    uint64_t vaddr_base, uint64_t size) {
  const uint64_t width = 16;
  uint64_t pos = 0;
  while (pos < size) {
    uint64_t line = (size - pos >= width) ? width : (size - pos);
    // Show both the vaddr and file offset
    printf("%08llx  (off %08llx)  ",
           (unsigned long long)(vaddr_base + pos),
           (unsigned long long)(file_off + pos));
    // hex
    for (uint64_t i=0;i<width;i++) {
      if (i < line) printf("%02x ", base[pos+i]);
      else printf("   ");
      if (i == 7) printf(" ");
    }
    printf(" |");
    // ascii
    for (uint64_t i=0;i<line;i++) {
      unsigned char c = base[pos+i];
      printf("%c", is_printable(c) ? c : '.');
    }
    printf("|\n");
    pos += line;
  }
}

// -------- main dump helpers --------
static void print_ehdr(const Elf64_Ehdr* eh) {
  printf("ELF Header:\n");
  printf("  Magic: %02x %02x %02x %02x  Class:%u Data:%u OSABI:%u\n",
    eh->e_ident[0],eh->e_ident[1],eh->e_ident[2],eh->e_ident[3],
    eh->e_ident[EI_CLASS],eh->e_ident[EI_DATA],eh->e_ident[EI_OSABI]);
  printf("  Type:%u Machine:%u Version:%u\n",
    (unsigned)eh->e_type,(unsigned)eh->e_machine,(unsigned)eh->e_version);
  printf("  Entry:0x%llx PHOFF:0x%llx SHOFF:0x%llx Flags:0x%x\n",
    (unsigned long long)eh->e_entry,
    (unsigned long long)eh->e_phoff,
    (unsigned long long)eh->e_shoff,
    (unsigned)eh->e_flags);
  printf("  EHSize:%u PHSize:%u PHNum:%u SHSize:%u SHNum:%u SHStrNdx:%u\n",
    eh->e_ehsize,eh->e_phentsize,eh->e_phnum,
    eh->e_shentsize,eh->e_shnum,eh->e_shstrndx);
}

static void print_phdrs(const unsigned char* buf, const Elf64_Ehdr* eh) {
  if (!eh->e_phoff || !eh->e_phnum) { printf("Program Headers: (none)\n"); return; }
  printf("Program Headers:\n");
  for (uint16_t i=0;i<eh->e_phnum;i++) {
    const Elf64_Phdr* ph = (const Elf64_Phdr*)(buf + eh->e_phoff + (uint64_t)i*eh->e_phentsize);
    const char* typ = (ph->p_type==PT_LOAD) ? "LOAD" : "OTHER";
    printf("  [%u] %s  Flags=%c%c%c  Off=0x%llx  Vaddr=0x%llx  Filesz=0x%llx  Memsz=0x%llx  Align=0x%llx\n",
      (unsigned)i, typ,
      (ph->p_flags&PF_R)?'R':'-',
      (ph->p_flags&PF_W)?'W':'-',
      (ph->p_flags&PF_X)?'X':'-',
      (unsigned long long)ph->p_offset,
      (unsigned long long)ph->p_vaddr,
      (unsigned long long)ph->p_filesz,
      (unsigned long long)ph->p_memsz,
      (unsigned long long)ph->p_align);
  }
}

static void print_shdrs(const unsigned char* buf, const Elf64_Ehdr* eh,
                        const char** out_shstr, uint64_t* out_shstrsz) {
  if (!eh->e_shoff || !eh->e_shnum) { printf("Section Headers: (none)\n"); *out_shstr=0; *out_shstrsz=0; return; }
  const Elf64_Shdr* sh = (const Elf64_Shdr*)(buf + eh->e_shoff);
  const Elf64_Shdr* shstr = 0;
  const char* shstrtab = 0;
  uint64_t shstrsz = 0;

  if (eh->e_shstrndx < eh->e_shnum) {
    shstr = &sh[eh->e_shstrndx];
    if (shstr->sh_type == SHT_STRTAB) {
      shstrtab = (const char*)(buf + shstr->sh_offset);
      shstrsz = shstr->sh_size;
    }
  }

  printf("Section Headers:\n");
  for (uint16_t i=0;i<eh->e_shnum;i++) {
    const char* name = secname(shstrtab, sh[i].sh_name, shstrsz);
    printf("  [%u] %-12s type=%u flags=0x%llx addr=0x%llx off=0x%llx size=0x%llx link=%u entsz=0x%llx\n",
      (unsigned)i, name, (unsigned)sh[i].sh_type,
      (unsigned long long)sh[i].sh_flags,
      (unsigned long long)sh[i].sh_addr,
      (unsigned long long)sh[i].sh_offset,
      (unsigned long long)sh[i].sh_size,
      (unsigned)sh[i].sh_link,
      (unsigned long long)sh[i].sh_entsize);
  }
  *out_shstr = shstrtab;
  *out_shstrsz = shstrsz;
}

static int load_symtab(const unsigned char* buf,
                       const Elf64_Ehdr* eh,
                       const Elf64_Sym** out_syms,
                       uint64_t* out_count,
                       const char** out_strtab);

static void print_symbols(const unsigned char* buf, const Elf64_Ehdr* eh,
                          const char* shstr, uint64_t shstrsz) {
  (void)shstr;
  (void)shstrsz;
  const Elf64_Sym* syms = 0;
  uint64_t count = 0;
  const char* strtab = 0;

  if (!load_symtab(buf, eh, &syms, &count, &strtab)) {
    printf("Symbols: (none)\n");
    return;
  }

  printf("Symbols (%llu entries):\n", (unsigned long long)count);
  uint64_t gp_val = 0; int gp_found=0;
  for (uint64_t i=0;i<count;i++) {
    const char* nm = strtab ? (strtab + syms[i].st_name) : "(no-strtab)";
    printf("  [%llu] %-24s  val=0x%llx  size=0x%llx  shndx=%u  info=0x%x\n",
      (unsigned long long)i, nm,
      (unsigned long long)syms[i].st_value,
      (unsigned long long)syms[i].st_size,
      (unsigned)syms[i].st_shndx, (unsigned)syms[i].st_info);
    // Check __global_pointer$
    if (!gp_found && nm && nm[0]=='_' && nm[1]=='_' && nm[2]=='g' && nm[3]=='l' &&
        nm[4]=='o' && nm[5]=='b' && nm[6]=='a' && nm[7]=='l' && nm[8]=='_' &&
        nm[9]=='p' && nm[10]=='o' && nm[11]=='i' && nm[12]=='n' && nm[13]=='t' &&
        nm[14]=='e' && nm[15]=='r' && nm[16]=='$' && nm[17]=='\0') {
      gp_val = syms[i].st_value; gp_found=1;
    }
  }
  if (gp_found) printf("  __global_pointer$ = 0x%llx\n", (unsigned long long)gp_val);
  else printf("  __global_pointer$ = (not found)\n");
}

static const Elf64_Shdr* find_section_by_name(const unsigned char* buf,
                                              const Elf64_Ehdr* eh,
                                              const char* shstr, uint64_t shstrsz,
                                              const char* name) {
  if (!eh->e_shoff || !eh->e_shnum || !shstr) return 0;
  const Elf64_Shdr* sh = (const Elf64_Shdr*)(buf + eh->e_shoff);
  for (uint16_t i=0;i<eh->e_shnum;i++) {
    const char* nm = secname(shstr, sh[i].sh_name, shstrsz);
    // Simple comparison
    const char* a = nm; const char* b = name;
    if (!a || !b) continue;
    int eq = 1;
    while (*a || *b) { if (*a != *b) { eq = 0; break; } a++; b++; }
    if (eq) return &sh[i];
  }
  return 0;
}

static int load_symtab(const unsigned char* buf,
                       const Elf64_Ehdr* eh,
                       const Elf64_Sym** out_syms,
                       uint64_t* out_count,
                       const char** out_strtab) {
  if (!eh->e_shoff || !eh->e_shnum) return 0;
  const Elf64_Shdr* sh = (const Elf64_Shdr*)(buf + eh->e_shoff);
  int idx_sym = -1;
  int idx_str_fallback = -1;

  for (uint16_t i = 0; i < eh->e_shnum; i++) {
    if (sh[i].sh_type == SHT_SYMTAB) idx_sym = i;
    if (sh[i].sh_type == SHT_STRTAB && i != eh->e_shstrndx && idx_str_fallback < 0) {
      idx_str_fallback = i;
    }
  }

  if (idx_sym < 0) return 0;
  const Elf64_Shdr* sh_sym = &sh[idx_sym];
  if (!sh_sym->sh_entsize) return 0;

  const Elf64_Shdr* sh_str = 0;
  if (sh_sym->sh_link < eh->e_shnum) sh_str = &sh[sh_sym->sh_link];
  else if (idx_str_fallback >= 0) sh_str = &sh[idx_str_fallback];

  *out_syms = (const Elf64_Sym*)(buf + sh_sym->sh_offset);
  *out_count = sh_sym->sh_size / sh_sym->sh_entsize;
  *out_strtab = sh_str ? (const char*)(buf + sh_str->sh_offset) : 0;
  return 1;
}

// -------- minimal RV64 disassembler --------
static const char* rv_regs[32] = {
  "zero","ra","sp","gp","tp","t0","t1","t2",
  "s0","s1","a0","a1","a2","a3","a4","a5",
  "a6","a7","s2","s3","s4","s5","s6","s7",
  "s8","s9","s10","s11","t3","t4","t5","t6"
};

static int32_t rv_sext(uint32_t value, int bits) {
  int32_t shift = 32 - bits;
  return (int32_t)(value << shift) >> shift;
}

static uint32_t rv_bits(uint32_t inst, int hi, int lo) {
  return (inst >> lo) & ((1u << (hi - lo + 1)) - 1u);
}

static void rv_decode(uint32_t inst, uint64_t addr, char* out, size_t outsz) {
  uint32_t opcode = inst & 0x7f;
  uint32_t rd = rv_bits(inst, 11, 7);
  uint32_t funct3 = rv_bits(inst, 14, 12);
  uint32_t rs1 = rv_bits(inst, 19, 15);
  uint32_t rs2 = rv_bits(inst, 24, 20);
  uint32_t funct7 = rv_bits(inst, 31, 25);

  switch (opcode) {
    case 0x13: { // OP-IMM
      int32_t imm = rv_sext(inst >> 20, 12);
      if (funct3 == 0x0)
        snprintf(out, outsz, "addi   %s, %s, %d", rv_regs[rd], rv_regs[rs1], imm);
      else if (funct3 == 0x6)
        snprintf(out, outsz, "ori    %s, %s, %d", rv_regs[rd], rv_regs[rs1], imm);
      else if (funct3 == 0x7)
        snprintf(out, outsz, "andi   %s, %s, %d", rv_regs[rd], rv_regs[rs1], imm);
      else if (funct3 == 0x4)
        snprintf(out, outsz, "xori   %s, %s, %d", rv_regs[rd], rv_regs[rs1], imm);
      else if (funct3 == 0x1)
        snprintf(out, outsz, "slli   %s, %s, %u", rv_regs[rd], rv_regs[rs1], rv_bits(inst, 25, 20));
      else if (funct3 == 0x5 && (funct7 & 0x20))
        snprintf(out, outsz, "srai   %s, %s, %u", rv_regs[rd], rv_regs[rs1], rv_bits(inst, 25, 20));
      else if (funct3 == 0x5)
        snprintf(out, outsz, "srli   %s, %s, %u", rv_regs[rd], rv_regs[rs1], rv_bits(inst, 25, 20));
      else
        snprintf(out, outsz, "op-imm (funct3=0x%x)", funct3);
      return;
    }
    case 0x33: {
      if (funct3 == 0x0 && funct7 == 0x00)
        snprintf(out, outsz, "add    %s, %s, %s", rv_regs[rd], rv_regs[rs1], rv_regs[rs2]);
      else if (funct3 == 0x0 && funct7 == 0x20)
        snprintf(out, outsz, "sub    %s, %s, %s", rv_regs[rd], rv_regs[rs1], rv_regs[rs2]);
      else if (funct3 == 0x7)
        snprintf(out, outsz, "and    %s, %s, %s", rv_regs[rd], rv_regs[rs1], rv_regs[rs2]);
      else if (funct3 == 0x6)
        snprintf(out, outsz, "or     %s, %s, %s", rv_regs[rd], rv_regs[rs1], rv_regs[rs2]);
      else if (funct3 == 0x4)
        snprintf(out, outsz, "xor    %s, %s, %s", rv_regs[rd], rv_regs[rs1], rv_regs[rs2]);
      else
        snprintf(out, outsz, "op (funct3=0x%x funct7=0x%x)", funct3, funct7);
      return;
    }
    case 0x17: {
      int32_t imm = rv_sext(inst & 0xfffff000u, 32);
      snprintf(out, outsz, "auipc  %s, 0x%x", rv_regs[rd], imm >> 12);
      return;
    }
    case 0x37: {
      int32_t imm = rv_sext(inst & 0xfffff000u, 32);
      snprintf(out, outsz, "lui    %s, 0x%x", rv_regs[rd], imm >> 12);
      return;
    }
    case 0x6f: {
      uint32_t imm =
        ((inst >> 12) & 0x000ff) |
        ((inst >> 20) & 0x00100) |
        ((inst >> 21) & 0x3fe00) |
        ((inst & 0x80000000u) ? 0xffe00000u : 0);
      int32_t simm = rv_sext(imm, 21);
      snprintf(out, outsz, "jal    %s, 0x%llx", rv_regs[rd],
               (unsigned long long)(addr + simm));
      return;
    }
    case 0x67: {
      int32_t imm = rv_sext(inst >> 20, 12);
      snprintf(out, outsz, "jalr   %s, %d(%s)", rv_regs[rd], imm, rv_regs[rs1]);
      return;
    }
    case 0x63: {
      uint32_t imm =
        ((inst >> 7) & 0x1e) |
        ((inst >> 20) & 0x7e0) |
        ((inst << 4) & 0x800) |
        ((inst & 0x80000000u) ? 0xfffff000u : 0);
      int32_t simm = rv_sext(imm, 13);
      const char* name = "branch";
      if (funct3 == 0x0) name = "beq";
      else if (funct3 == 0x1) name = "bne";
      else if (funct3 == 0x4) name = "blt";
      else if (funct3 == 0x5) name = "bge";
      else if (funct3 == 0x6) name = "bltu";
      else if (funct3 == 0x7) name = "bgeu";
      snprintf(out, outsz, "%-5s %s, %s, 0x%llx", name, rv_regs[rs1], rv_regs[rs2],
               (unsigned long long)(addr + simm));
      return;
    }
    case 0x03: {
      int32_t imm = rv_sext(inst >> 20, 12);
      const char* name = "ld";
      if (funct3 == 0x0) name = "lb";
      else if (funct3 == 0x1) name = "lh";
      else if (funct3 == 0x2) name = "lw";
      else if (funct3 == 0x3) name = "ld";
      else if (funct3 == 0x4) name = "lbu";
      else if (funct3 == 0x5) name = "lhu";
      else if (funct3 == 0x6) name = "lwu";
      snprintf(out, outsz, "%-5s %s, %d(%s)", name, rv_regs[rd], imm, rv_regs[rs1]);
      return;
    }
    case 0x23: {
      uint32_t imm = (rv_bits(inst, 31, 25) << 5) | rv_bits(inst, 11, 7);
      int32_t simm = rv_sext(imm, 12);
      const char* name = "sd";
      if (funct3 == 0x0) name = "sb";
      else if (funct3 == 0x1) name = "sh";
      else if (funct3 == 0x2) name = "sw";
      else if (funct3 == 0x3) name = "sd";
      snprintf(out, outsz, "%-5s %s, %d(%s)", name, rv_regs[rs2], simm, rv_regs[rs1]);
      return;
    }
    case 0x73:
      if (inst == 0x00000073)
        snprintf(out, outsz, "ecall");
      else
        snprintf(out, outsz, "system");
      return;
    default:
      snprintf(out, outsz, "0x%08x", inst);
      return;
  }
}

typedef struct {
  const char* name;
  uint64_t addr;
  uint64_t size;
} FuncEntry;

static void sort_function_entries(FuncEntry* funcs, uint64_t count) {
  for (uint64_t i = 0; i < count; i++) {
    for (uint64_t j = i + 1; j < count; j++) {
      if (funcs[j].addr < funcs[i].addr) {
        FuncEntry tmp = funcs[i];
        funcs[i] = funcs[j];
        funcs[j] = tmp;
      }
    }
  }
}

static void print_disassembly(const unsigned char* buf,
                              const Elf64_Ehdr* eh,
                              const char* shstr, uint64_t shstrsz) {
  const Elf64_Shdr* text = find_section_by_name(buf, eh, shstr, shstrsz, ".text");
  if (!text || text->sh_size == 0) {
    printf("Disassembly: .text not present\n");
    return;
  }

  const Elf64_Sym* syms = 0;
  uint64_t sym_count = 0;
  const char* strtab = 0;
  if (!load_symtab(buf, eh, &syms, &sym_count, &strtab)) {
    printf("Disassembly: symbol table not found\n");
    return;
  }

  const Elf64_Shdr* sh_base = (const Elf64_Shdr*)(buf + eh->e_shoff);
  int text_index = -1;
  for (uint16_t i = 0; i < eh->e_shnum; i++) {
    if (&sh_base[i] == text) { text_index = (int)i; break; }
  }
  if (text_index < 0) {
    printf("Disassembly: .text index not found\n");
    return;
  }

  uint64_t func_count = 0;
  for (uint64_t i = 0; i < sym_count; i++) {
    const Elf64_Sym* sym = &syms[i];
    uint8_t type = ELF64_ST_TYPE(sym->st_info);
    if (!(type == STT_FUNC || type == STT_NOTYPE))
      continue;
    uint64_t addr = sym->st_value;
    if (addr < text->sh_addr || addr >= text->sh_addr + text->sh_size) continue;
    func_count++;
  }

  if (!func_count) {
    printf("Disassembly: no function symbols in .text\n");
    return;
  }

  FuncEntry* funcs = (FuncEntry*)malloc(func_count * sizeof(FuncEntry));
  if (!funcs) {
    printf("Disassembly: malloc failed\n");
    return;
  }

  uint64_t fi = 0;
  for (uint64_t i = 0; i < sym_count && fi < func_count; i++) {
    const Elf64_Sym* sym = &syms[i];
    uint8_t type = ELF64_ST_TYPE(sym->st_info);
    if (!(type == STT_FUNC || type == STT_NOTYPE))
      continue;
    uint64_t addr = sym->st_value;
    if (addr < text->sh_addr || addr >= text->sh_addr + text->sh_size) continue;
    funcs[fi].addr = addr;
    funcs[fi].size = sym->st_size;
    if (strtab) {
      funcs[fi].name = strtab + sym->st_name;
      if (!funcs[fi].name || funcs[fi].name[0] == '\0') funcs[fi].name = "(anonymous)";
    } else {
      funcs[fi].name = "(no-strtab)";
    }
    fi++;
  }
  func_count = fi;
  if (!func_count) {
    free(funcs);
    printf("Disassembly: no function entries collected\n");
    return;
  }

  sort_function_entries(funcs, func_count);

  const unsigned char* base = buf + text->sh_offset;
  uint64_t text_addr = text->sh_addr;
  uint64_t text_end = text_addr + text->sh_size;

  printf("Disassembly of section .text (by function):\n");
  int first = 1;
  for (uint64_t idx = 0; idx < func_count; idx++) {
    const FuncEntry* f = &funcs[idx];
    if (f->addr < text_addr || f->addr >= text_end) continue;
    uint64_t start_off = f->addr - text_addr;
    uint64_t end_addr = f->size ? (f->addr + f->size)
                                : (idx + 1 < func_count ? funcs[idx + 1].addr : text_end);
    if (end_addr > text_end) end_addr = text_end;
    if (end_addr <= f->addr) end_addr = f->addr;
    if (!first) printf("\n");
    first = 0;
    printf("%s:\n", f->name ? f->name : "(noname)");

    if (start_off % 4 != 0) {
      printf("  (start offset not 4-byte aligned)\n");
      continue;
    }

    uint64_t end_off = end_addr - text_addr;
    uint64_t end_off_aligned = end_off & ~0x3ull;
    if (end_off_aligned <= start_off) end_off_aligned = start_off;
    if (end_off_aligned > text->sh_size) end_off_aligned = text->sh_size;

    if (start_off >= text->sh_size || start_off >= end_off_aligned) {
      printf("  (no instructions)\n");
      continue;
    }

    for (uint64_t off = start_off; off < end_off_aligned; off += 4) {
      if (off + 3 >= text->sh_size) break;
      uint32_t inst = base[off] |
                      (base[off+1] << 8) |
                      (base[off+2] << 16) |
                      (base[off+3] << 24);
      uint64_t addr = text_addr + off;
      char decoded[80];
      rv_decode(inst, addr, decoded, sizeof(decoded));
      printf("  0x%08llx: %08x  %s\n",
             (unsigned long long)addr,
             inst,
             decoded);
    }
  }

  free(funcs);
}


static void print_got_entries(const unsigned char* buf,
                              const Elf64_Ehdr* eh,
                              const char* shstr, uint64_t shstrsz) {
  const Elf64_Shdr* got = find_section_by_name(buf, eh, shstr, shstrsz, ".got");
  if (!got || got->sh_size == 0) {
    printf(".got: (not present or empty)\n");
    return;
  }

  if (got->sh_size % sizeof(uint64_t) != 0) {
    printf(".got: unexpected size (%llu bytes)\n",
           (unsigned long long)got->sh_size);
    return;
  }

  uint64_t count = got->sh_size / sizeof(uint64_t);
  const uint64_t* entries = (const uint64_t*)(buf + got->sh_offset);

  printf(".got entries (count=%llu, section_addr=0x%llx, section_off=0x%llx)\n",
         (unsigned long long)count,
         (unsigned long long)got->sh_addr,
         (unsigned long long)got->sh_offset);
  for (uint64_t i = 0; i < count; i++) {
    uint64_t slot_addr = got->sh_addr + i * sizeof(uint64_t);
    uint64_t slot_off  = got->sh_offset + i * sizeof(uint64_t);
    printf("  [%3llu] addr=0x%016llx (off=0x%llx) value=0x%016llx\n",
           (unsigned long long)i,
           (unsigned long long)slot_addr,
           (unsigned long long)slot_off,
           (unsigned long long)entries[i]);
  }
}

// -------- main --------
static void usage(void) {
  printf("usage: objdump_min [-h] [-p] [-t] [-G] [-d] [-x] [-s <name>] <elf>\n");
  printf("  -h : headers only (ELF/PHDR/SHDR)\n");
  printf("  -p : print program headers\n");
  printf("  -t : print symbols (.symtab)\n");
  printf("  -G : print GOT (.got) entries\n");
  printf("  -x : hexdump all PROGBITS sections\n");
  printf("  -s <name> : hexdump specific section (e.g., .text)\n");
  printf("  (default) headers + dump .text and .data if present\n");
}

// Read the whole file but issue reads in small chunks to avoid the kernel's
// 4KB read limit (Sys_read panics if a single request exceeds 4096 bytes).
static int read_streaming(int fd, unsigned char* buf, unsigned long sz) {
  const unsigned long CHUNK = 1024;
  unsigned long off = 0;
  while (off < sz) {
    unsigned long want = sz - off;
    if (want > CHUNK) want = CHUNK;
    int n = read(fd, buf + off, (int)want);
    if (n <= 0) return -1;
    off += (unsigned long)n;
  }
  return 0;
}

int main(int argc, char** argv) {
  int opt_headers_only = 0;
  int opt_print_ph = 0;
  int opt_print_syms = 0;
  int opt_print_got = 0;
  int opt_disassemble = 0;
  int opt_dump_all_progbits = 0;
  const char* dump_one = 0;

  int iarg = 1;
  while (iarg < argc && argv[iarg][0]=='-') {
    const char* a = argv[iarg];
    if (a[1]=='h' && a[2]==0) { opt_headers_only=1; iarg++; }
    else if (a[1]=='p' && a[2]==0) { opt_print_ph=1; iarg++; }
    else if (a[1]=='t' && a[2]==0) { opt_print_syms=1; iarg++; }
    else if (a[1]=='G' && a[2]==0) { opt_print_got=1; iarg++; }
    else if (a[1]=='d' && a[2]==0) { opt_disassemble=1; iarg++; }
    else if (a[1]=='x' && a[2]==0) { opt_dump_all_progbits=1; iarg++; }
    else if (a[1]=='s' && a[2]==0) {
      if (iarg+1 >= argc) { usage(); return 1; }
      dump_one = argv[iarg+1]; iarg += 2;
    } else { usage(); return 1; }
  }
  if (iarg >= argc) { usage(); return 1; }
  const char* path = argv[iarg];

  struct stat st;
  if (stat(path, &st) < 0) { printf("stat failed: %s\n", path); return 1; }
  if (st.size < (int)sizeof(Elf64_Ehdr)) { printf("too small\n"); return 1; }

  int fd = open(path, O_RDONLY, 0);
  if (fd < 0) { printf("open failed: %s\n", path); return 1; }

  unsigned long sz = (unsigned long)st.size;
  unsigned char* buf = (unsigned char*)malloc(sz);
  if (!buf) { printf("malloc failed\n"); close(fd); return 1; }

  if (read_streaming(fd, buf, sz) < 0) {
    printf("short read\n");
    free(buf);
    close(fd);
    return 1;
  }
  close(fd);

  const Elf64_Ehdr* eh = (const Elf64_Ehdr*)buf;
  if (!check_magic(eh)) { printf("Not ELF (bad magic)\n"); free(buf); return 1; }
  if (eh->e_ident[EI_CLASS] != ELFCLASS64 || eh->e_ident[EI_DATA] != ELFDATA2LSB) {
    printf("Unsupported ELF (need 64-bit LE)\n"); free(buf); return 1;
  }

  // headers
  print_ehdr(eh);
  if (opt_print_ph || opt_headers_only) print_phdrs(buf, eh);

  const char* shstr=0; uint64_t shstrsz=0;
  print_shdrs(buf, eh, &shstr, &shstrsz);

  if (opt_headers_only) { free(buf); return 0; }

  if (opt_print_syms) print_symbols(buf, eh, shstr, shstrsz);
  if (opt_print_got) print_got_entries(buf, eh, shstr, shstrsz);
  if (opt_disassemble) print_disassembly(buf, eh, shstr, shstrsz);

  const Elf64_Shdr* sh_base = (const Elf64_Shdr*)(buf + eh->e_shoff);

  if (dump_one) {
    const Elf64_Shdr* sec = find_section_by_name(buf, eh, shstr, shstrsz, dump_one);
    if (!sec) { printf("section not found: %s\n", dump_one); free(buf); return 1; }
    if (sec->sh_type == SHT_NOBITS) {
      printf("Hex dump of %s: (NOBITS, no file data)\n", dump_one);
    } else {
      printf("\nHex dump of section %s:\n", dump_one);
      hexdump(buf + sec->sh_offset, sec->sh_offset, sec->sh_addr, sec->sh_size);
    }
    free(buf); return 0;
  }

  if (opt_dump_all_progbits) {
    for (uint16_t i=0;i<eh->e_shnum;i++) {
      if (sh_base[i].sh_type == SHT_PROGBITS && sh_base[i].sh_size > 0) {
        const char* nm = secname(shstr, sh_base[i].sh_name, shstrsz);
        printf("\nHex dump of section %s:\n", nm);
        hexdump(buf + sh_base[i].sh_offset, sh_base[i].sh_offset, sh_base[i].sh_addr, sh_base[i].sh_size);
      }
    }
    free(buf); return 0;
  }

  // Default: try dumping .text and .data
  const char* defsecs[] = { ".text", ".data" };
  for (int k=0;k<2;k++) {
    const Elf64_Shdr* sec = find_section_by_name(buf, eh, shstr, shstrsz, defsecs[k]);
    if (sec && sec->sh_type != SHT_NOBITS && sec->sh_size > 0) {
      printf("\nHex dump of section %s:\n", defsecs[k]);
      hexdump(buf + sec->sh_offset, sec->sh_offset, sec->sh_addr, sec->sh_size);
    }
  }

  free(buf);
  return 0;
}
