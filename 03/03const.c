#include <stdio.h>
//const 在C语言中,是read_only意思,从来没有常量的意思
//只读类型的变量在声明时候要对其进行初始化操作,否则没有机会进行初始化.
int c1;
int  c2 = 0;
int c3 = 10;
int main(void)
{
	int a = 10;
	int b = 10;
	int *p;
	p = &b;//会产生一个警告,p的类型是int *, &b类型是const int *
	*p = 100;//如果忽视这个编译的警告,可以通过指针P去修改p指向的变量的值,但是违背列加const初衷.
	
	printf("b = %d\n", b);

	int * const p1 = &a; //只读类型的指针
	//只读类型的指针:该指针只能只想在声明同时指向的变量,不能再修改改变位指向其他的变量
//	p1 = &b;
	*p1 = 100;
	printf("a = %d\n", a);
	

	const int *p2 = &a;
	p2 = &b;
//	*p2 = 15;//*p2的类型const int(只读的) 
	//*p2的类型const int,也就是说p2指向那个变量,就能再去通过p2指针去修改指向的变量
	

	int const *p3; //和const int表示的意义一样的
	
	p3 = &b;
//	*p3 = 120; 
	
	int const * const p4;//p4只读 *p4也是只读的


	const int ** const p5;
	int * const  * const p6;
	const int *const *p7;
	
	return 0;
}
