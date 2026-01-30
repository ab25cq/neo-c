#include <neo-c.h>
#include <neo-c-pthread.h>
#include <unistd.h>

int main(int argc, char** argv)
{

    var thread = come { puts("1"); sleep(1); puts("2"); puts("3"); }
    
    var thread2 = come { puts("a"); puts("b"); puts("c"); }
        
    come_join(thread);
            
    come_join(thread2);
                
    return 0;
}
