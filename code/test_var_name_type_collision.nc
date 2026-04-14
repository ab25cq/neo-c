#include <neo-c.h>

struct proc
{
    int zombie;
    int pgrp;
};

bool test_foreach(list<struct proc*>* xs, int pgrp)
{
    foreach(proc, xs) {
        if(proc != null && proc->zombie && proc->pgrp == pgrp) {
            return true;
        }
    }

    return false;
}

bool test_index(list<struct proc*>* xs, int pgrp)
{
    for(int i=0; i<xs.length(); i++) {
        struct proc* proc = xs[i];

        if(proc != null && proc->zombie && proc->pgrp == pgrp) {
            return true;
        }
    }

    return false;
}

int main()
{
    list<struct proc*>*% xs = new list<struct proc*>();

    return test_foreach(xs, 1) || test_index(xs, 1);
}
