/*
结构体:数据类型不一定相同的元素的结合

字对齐:
为了提高存取效率,大部分编译器都会对内存进行对齐,对齐的规则跟系统和编译器有关

偏移量:指的是结构体变量中成员的地址和结构体变量的地址差
1.结构体变量中成员的偏移量必须是成员大小的整数倍(0被认为是任何数的整数被)
2.结构体大小必须是所有成员大小的整数倍 (最大成员整数倍)
3.嵌套的struct,展开后,被内嵌的结构体的第一个成员的偏移量是被内嵌的结构体中最大的成员的整数倍.
*/
#include <stdio.h>


//#pragma pack(1) 
struct foo1 {
	char a;
	char *p;
};
//人为改变字节对齐
struct foo {
	char a; //10  + 6
	struct foo1 f;
	int b;
}; 

struct foo foo1;
int main(void)
{
	//sizeof (变量/数据类型)
	printf("sizeof foo = %lu\n", sizeof(foo1));
	return 0;
}

