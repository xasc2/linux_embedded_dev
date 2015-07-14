//值传递
//C中,所有的参数传递都是值的传递
//值传递:传递的是实际参数的值的拷贝
//所谓的地址传递,传递的依然是实际参数的地址值的拷贝,所以实质还是值传递

#include <stdio.h>

void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void swap1(int a, int b)
{
	int *tmp = &a;
	a = b;
	b = *tmp;
}

void swap2(int *a, int *b)
{
	int *tmp = a;
	*a = *b;
	*b = *tmp;
}

void swap3(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int a1 = 4, b1 = 9;
	printf("交换之前 a1=%d, b1=%d\n",a1, b1);
	
	swap3(&a1, &b1);
	printf("交换之后 a1=%d, b1=%d\n",a1, b1);
	return 0;
}


