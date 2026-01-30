#include <neo-c.h>
#include <neo-c-pthread.h>
#include <unistd.h>

int main(int argc, char** argv)
{

    var thread = come { puts(s"1"); sleep(1); puts(s"2"); puts(s"3"); }
    
//    var thread2 = come { puts(s"a"); puts(s"b"); puts(s"c"); }
        
    come_join(thread);
            
//    come_join(thread2);
                
    return 0;
}
