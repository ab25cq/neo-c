#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

static bool g_ok = true;

#define REQUIRE(expr) do { \
    if (!(expr)) { \
        fprintf(stderr, "FAIL: %s at %s:%d\n", #expr, __FILE__, __LINE__); \
        g_ok = false; \
    } \
} while (0)

struct Pair {
    const char* key;
    int value;
};

static int cmp_pair_key(const void* a, const void* b)
{
    const struct Pair* pa = (const struct Pair*)a;
    const struct Pair* pb = (const struct Pair*)b;
    return strcmp(pa->key, pb->key);
}

static int cmp_key_to_pair(const void* a, const void* b)
{
    const char* key = (const char*)a;
    const struct Pair* pb = (const struct Pair*)b;
    return strcmp(key, pb->key);
}

int main(void)
{
    struct Pair items[] = {
        { "orange", 3 },
        { "apple", 1 },
        { "banana", 2 },
        { "grape", 4 },
    };
    int n = (int)(sizeof(items) / sizeof(items[0]));

    qsort(items, n, sizeof(items[0]), cmp_pair_key);

    REQUIRE(strcmp(items[0].key, "apple") == 0);
    REQUIRE(strcmp(items[3].key, "orange") == 0);

    const char* target = "banana";
    struct Pair* found = (struct Pair*)bsearch(target, items, n, sizeof(items[0]), cmp_key_to_pair);
    REQUIRE(found != NULL);
    if(found) {
        REQUIRE(found->value == 2);
    }

    const char* missing = "melon";
    struct Pair* not_found = (struct Pair*)bsearch(missing, items, n, sizeof(items[0]), cmp_key_to_pair);
    REQUIRE(not_found == NULL);

    puts(g_ok ? "OK" : "NG");
    return g_ok ? 0 : 1;
}
