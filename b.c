struct sData
{
    struct {
        int a;
        int b;
    };
    
    int c;
};


int main(int argc, char** argv)
{
    struct sData data;
    
    int x = data.a + data.b;

    return 0;
}
