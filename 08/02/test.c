#include <stdio.h>

void test(void)
{
	printf("hello world %s:%s\n", __FILE__, __func__);
	return;
}
