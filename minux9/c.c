

void fun() { 
    asm ("li a7, 64\nmv a0, %0\nmv a1, %1\nmv a2, %2\necall\n"
         
         , 1, "HELLO WORLD\r\n", 13);
}
