ENTRY(_start)
PHDRS
{
  text PT_LOAD FLAGS(5);
}
SECTIONS
{
  . = 0x400000 + SIZEOF_HEADERS;
  .text : { *(.text*) *(.rodata*) } :text
  /DISCARD/ : { *(.comment*) *(.note*) *(.eh_frame*) *(.llvm_addrsig*) }
}
