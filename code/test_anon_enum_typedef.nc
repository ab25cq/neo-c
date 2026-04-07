typedef enum {
    A1 = 1,
} E1;

typedef enum {
    A2 = 2,
} E2;

typedef enum {
    A3 = 3,
} E3;

typedef enum {
    A4 = 4,
} E4;

static int sum_enums(E1 a, E2 b, E3 c, E4 d)
{
    return (int)a + (int)b + (int)c + (int)d;
}

int main(void)
{
    return sum_enums(A1, A2, A3, A4) == 10 ? 0 : 1;
}
