
struct Outer {
    int id;
    union {
        struct {
            short sx;
            short sy;
        };
        int combined;
    };
    struct {
        unsigned char r, g, b;
    } color;
};

#pragma pack(push, 1)
struct Packed {
    unsigned short a;
    unsigned char b;
    unsigned int c;
};
#pragma pack(pop)

int main(int argc, char** argv)
{
    struct Outer o = { .id = 5, .sx = 10, .sy = 20 };
    if(o.sx == 10 && o.sy == 20) {
        int a = 1;
    }
    o.color.r = 111;
    return 0;
}
