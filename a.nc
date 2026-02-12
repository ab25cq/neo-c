#include <neo-c.h>

int gValue;

struct sData
{
    string? a;
};

string? fun2(string? xxx)
{
    var s = s"ABC";
    var data = new sData { a: xxx };
    
    return data.a;
}

int main(int argc, char** argv)
{
    string xxx = s"ABC";
    string? a = fun2(optional xxx);
    
    puts(a.unwrap());
    
//    puts(a.unwrap());
    
//come_print_ref_count(str);
    
//    printf("%c\n", *str);
    
    return 0;
}


