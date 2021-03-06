#include <stdio.h>

#define test(x) ((x) * (x))
#define ptest(x) printf(#x" is %d\n",x);

#define CN(x) num_ ## x
#define PCN(x) printf("x" #x " = %d\n", num_ ## x)

int main(void)
{
	int x = 3;

	ptest(test(x));
	ptest(10);

	int CN(1) = 10;	//int num_1 = 10
	int CN(2) = 20;	//int num_2 = 10

	PCN(1);	//printf("...", num_1)
	PCN(2);	//printf("...", num_2)
	return 0;
}
