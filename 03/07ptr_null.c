//野指针与空指针
#include <stdio.h>

int main(void)
{
	int *p; //野指针:指针指向的内存空间不可知;
	int a = 10;
	p = &a; //直接引用
	*p = a; //间接引用
	
	//NULL 
	//#define NULL (void *)0  
	int *p2 = NULL; //空指针,NULL因系统而异,不同的系统实现的值可能是不同的.
//	p2 = &a;
//	*p2 = 100;
//	printf("p2= %d\n", *p2);
//空指针不能被间接访问的,一旦访问,就会造成段错误(segmention fault)
//段错误:访问无权访问的内存地址

	//通用类型的指针
	
	//void v; //err,void用在类型前,表示无类型或者通用类型,对于编译器来说,是无法确定为该变量开辟多少个字节.

	void *p3;
	p3 = &a;
//	*p3 = 100;
//	printf("1. *p3 = %d\n", *p3);
//非法使用*p3(void 类型);
	
	printf("*p3 = %d\n", *(int *)p3);
//void *类型的指针在间接访问之前都必须进行强制转换,否则就会出错.

	return 0;
}




