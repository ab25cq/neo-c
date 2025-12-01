int main(int argc, char** argv)
{
    int (*pv)[3] = (int (*)[3])&vla; // VLA への配列ポインタキャスト
}
