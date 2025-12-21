struct Flex {
    int len;
    struct {
        char data[];
    };
};


int main(int argc, char** argv)
{
    struct Flex flex;
    
    char* a = flex.data;
    return 0;
}
