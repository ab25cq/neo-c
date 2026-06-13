ENTRY(firmware_entry)

MEMORY
{
    FLASH (rx)  : ORIGIN = 0xc000, LENGTH = 0x3ffe
    RAM   (rwx) : ORIGIN = 0x0200, LENGTH = 0x0200
}

SECTIONS
{
    .text :
    {
        *(.text*)
        *(.rodata*)
    } > FLASH

    .data :
    {
        *(.data*)
    } > RAM AT > FLASH

    .bss :
    {
        *(.bss*)
        *(COMMON)
    } > RAM
}
