#include <neo-c.h>

void putchar(char c)
{
    (void)c;
}

int main()
{
    var values = new vector<int>.initialize();
    for(int i = 0; i < 128; i++) {
        values.add(i);
    }
    if(values.length() != 128 || values.sum() != 8128) {
        return 1;
    }

    var queue = new list<int>.initialize();
    for(int i = 0; i < 12; i++) {
        queue.push_back(i * 2);
    }
    if(queue.length() != 12 || queue.item(10, -1) != 20) {
        return 2;
    }

    var lookup = new map<int, int>.initialize();
    for(int i = 0; i < 6; i++) {
        lookup.put(i, i + 100);
    }
    if(lookup.length() != 6 || lookup.at(5, -1) != 105) {
        return 3;
    }

    return 0;
}
