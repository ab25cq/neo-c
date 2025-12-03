struct sData
{
	int a;
	int b;
};

struct sData2
{
	int a[sizeof(struct sData)/sizeof(int)];
};

typedef unsigned long  int gregset_t[(sizeof(struct sData)/sizeof(unsigned long  int))];

int main(int argc, char** args)
{
	return 0;
}
