typedef char assert_char_is_8_bit[sizeof(char) == 1 ? 1 : -1];
typedef char assert_generic_pointer_is_24_bit[sizeof(void*) == 3 ? 1 : -1];
typedef char assert_int_is_16_bit[sizeof(int) == 2 ? 1 : -1];
typedef char assert_long_is_32_bit[sizeof(long) == 4 ? 1 : -1];

extern void pic_uart_write(char c);

void putchar(char c)
{
    pic_uart_write(c);
}

int main()
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
