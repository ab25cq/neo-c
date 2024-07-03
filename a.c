#include <neo-c.h>
#include <neo-c-str.h>
#include <locale.h>

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "");
    
    wchar_t a = L'\0';
    
    printf("%lc\n", a);
    
    return 0;
}
