#include <neo-c.h>

int main(int argc, char** argv)
{
    [s"Z", s"B", s"Y", s"G", s"O", s"AB"].sort().each {
        printf("%s\n", it);
    }
    
    return 0;
}
