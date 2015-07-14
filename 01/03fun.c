#include <stdio.h>

int main(void)
{
	printf("%s\n", __func__);
	//__func__ 打印该宏所在的函数
	printf("%s\n", __FUNCTION__);
	//__FUNCTION__ 打印该宏所在的函数 一般不推荐使用该宏
	printf("%s\n", __FILE__);
	//__FILE__ 打印该宏所在的文件
	printf("%d\n", __LINE__);
	//__LINE__ 打印该宏所在的行号
	printf("%s\n", __DATE__);
	printf("%s\n", __TIME__);
	//打印编译该文件的时间

	return 0;
}
