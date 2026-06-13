void putchar(char c)
{
    volatile unsigned char* uart = (volatile unsigned char*)0x00c6;
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
    putchar('W');
    putchar('O');
    putchar('R');
    putchar('L');
    putchar('D');
    putchar('\n');
    return 0;
}
