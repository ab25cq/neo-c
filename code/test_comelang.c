#include <neo-c.h>

int main(int argc, char** argv)
{
    int a[5] = { 3, 2, 1, 2, 5 };
    
    var li = new list<int>.initialize_with_values(5, a);
    
    var li2 = li.sort_with_lambda(int lambda(int left, int right) {
        if(left == right) {
            return 0;
        }
        else if(left < right) {
            return -1;
        }
        else {
            return 1;
        }
    });
    
    var li3 = li.filter { it < 3 }.sort().map { it.to_string() + "0" }.join("+").split("\\\+");
    
    li3.to_string().puts();
    
    "A,B,C".split(",").join("\n").puts();
    
    "A,B,C,D,E".split(",").add(s"F").join("+").to_string().puts();
    
    [1,2,3,4,5].add(6).add(3).add(2).add(10).add(9).sort().map { it.to_string() }.join("\n").to_string().puts();
    
    return 0;
}
