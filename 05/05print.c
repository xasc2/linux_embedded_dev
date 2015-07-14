//条件打印宏
//用于调试阶段,用于帮助程序员调试代码,因为在程序调式期间,总不可避免有很多中间变量的打印,在调试之后,这些调试打印不应该继续存在.如果此时手工去除,不但耗时,而且容易遗漏和弄错.此时条件打印宏是一个非常合适的选择


// int printf(const char *format, ...);
//不定参数  无规则参数   可变参数

#include <stdio.h>

//#define DEBUG


#ifdef DEBUG
#define DBG_PRINT(fmt, args...) \
	printf(fmt, ##args)
//##在传入参数不足时候,它会删除之前的逗号 ,
#else
#define DBG_PRINT(fmt, args...) 
#endif

int main(void)
{
	int i=0, sum = 0;
	DBG_PRINT("start bug\n");	
	//printf("start bug\n");
	for(i=0;i<100;i++) {
		sum += i;
		DBG_PRINT("i = %d\n", i);
		DBG_PRINT("sum = %d\n", sum);
	}
	
	DBG_PRINT("end bug\n");
	
	printf("sum = %d\n", sum);
	return 0;
}

