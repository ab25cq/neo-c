#include <neo-c.h>

#if true
int a;
#endif

int main(int argc, char** argv) 
{
    var a = if(0 == 1) { [s"1",s"2",s"3"] } else { [s"1",s"2",s"3"] };
    
    puts(a.to_string());
    
    (1, false);
    
    return 0;
}

