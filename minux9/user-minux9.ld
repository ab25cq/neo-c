/* user.ld */
OUTPUT_ARCH( "riscv" )
ENTRY( _start ) /* crt0 sets up and jumps to main */

/* Define the start address of the user program */
BASE_ADDRESS = 0x1000;

SECTIONS
{
  . = BASE_ADDRESS;
  
  .text : {
    *(.text.init)
    *(.text .text.*)
  }

  .rodata : {
    *(.rodata .rodata.*)
  }

  .data : {
    . = ALIGN(8);
/*    __global_pointer$ = . + 0x800; */
    *(.sdata .sdata.*)
    *(.data .data.*)
  }

  .bss : {
    *(.sbss .sbss.*)
    *(.bss .bss.*)
  }
  
  _end = .;
}
