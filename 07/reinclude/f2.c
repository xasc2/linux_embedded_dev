#include <stdio.h>

void f2(void)
{
	printf("start %s: %s\n", __FILE__, __func__);
	f3();
	printf("end %s: %s\n", __FILE__, __func__);
}
