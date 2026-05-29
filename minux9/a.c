void exit(int status);
/*
#define write(fd, buf, len) ({ asm ("li a7, 64\nmv a0, %0\nmv a1, %1\nmv a2, %2\necall\n", fd, buf, len); len; })

void exit(long status) {
    asm ("li a7, 70\nmv a0, %0\necall\n", status);
}

void putchar(char c)
{
    write(1, &c, 1);
}

void puts(const char *s) {
    while (*s) {
        putchar(*s++);
    }
}
*/

int main(int argc, char** argv) {
/*
    int a = 9;
    char buf[3];
    buf[0] = a + '0';
    buf[1] = '\r';
    buf[2] = '\n';
    
    write(1, buf, 3);
    write(1, "HELLO WORLD\r\n", 13);
    asm ("li a7, 64\nmv a0, %0\nmv a1, %1\nmv a2, %2\necall\n"
         
         , 1, "HELLO WORLD\r\n", 13);
*/
    exit(8);
}

