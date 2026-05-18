#include <neo-c.h>

int main(int argc, char** argv)
{
    xfopen("xxx", mode:"w")!.fprintf("LLL\n")!.fclose();

    return 0;
}

