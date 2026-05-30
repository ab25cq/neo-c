char msg[] = "hello world\n";

int main()
{
    asm("li a0,1\n la a1,msg\n li a2,12\n li a7,64\n ecall");
    return 0;
}
