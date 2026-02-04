#line 1 "struct_attrs.nc"
struct __attribute__((packed)) SA {
    int x;
};

struct SB __attribute__((packed)) {
    int x;
};

struct SC {
    int x;
} __attribute__((packed));

struct SD __attribute__((packed)) {
    int x;
} __attribute__((aligned(8)));
