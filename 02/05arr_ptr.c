//数组指针:
//
#include <stdio.h>

int main(void)
{
//C语言规定:对数组名取地址,就表示整个数组的首地址
	char (*ps)[6]; //数组指针:指向数组的指针
	char s[] = "healo";
	ps = &s;
//	*ps = s;

	//	ps = s;
	

	printf("%c\n", *(*ps + 1));
	printf("%c\n", *(*(ps + 1)- 5));
	
	printf("%c\n", *(*ps + 3));
	printf("%c\n", *(*(ps + 1) - 3));
//	ps = s;
	return 0;
}
