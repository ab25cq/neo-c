#define isdigit(a) (0 ? isdigit(a) : ((unsigned)(a)-'0') < 10)


int main(int argc, char** argv)
{
    if(isdigit('9')) {
        return 0;
    }
    
    return 1;
}
