#include <stdio.h>
int d ;

 void test(void)
{

	static int a = 5;
	int b = 5;
	a++;
	b++;
	printf("a = %d, b = %d\n", a, b);	
//	printf("hello world\n");
}
