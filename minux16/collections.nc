#include <neo-c.h>

void putchar(char c)
{
    volatile unsigned char* uart = (volatile unsigned char*)0x00c6;
    *uart = (unsigned char)c;
}

static void puts_uart(const char* text)
{
    while(*text) {
        putchar(*text);
        text++;
    }
}

int firmware_entry()
{
    var values = new vector<int>.initialize();
    for(int i = 0; i < 128; i++) {
        values.add(i);
    }
    if(values.length() != 128 || values.sum() != 8128) {
        puts_uart("FAIL vector\n");
        return 1;
    }

    var queue = new list<int>.initialize();
    for(int i = 0; i < 12; i++) {
        queue.push_back(i * 2);
    }
    if(queue.length() != 12 || queue.item(10, -1) != 20) {
        puts_uart("FAIL list\n");
        return 2;
    }

    var lookup = new map<int, int>.initialize();
    for(int i = 0; i < 6; i++) {
        lookup.put(i, i + 100);
    }
    if(lookup.length() != 6 || lookup.at(5, -1) != 105) {
        puts_uart("FAIL map\n");
        return 3;
    }

    puts_uart("PASS AVR RAM8K\n");
    return 0;
}
