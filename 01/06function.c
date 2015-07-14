#include <stdio.h>
/*
函数:自带声明和语句的程序块
函数的分类:
1.系统调用的库函数
2.用户自定义的函数
3.入口函数 maina

函数的类型:
1.函数的返回值类型
2.函数的参数的个数
3.函数的参数的类型


函数的声明
作用:向编译器提供函数调用的参考依据.
*/
//老式遗留下来的代码,它躲过编译器对函数的参数的检测.
int add(a, b)
int a;char b;
{
	return a + b;
}

//void test(void);//函数原型中参数明确void类型,表示不能传任何参数
void test();//参数不确定,传入的参数会压入栈中,但不做任何处理.

int main(int argc, char *argv[])
{
	test();
	printf("hello world\n add = %d\n", add(3, 4));
	return 0;
}

void test()
{
	printf("%s\n", __func__);
}
