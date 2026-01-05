
typedef struct re_capture
{
  int start;
  int length;
} re_capture;

int a;
double b;

struct data
{
    int a;
    int v;
};

union data2
{
    double a;
    float b;
};

typedef int X;

enum daTA { kA, kB, kC };

struct {
    int a;
    int b;
    
    struct {
        double a;
        double b;
    } data;
} GUHO;

int main(int argc, char** argv)
{
    int a;
    int b = 1;
    char* p;
    const int max_captures = 128;
    int i = 0;
    re_capture captures[max_captures];
captures[i];
//    re_capture cp = captures[i];
    //int a = (cp.start, cp.start + cp.length);
    
    return 0;
}
