/*
可变参数函数,无规则参数函数,变长参数函数:参数个数不确定的函数

C语言通过下面这个三个宏来实现
va_list
va_start   va_arg  va_end

void va_start(va_list ap, last);
type va_arg(va_list ap, type);
获取可变参数数据,type只能是int ,char *, double
void va_end(va_list ap);

调用可变参数函数时候参数个数就已经确定下来,然后通过指针去找到这些参数.

1.首先在函数定义一个va_list类型的变量ap,该变量是指向参数的指针.
2.然后用va_start宏初始化变量ap,这个宏第二个参数(last)是第一个可变参数的前一个参数,也就是最后一个固定参数
3.然后用va_arg返回可变的参数,并且赋值自定义的变量,va_arg第二个参数是返回的参数的类型
4.用完之后,用va_end清理


va_arg()
*/

//int  printf(const char *format, ...);
#include <stdarg.h>
#include <stdio.h>


int sum(int n, int m,...)
{
	int sum = 0;
	va_list ap; 
	va_start(ap, m);
	
	int tmp;
	while((tmp = va_arg(ap, int))!= 0) {
		printf("tmp = %d\n", tmp);
		sum += tmp;
	}
	va_end(ap);
	
	return sum;
}

//可变参数函数至少要有一个固定参数.
//可变参数在调用va_arg宏时候,是通过ap变量跳过最后一个固定参数占用的字节数,获取下一个可变参数.
//如果想去跳过某个可变参数去访问后面的参数,是不可能的.但遍历到某个参数的时候,不再访问后面的参数,这个操作允许.最后要调用va_end清理.
//
void get_arg(int m, ...)
{
	va_list ap;
	va_start(ap, m);
	printf("%s\n", va_arg(ap, char *));
	printf("%d\n", va_arg(ap, int));
	printf("%f\n", (float)va_arg(ap, double));
	printf("%c\n", (char)va_arg(ap, int));
	va_end(ap);
	
	va_start(ap, m);
	printf("%s\n", va_arg(ap, char *));
	va_end(ap);
}




int main(void)
{ //字符串,整型,浮点型,字符型
	get_arg(10, "candle", 123, 1.20, 'c');
//	printf("可变参数的和 = %d\n", sum(10, 1, 2, 3, 4));
	return 0;
}

