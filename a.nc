#include <neo-c.h>

#include <neo-c.h>


int main(int argc, char** argv)
{
    buffer*% buf = new buffer();
    
    buf.append_str("ABC");
    
    var p = buf.to_pointer();
    
    printf("%c\n", *p);
    
    p + 1;
    
    printf("%c\n", *p);
    
    p + 5;
    
    return 0;
}

