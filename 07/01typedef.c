/*
typedef关键字,作用是为一种数据类型定义一个新的名字.
u32
typedef unsigned int u32;
u32 a;
s32
typedef int s32;
u16
s16
u8
typedef unsigned char u8;
s8

size_t  //系统的长度
//32  typedef unsigned int  //8
//64  typedef unsigned long  
ssize_t

typedef 一般有两个作用:一个给变量起一个容易记住而且意义明确的名字,另外一种是简化一些比较复杂类型的声明
*/

#include <stdio.h>
#include <stdlib.h>
#if 0
void (*signal(int signum, void (*handler)(int signum)))(int signum)

typedef void (*sig_handler)(int);
sig_handler signal(int signum, sig_handler)

int *(*func(int (*)[2], int (*(*handler)(int (*)(int, int),int (*)[2]))[2]))[2];

typedef int (*can_shu_1)[2];
typedef int (*can_shu_2_1)(int, int);
typedef can_shu_1 (*can_shu_2)(can_shu_2_1, can_shu_1);

can_shu_1 * func(can_shu_1, can_shu_2);
#endif

int sum(int a, int b)
{
	return a + b;
}

int main(void)
{
//	int (*p)(int , int);
//	p = sum;
	typedef int (*pt_func)(int, int);
	pt_func pt;
	pt = sum;
	printf("3 + 4 =%d\n", pt(3, 4));
	
	char s[5][7] = {"hello", "world", "linux", "unix", "ubuntu"};
	typedef char (*s_t)[5][7];
	s_t a;
//	a = s   
//	a = &s;
	
	struct foo {
		int a;
		char *p;
	};
	#define MY_STRUCT struct foo *	
	typedef struct foo * my_struct;  
	
	my_struct  my_foo;
	my_foo = (struct foo *)malloc(sizeof(struct foo));
	my_foo->a = 10;
	my_foo->p = "hello";
	
//typeof 获取变量的类型
//typeof(变量或者数据类型)
//不能加static const volatile extern

	static char c;
	
	typeof(c) cd;
	
	cd = 'a';
	printf("sizeof(cd) = %lu, cd = %c\n", sizeof(cd), cd);
	printf("cd = %p\n", &cd);
	printf("c = %p\n", &c);
	return 0;
}


