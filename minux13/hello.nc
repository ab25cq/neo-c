void putchar(char c)
{
    volatile unsigned char* uart = (volatile unsigned char*)0x0067;
    *uart = (unsigned char)c;
}

int firmware_entry()
{
    putchar('H');
    putchar('E');
    putchar('L');
    putchar('L');
    putchar('O');
    putchar(' ');
    putchar('M');
    putchar('S');
    putchar('P');
    putchar('4');
    putchar('3');
    putchar('0');
    putchar('\n');
    return 0;
}
