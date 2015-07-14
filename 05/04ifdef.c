//条件编译
//#include <stdio.h>

#define CNT 100
int main(void)
{
	#define PI 3.14
	
	#define R  0
	#define L  4
		
	//#if  标示符   判断标示符是否为真
	//#ifdef 标示符  通过是否对该标示符定义,跟其定义的值无关.
	//#ifndef 标示符 一般用在头文件,防止重复定义	
	#if 0
	int a; 这种写法一般用于做注释,
	#endif
	
	//标示符  字母 下划线 
	#ifdef  R
		printf("元的面积 = %f\n", PI*R*R);
	#elif L
		printf("正方形的面积 = %d \n", L*L);
	#else 
		printf("无法计算其面积\n");
	#endif
	
	return 0;
}
