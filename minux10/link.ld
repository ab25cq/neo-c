MEMORY
{
    FLASH (rx)  : ORIGIN = 0x10000000, LENGTH = 2048K
    SRAM  (rwx) : ORIGIN = 0x20000000, LENGTH = 264K
}

ENTRY(reset_handler)

SECTIONS
{
    .vectors ORIGIN(FLASH) :
    {
        LONG(ORIGIN(SRAM) + LENGTH(SRAM));
        LONG(reset_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
        LONG(default_handler + 1);
    } > FLASH

    .text :
    {
        *(.text*)
        *(.rodata*)
    } > FLASH

    .data :
    {
        *(.data*)
    } > SRAM AT > FLASH

    .bss :
    {
        __bss_start__ = .;
        *(.bss*)
        *(COMMON)
        __bss_end__ = .;
    } > SRAM
}
