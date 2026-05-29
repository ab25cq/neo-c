#ifndef _ELF_H
#define _ELF_H

#include <stdint.h>

// Identifier index values for e_ident
#ifndef EI_NIDENT
#define EI_NIDENT 16
#endif
#ifndef EI_CLASS
#define EI_CLASS 4
#endif
#ifndef EI_DATA
#define EI_DATA 5
#endif
#ifndef EI_VERSION
#define EI_VERSION 6
#endif
#ifndef EI_OSABI
#define EI_OSABI 7
#endif
#ifndef EI_ABIVERSION
#define EI_ABIVERSION 8
#endif

// ELF class
#ifndef ELFCLASS64
#define ELFCLASS64 2
#endif

// Data encoding
#ifndef ELFDATA2LSB
#define ELFDATA2LSB 1
#endif

// ELF version
#ifndef EV_CURRENT
#define EV_CURRENT 1
#endif

// Object file types
#ifndef ET_EXEC
#define ET_EXEC 2
#endif

// Program header types
#ifndef PT_LOAD
#define PT_LOAD 1
#endif

// Section indices
#define SHN_UNDEF   0
#ifndef SHN_LORESERVE
#define SHN_LORESERVE 0xFF00
#endif
#ifndef SHN_XINDEX
#define SHN_XINDEX 0xFFFF
#endif
#ifndef SHN_ABS
#define SHN_ABS 0xFFF1
#endif
#ifndef SHN_COMMON
#define SHN_COMMON 0xFFF2
#endif

// Section header flags
#ifndef SHF_WRITE
#define SHF_WRITE 0x1
#endif
#ifndef SHF_ALLOC
#define SHF_ALLOC 0x2
#endif
#ifndef SHF_EXECINSTR
#define SHF_EXECINSTR 0x4
#endif
#ifndef SHF_MERGE
#define SHF_MERGE 0x10
#endif
#ifndef SHF_STRINGS
#define SHF_STRINGS 0x20
#endif
#ifndef SHF_TLS
#define SHF_TLS 0x400
#endif
#ifndef SHF_GROUP
#define SHF_GROUP 0x200
#endif
#ifndef SHF_LINK_ORDER
#define SHF_LINK_ORDER 0x80
#endif

// Section header types
#ifndef SHT_GROUP
#define SHT_GROUP 17
#endif
#ifndef SHT_SYMTAB_SHNDX
#define SHT_SYMTAB_SHNDX 18
#endif

// Program header flags
#ifndef PF_X
#define PF_X 0x1
#endif
#ifndef PF_W
#define PF_W 0x2
#endif
#ifndef PF_R
#define PF_R 0x4
#endif

// Magic number for ELF header (little endian)
#ifndef ELF_MAGIC
#define ELF_MAGIC 0x464C457FU  // "\x7FELF"
#endif

// ELF header (64-bit)
struct elfhdr {
    uint32_t magic;      // Must be ELF_MAGIC
    uint8_t  elf[12];    // ELF identification info
    uint16_t type;       // Object file type
    uint16_t machine;    // Architecture
    uint32_t version;    // Object file version
    uint64_t entry;      // Entry point virtual address
    uint64_t phoff;      // Program header table file offset
    uint64_t shoff;      // Section header table file offset
    uint32_t flags;      // Processor-specific flags
    uint16_t ehsize;     // Size of ELF header
    uint16_t phentsize;  // Size of a program header table entry
    uint16_t phnum;      // Number of program header entries
    uint16_t shentsize;  // Size of a section header table entry
    uint16_t shnum;      // Number of section header entries
    uint16_t shstrndx;   // Index of the section-name string table
};

// Program header (64-bit)
struct proghdr {
    uint32_t type;       // Segment type
    uint32_t flags;      // Segment flags
    uint64_t off;        // Offset of the segment from the file start
    uint64_t vaddr;      // Segment virtual address
    uint64_t paddr;      // Segment physical address (usually ignored)
    uint64_t filesz;     // Segment size in the file image
    uint64_t memsz;      // Segment size in the memory image (covers BSS)
    uint64_t align;      // Segment alignment
};

// Values for the program header `type` field
#define ELF_PROG_LOAD    1 // Loadable segment

// Bitmask for the program header `flags` field
#define ELF_PROG_FLAG_EXEC  1 // Executable
#define ELF_PROG_FLAG_WRITE 2 // Writable
#define ELF_PROG_FLAG_READ  4 // Readable

// Section header (64-bit)
struct elfshdr {
    uint32_t name;       // Section name (index into string table)
    uint32_t type;       // Section type
    uint64_t flags;      // Section flags
    uint64_t addr;       // Memory address (if present)
    uint64_t offset;     // Offset from the start of the file
    uint64_t size;       // Section size
    uint32_t link;       // Link to another section
    uint32_t info;       // Additional information
    uint64_t addralign;  // Alignment
    uint64_t entsize;    // Size of table entries
};

// Values for the section header `type` field
#define SHT_NULL     0
#define SHT_PROGBITS 1
#define SHT_SYMTAB   2
#define SHT_STRTAB   3
#define SHT_RELA     4
#define SHT_HASH     5
#define SHT_DYNAMIC  6
#define SHT_NOTE     7
#define SHT_NOBITS   8 // Sections like .bss
#define SHT_REL      9
#define SHT_SHLIB    10
#define SHT_DYNSYM   11

// Symbol table entry (64-bit)
struct elfsym {
    uint32_t name;       // Symbol name (index into string table)
    uint8_t  info;       // Symbol type and binding attributes
    uint8_t  other;      // Reserved
    uint16_t shndx;      // Index of the related section
    uint64_t value;      // Symbol value (e.g., address)
    uint64_t size;       // Symbol size
};

typedef struct {
    uint32_t st_name;
    uint8_t  st_info;
    uint8_t  st_other;
    uint16_t st_shndx;
    uint64_t st_value;
    uint64_t st_size;
} Elf64_Sym;

#endif // _ELF_H
