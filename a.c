#include <neo-c.h>

using neo-c;

struct sInfo
{
    char*% clang_option;
    char*% linker_option;
};


int main(int argc, char** argv)
{
    sInfo info;
    bool is_mac = true;
    if(is_mac) {
        info.clang_option = info.clang_option + s" -std=gnu17 ";
    }
    return 0;
}
