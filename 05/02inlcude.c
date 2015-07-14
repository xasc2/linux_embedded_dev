/*
预处理:在C中,凡是#开头的行,就是预处理指令,所谓预处理指令,就是在预处理阶段就完成的.
#include
#define
#if 

预处理指令包括 三种
1.头文件
#include <stdio.h>  //从系统中库中查找
#include "hello.h"  //"" 

2.宏
宏(宏定义):就是一种替换机制
格式:
	1)不带参数的宏
	#define 标示符(宏名)  替换序列(宏体)
	#undef 标示符  取消宏定义
	使用无参数的宏的好处:
	1.使得代码容易维护
	2.增强代码的可读性
	
	2)带参数的宏
	#define 标示符(参数1, 参数2, ....) 替换序列
	优点:
	1.降低程序的运行开销.(函数出栈入栈的开销)
	2.比较通用(因为参数是无类型的)
	缺点:
	1.宏参数可能在宏替换的时候,执行了很多次
	2.代码的长度变长了
	3.在程序运行期间,无法对宏进行调试.(因为在预处理阶段之后,宏的各种定义已经被删除了),所以调试很麻烦,一般用gcc -E

3.条件编译
#if 0/1
#endif 

#ifdef 标示符1  <====>#if defined 标示符1
#elif  标示符2
#else
#endif

#ifndef 标示符    #if ! defineed
#elif
#else
#endif
*/

#include <stdio.h>
//写一个宏,表示一年有多少秒 忽略闰年
//#define SENCOND_PER_YEAR (365*24*60*60)
//宏体后面加 ; 本身是没有语法错误,但是大部分时候在替换会出现错误
#define CNT 5
#define M 28

//定义一个宏,返回两个数中较大的值
#define MAX(a, b)    \
((a) > (b) ? (a) : (b))
//\被称为续行符,将该行的内容延续到下一行,\后面不跟除了回车外的其他字符
//#define MAX(a, b)  (a > b ? a : b)

//GNU C语法允许带参数的宏,但是使用会有副作用
#define MAX_G(a, b) \
	({int m=a, n=b;  m>n? m : n;})

int max(int a, int b)
{
	return a > b ? a : b;
}

//do {} while(0)

int main(void)
{
	int a ;
	
//#define M 28	
//linux下 允许重复定义一个宏,后面的会把前面的给覆盖掉,会出现一个警告,虽然不会报错,但这样写本身就是有问题的
//带参数的宏在展开时候,主要参数被多次展开
	int i=0;
	printf("MAX = %d\n", MAX(i++, i++)); //1 3
	printf("MAX i = %d\n", i); //3
	i=0;
	printf("MAX_G = %d\n", MAX_G(i++, i++));//2
	printf("MAX_G i = %d\n", i); //2
	i=0;
	printf("max = %d\n", max(i++, i++)); //1
	printf("max i = %d\n", i); //2
//带参数的宏,它的参数是无类型的	
	printf("max = %d\n", MAX(3, 4));
	printf("max = %f\n", MAX(3.8, 1.2));
	printf("max = %s\n", MAX("aac", "gac"));
//strcmp 

	//##  #

	//## 表示将多个宏参数拼接在一起,只能用在宏的替换序列中

#define CONNECT(a, b)   a##b
	printf("CONNECT = %d\n", CONNECT(20, 12));
	
	//# 字符串化,用于将宏参数字符串化
#define STR(s)  #s
	printf("str = %d\n", STR(678));
	

	return 0;
}

