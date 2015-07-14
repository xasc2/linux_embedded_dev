//指针
//本质:指针就是地址
#include <stdio.h>

int main(void)
{
	#if 0
	char *pc;//* 仅仅声明pc是一个指针变量;
	int **p1;
	char a;
	pc = &a;//*是间接寻址运算符,引用指针,取内容操作
//&取地址运算符;
	*pc = 10;

	printf("pc = %p, &a = %p\n", pc, &a);
	printf("a = %d\n", a);
	
	printf("pc = %d\n", *pc);
	printf("sizeof(pc) = %lu\n", sizeof(pc));
	#endif
//C语言规定,数组名为右值,表示数组元素的首地址,但是和sizeof放在一起的时候,表示的是整个数组
	char p1[] = "hello";
	
//	char *p2 = "hello";
	
	p1[2] = 'w';
//	p2[2] = '2';
	
	
	printf(" p1[1]= %c\n", *(p1 + 1));
//	printf("p2 = %s\n", p2);
	
	return 0;
}
