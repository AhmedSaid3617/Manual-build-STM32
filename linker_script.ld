MEMORY
{
    flash(RX) : o = 0x08000000, l = 128K
    sram(RWX) : o = 0x20000000, l = 20K
}

SECTIONS
{
    .text : {
        *(.vectors*)
        *(.text*)
    } > flash

    .bss : {
        *(.bss*)
    } > sram
}