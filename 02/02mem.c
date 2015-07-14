/*
运行的C程序在内存中的存储
1.代码区(text segment)存放CPU执行的及其指令.通常,代码区是共享的,只读.频繁被执行的程序,只需要在内存中有一份代码
2.数据区域/全局初始化数据区(data segment, initialized data segment)明确初始化的全局变量,静态变量(包括全局静态变量和局部静态变量)和常量数据
3.未初始化的数据区(BSS段),全局和静态未初始化的变量或者初始化为0
4.栈区(stack):由编译器自动分配释放,存放函数的参数值,局部变量等.
5.堆区(heap);用于动态内存分配.堆是在bss区和栈之间,一般由程序员分配和释放

*/

#include <stdio.h>
#include <stdlib.h>

int a1;  //.bss
int a2 = 0; //.bss
int a31;
int a32;
int a3 = 10; //data

static int sa1;   //bss
static int sa2 = 0; //bss
static int sa3  = 10; //data
int main(void)
{
	static int sb1;// bss
	static int sb2 = 0;//bss 
	static int sb3 = 10;//data
	int b1,b2 = 0, b3 = 10; //栈
	
	char *cp1 = "hello world";
	char *cp2 = "hello worl";
	
	char *cp3 = (char *)malloc(1);
	char *cp4 = (char *)malloc(1);
	printf("a1 = %p\n", &a1);
	printf("a2 = %p\n", &a2);
	printf("a3 = %p\n", &a3);
	printf("sa1 = %p\n", &sa1);
	printf("sa2 = %p\n", &sa2);
	printf("sa3 = %p\n", &sa3);
	printf("b1 = %p\n", &b1);
	printf("b2 = %p\n", &b2);
	printf("b3 = %p\n", &b3);
	printf("sb1 = %p\n", &sb1);
	printf("sb2 = %p\n", &sb2);
	printf("sb3 = %p\n", &sb3);
	printf("cp1 = %p\n", &cp1);
	printf("cp2 = %p\n", &cp2);
	printf("cp3 = %p\n", &cp3);
	printf("cp4 = %p\n", &cp4);
	return 0;
}

