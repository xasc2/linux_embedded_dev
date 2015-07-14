/*
位操作:按位进行操作
| & ~
<< >>  


^ 

*/
//写一个函数,交换两个数,不能有中间变量
//swap(int a, int b)
//{	
//	a , b//
//}

//如果*a + *b造成数字溢出,交换的结果就是错的
void swap1(int *a, int *b)
{
	*a = *a + *b;  //10 8 //18
	*b = *a - *b;  //18 - 8 = 10
	*a = *a - *b;  //18 - 10 = 8
	return;
}

void swap2(int *a, int *b)
{
	*a ^= *b;  //*a = *a ^ *b;
	*b ^= *a;  //*b = *a ^ *b;
	*a ^= *b;  //*a = *a ^ *b;
}

//写一个函数判断该数是否是2次幂
int is_2_mi(int n)
{
	if(n <= 0) return 0;
	return !(n&(n-1)); 
}

//写一个函数实现数据大小端互换 size_t
//0x12345678  0x78563412

n=( (n&0xff) << 24 | //0x78000000
	(n&0xff00) << 8 | //0x00560000
	(n&0xff0000) >> 8 | //0x00003400
	(n&0xff000000) >> 24 ); //0x00000012
 //0x78563412


#include <stdio.h>
int main(void)
{
	int a = 10;
	int b = 8;
	printf("ber  a = %d, b = %d\n", a, b);
	swap2(&a, &b);
	printf("after a = %d, b = %d\n", a, b);
	
	printf("64 = %d\n", is_2_mi(63));
	return 0;
}

