#include <stdio.h>

int main(void)
{
// *     &
	/*
	char (*ps)[6];
	
	char s[] = "hello";
	
	ps = &s;
//	&s 表示整个数组的地址 
//	s  表示数组的首个元素的地址


	printf("ps, p[3] = %c\n", *(*ps + 3));
	printf("ps, p[3] = %c\n", *(*(ps+1) - 3));
	*/
	char s[3][7] = {"hello", "world", "kernel"};
	char (*ps)[3][7] ;

	ps = &s;
	
//	printf("ps, s[0] = %s\n", (*ps + 0));
	printf("ps, s[0] = %s\n", s[0]);
	
	printf("ps, s[1][2] = %c\n", *(*(s + 1) + 2) );
	
	char (*ps1)[7];
	
	ps1 = s + 2;
	
	return 0;
	
}
