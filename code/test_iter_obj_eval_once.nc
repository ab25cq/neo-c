#include <neo-c.h>

int g_iter_obj_eval_count = 0;

list<int>* make_list()
{
    g_iter_obj_eval_count++;
    return [1,2,3,4];
}

int main(int argc, char** argv)
{
    var li = make_list().`iter().`take(2).`collect();

    xassert("iter object eval once", g_iter_obj_eval_count == 1);
    xassert("iter object result", li.length() == 2);

    return 0;
}
