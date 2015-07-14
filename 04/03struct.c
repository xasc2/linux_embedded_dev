#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct foo {
	int a;
	char *p;
};

//结构体和共用体(联合体union)运算符:
//1  .运算符 点运算符,之前的变量必须结构体类型
//2  ->,之前的变量必须是结构体指针变量


struct foo1 {
	char *p;
};

struct foo2 {
	char p[8];
};

int main(void)
{	/*
	struct foo s1 = {10, "hello"};
	struct foo s2 = {.p = "hello", .a = 99};
	struct foo s3 = {p:"hello", a:12}; //

	
	printf("%d\n", (&s1)->a);
	printf("%d\n", s2.a);
	printf("%d\n", s3.a);
	
	struct foo *pf;
	pf = &s1;
	printf("%d, %s\n", (*pf).a, pf->p);
	*/

	struct foo1 f1 = {"hello"};
	struct foo2 f2 = {.p = "hello"};
	
	f1.p = "world"; //err    //ture
	printf("f1.p = %s\n", f1.p);
		
	//void *
//	f1.p = (char *)malloc(sizeof("linux"));
	f1.p = (char *)calloc(10, 1);
	//把申请的空间,清0
//	strcpy(f1.p, "linux");//修改rodata
//	printf("f1.p = %s\n", f1.p);
//	a = b;
	memcpy(f1.p, "linux", sizeof("linux"));
	
	printf("f1.p = %s\n", f1.p);

	
	return 0;
}
