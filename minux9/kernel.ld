STACK_PAGES = 64;
STACK_MAX = 4096 * STACK_PAGES;

OUTPUT_ARCH( "riscv" )

PHDRS {
   text PT_LOAD FLAGS (r_x);
   data PT_LOAD FLAGS (rw_);
}

ENTRY(entry)
SECTIONS
{
  
  . = 0x80000000;
  .text : { *(.text*) } :text
  . = ALIGN(4096); /* Add this line */
  .rodata : { *(.rodata*) } :text
  .data : { *(.data .data.*); } :data
  . = ALIGN(16);
  .sdata : { *(.sdata*) } :data
  . = ALIGN(4096);
  
  PROVIDE(_bss_start = .);
  .bss : { *(.bss) *(.bss.*) *(.sbss) *(.sbss.*) } :data
  PROVIDE(_bss_end = .);
  
  /* STACK_BOTTOM */
  PROVIDE(_code_end = .);
  . += STACK_MAX;
  PROVIDE(stack_top = .);
  /* STACK_TOP */
  
  . = ALIGN(4096);
  TRAPFRAME = .;
  . = . + 4096;
  . = ALIGN(4096);
  
  TRAPFRAME2 = .;
  . = . + 4096;
  . = ALIGN(4096);
  
  PROVIDE(TRAMPOLINE = .);
  .trampoline : { *(.trampoline) }
  . = . + 4096;
  . = ALIGN(4096);
  
  PROVIDE(COMMON = .);
  .common : { *(.common) }
  . = . + STACK_MAX + 4096;
  . = ALIGN(4096);
  
  PROVIDE(_end = .); /* heap */
/*  . = . + 4096 * STACK_PAGES * 16; */
  . = 0x90000000;
  . = ALIGN(4096);
  PROVIDE(heap_limit = .);
  
  PROVIDE(_end3 = .); /* kalloc */
  . = 0xA0000000;
  PROVIDE(PHYSTOP = .);
  
  .debug_info        0 : { *(.debug_info) } 
  .debug_abbrev      0 : { *(.debug_abbrev) }
  .debug_line        0 : { *(.debug_line) }
  .debug_str         0 : { *(.debug_str) }
  .debug_line_str    0 : { *(.debug_line_str) }
}
