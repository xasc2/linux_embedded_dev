/*
内联函数(inline):
不会像普通函数在调用时候需要开辟一个新的栈的空间,在函数调用结束时候销毁栈空间.而是将该函数内的代码直接拷贝到函数调用出.

想成为真正的内联函数,必须具备以下条件:
1.函数代码行不多,通常不应该超过10行
2.函数内不应该存在循环,switch...case,函数的调用(包裹递归)
3.要有static 修饰,并且编译的时候进行优化选项
-O1 一级优化
-O2
-O3

函数的入栈和出栈操作都是一定开销,如果想节约这部分的开销,可以考虑使用inline函数

函数在调用时候,会压入栈的:函数调用语句的下一条语句的地址,函数调用的局部变量和参数.

函数结束时候,销毁栈,跳回来的地址.
*/


#include <stdio.h>
static inline void myprint(void)
{
	int i = 0;
	int sum = 0;
	for(i=0;i<100;i++) {
		sum += i;
	}
	printf("%s\n", __func__);
}

int main(void)
{
	myprint();

	return 0;
}
