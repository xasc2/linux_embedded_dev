#include <stdio.h>

void test(void);
int main(void)
{
	int a = 10;
	printf("a = %d\n", a);
	test();
	return 0;
}


void test(void)
{
	printf("hello world\n");
}
