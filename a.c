#include <neo-c.h>
#include <unistd.h>

int main(int argc, char** argv) {
    char buf[28];
    
    strncpy(buf, "ABC", 28);
    
    puts("""
    \{buf}
    """);
    
    return 0;
}
