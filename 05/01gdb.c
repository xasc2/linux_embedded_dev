/*
如果要使用gdb调试工具,编译的时候要加上-g选项
gcc -g 01gdb.c. 如果不加-g选项,无法使用gdb调试工具

gdb a.out 进入到gdb调试

list  l  查看代码,显示10行代码
list 显示后面10行的代码
list -  显示前面10行的代码
list num 显示代码num行周围的代码

break 行号  打断点
break 17 在17行打一个断点

info break 查看打的断点

del num 删除num号断点

run(r) 运行程序直到断点处,如果再次执行run命令,则程序从头开始运行

next(n) step(s)
next num
step num
step 单步执行,如果有函数调用,则进入函数内部,step后面如果不加num,表示一步一步的去执行,加上num表示执行num步

next 单步执行,不会进入到函数内部,step后面如果不加num,表示一步一步的去执行,加上num表示执行num步

countine(c) 继续执行程序,直到程序结束或者下一个断点

直接按回车执行上一条命令

print(p) watch
打印变量
print /xxx  变量
x  十六进制格式输出
d  十进制
u  十六进制无符号
o  八进制
t  二进制
c  字符格式
f  浮点

watch 查看变量,运行程序的时候,如果设置变量发生变化,则打印出来

*/

#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int sum[10] = {0,0,0,0,0,0,0,0,0, 0};
	
	int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr2[10] = {1,2,3,4,5,6,7,8,9,10};

	int i;
	for(i=0;i<10;i++) {
		sum[i] = add(arr1[i], arr2[i]);
	}

	return 0;
}
