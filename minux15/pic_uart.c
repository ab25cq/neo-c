volatile __at(0x19) unsigned char pic_txreg;

void pic_uart_write(char c)
{
    pic_txreg = (unsigned char)c;
}
