typedef char assert_char_is_8_bit[sizeof(char) == 1 ? 1 : -1];
typedef char assert_pointer_is_16_bit[sizeof(void*) == 2 ? 1 : -1];
typedef char assert_int_is_16_bit[sizeof(int) == 2 ? 1 : -1];
typedef char assert_long_is_32_bit[sizeof(long) == 4 ? 1 : -1];

void putchar(char c)
{
    volatile unsigned char* uart = (volatile unsigned char*)0xff00;
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
    putchar('Z');
    putchar('8');
    putchar('0');
    putchar('\n');
    return 0;
}
