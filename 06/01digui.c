/*
递归:自己调用自己
递归函数:直接或者间接自己调用自己的函数

完成递归,必须具备以下两个条件:
1.每次调用自己的函数,规模比当前小
2.递归的出口(结束条件)

递归函数在时间空间的开销都是比较大,唯一的好处可读性比较强,代码缩短
*/

//1!+2!+3!+....n!


#include <stdio.h>

long fun(int n)
{
	if(n==1) 
		return 1;
	return n * fun(n-1);
}

long sum(int n)
{
	if(n==1) 
		return 1;
	return fun(n)+ sum(n-1);
}
//e(3);
void e(int n) //形参,形式参数  值传递
{
	if(n > 0) {
		e(--n);
		printf("%d  ", n);
		e(--n);
	}
	return ;
}

int main(void)
{
	//printf("%ld\n", sum(100));
	int n = 3;
	e(n);//实参, 实际参数
	printf("\n");
	return 0;
}




