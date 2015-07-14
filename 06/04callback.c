/*
回调函数:回调是一个对函数指针的应用.它是不能被显示的调用,只能通过指向该函数的指针进行间接的调用.

回调函数实现了调用层和被调用层的一个分离,使得各层之间关联降低,仅仅通过一个有限的接口来进行联系.
*/

#include <stdio.h>
#include <signal.h>
void TV_show(void)
{
	printf("TV_show\n");
}

void computer_show(void)
{
	printf("computer_show\n");
}

void phone_show(void)
{
	printf("phone_show");
}

//现在外面想用一个统一的接口来实现show函数,这个时候用到回调函数
void show(void (*ptr)(void))
{
	ptr();
}

//返回函数 void (*handler)(int);
//软中断
//void (*signal(int signum, void (*handler)(int)))(int)


void my_signal1(int signum)
{
	printf("%d信号输入\n", signum);
	return;
}


void my_signal2(int signum)
{
	printf("欢迎下次再来\n");
	return;
}

int main(void)
{
//	show(TV_show);
	signal(SIGINT, my_signal2);
	signal(SIGWINCH, my_signal1);
	while(1);
	return 0;
}
