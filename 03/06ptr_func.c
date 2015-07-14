#include <stdio.h>


int add(int a, int b) {return a + b;}
int sub(int a, int b) {return a - b;}

int main(void)
{
	int (*ps)(int , int);  //函数指针,本质是指针,指向一个函数
//	int* ps1(int, int); //这个函数的返回值是一个int *
	ps = add;
	printf("add = %p\n",add);
	printf("&add = %p\n",&add);

//ps(3, 4); //推荐这种写法
//(*ps)(3, 4); //


	printf("ps = %d\n", (*ps)(3, 4));
	ps = sub;
	printf("ps = %d\n", (*ps)(3, 4));

	//函数指针数组
	int (*parr[])(int , int) = {add, sub};
	
	printf("parr = %d\n", parr[0](3, 4));
	printf("parr = %d\n", parr[1](3, 4));

	return 0;
}


