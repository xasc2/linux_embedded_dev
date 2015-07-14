#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
//assert断言:
//作用:帮助程序员找bug,只应该用于程序调试阶段(debug阶段),一旦通过调试,就应该禁止所有的断言.如果将来程序需要扩充,那么可能需要继续开启这些断言
#define DEBUG

#ifdef DEBUG
#define EXP(exp) #exp
#define my_assert(exp) do{ \
	if((exp) == 0) { \
		printf("%s:%s:%d:%s:Assertion "EXP(exp)" failed\n", argv[0] + 2, __FILE__,__LINE__,__func__); \
		abort(); \
	} \
}while(0)
#else
#define my_assert(exp)
#endif

int main(int argc, char **argv)
{
	int *p = NULL;
	assert(p!=NULL);
//	my_assert(p!=NULL);
//assert宏的原理:
//assert(表达式)
//根据条件表达式的真假,来决定是否调用断言宏.如果表达式为假,那么首先向标准错误输出输出一串错误信息.(包括,文件名,函数,断言行号,条件表达式),然后调用abort函数终止程序继续执行.

/*

*/
	printf("hello world\n");
	return 0;
}
