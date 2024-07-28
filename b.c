
static short short* yyss;

int main(int argc, char** argv)
{
    int kind[128];
    int t = 2;
    int TYPEDEF = 123;
    struct { int sclass }* tsym;
    int sign = 1;
    int size = 1;
    int type = 1;
    int ID = 1;
    
   if ((kind[t] == 1 || t == ID && tsym && tsym->sclass == TYPEDEF) && type == 0
   && sign == 0 && size == 0) {
   }
    
    return 0;
}
