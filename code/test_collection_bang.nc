#include <neo-c.h>

int main(int argc, char** argv)
{
    var li = [1,2,3];
    var vec = [10,20].to_vector();
    var ma = [1:100];

    if(argc > 1 && argv[1] === "panic") {
        int n = li[4]!;
        return n == 0 ? 1 : 0;
    }

    xassert("list bang unwrap", li[1]! == 2);
    xassert("vector bang unwrap", vec[1]! == 20);
    xassert("map bang unwrap", ma[1]! == 100);
    xassert("normal list fallback unchanged", li[4] == 0);

    return 0;
}
