int main(int argc, char** argv)
{
    _Atomic(int*) __atomic_load_ptr;
    __typeof__ ((void)0, *__atomic_load_ptr) BBB;

    return 0;
}
