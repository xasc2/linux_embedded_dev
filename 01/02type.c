//数据类型
//为什么要用到数据类型
//1.决定编译器为该变量分配多少空间
//2.决定可以对该变量一些操作

//1.基本类型

//2.构造类型
//3.指针类型
//4.通用类型(空类型)
#include <stdio.h>

int main(void)
{
//	sizeof是C语言当中的关键字,是一种运算符,不是函数,也是宏
//sizeof基本语法
//sizeof(常量/变量/数据类型)
//sizeof 变量/常量
//

//1.基本类型
//char int float double
//限定类型 short long unsigned signed

	char c;
	int  i;
	float f;
	double d;
	printf("sizeof c = %lu\n", sizeof(c));
	printf("sizeof c = %lu\n", sizeof(char));
	printf("sizeof c = %lu\n", sizeof c);
//	printf("sizeof c = %lu\n", sizeof char); //err 
	
	
	printf("sizeof c = %lu\n", sizeof(c));
	printf("sizeof i = %lu\n", sizeof(i));
	printf("sizeof f = %lu\n", sizeof(f));
	printf("sizeof d = %lu\n", sizeof(d));
	
//	short char sc;
	short int  si;
//	short float sf;
//	short double sd;	
//	printf("sizeof sc = %lu\n", sizeof(sc));
	printf("sizeof si = %lu\n", sizeof(si));
//	printf("sizeof sf = %lu\n", sizeof(sf));
//	printf("sizeof sd = %lu\n", sizeof(sd));


	//long char lc;
	long int  li;
	//long float lf;
	long double ld;	
	//printf("sizeof lc = %lu\n", sizeof(lc));
	printf("sizeof li = %lu\n", sizeof(li));
	//printf("sizeof lf = %lu\n", sizeof(lf));
	printf("sizeof ld = %lu\n", sizeof(ld));


	unsigned char unc;
	unsigned int  uni;
	//unsigned float unf;
	//unsigned double und;	
	printf("sizeof unc = %lu\n", sizeof(unc));
	printf("sizeof uni = %lu\n", sizeof(uni));
	//printf("sizeof lf = %lu\n", sizeof(lf));
	//printf("sizeof ld = %lu\n", sizeof(ld));
	
	
	unsigned uns;
	short s;
	long l;
	//unsigned float unf;
	//unsigned double und;	
	//printf("sizeof unc = %lu\n", sizeof(unc));
	printf("sizeof uns = %lu\n", sizeof(uns));
	printf("sizeof s = %lu\n", sizeof(s));
	printf("sizeof l = %lu\n", sizeof(l));

//	long long int lli;
//	printf("sizeof lli = %lu\n", sizeof(lli));
	
	//typedef unsigned long u32
//	size_t
	//32位系统 unsigned int ;
	//64位系统 unsigned long ;
//	ssize_t
	//32位系统 signed int;
	//64位系统 signed long

//2.构造类型
//数组 相同类型的数据
//	int a[3];
//结构体 不同类型的数据
	struct foo {
		int a;
		char *p;
	};
//共用体 union
//枚举型 enum

//指针类型:
	char *pc;
	printf("sizeof pc = %lu\n", sizeof(pc));
	
//通用类型:
	void v; //err 系统不知道为该变量分配多少空间
	
	

	return 0;
}

