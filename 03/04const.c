#include <stdio.h>
#include <string.h>

void str(const char s[]) //const char *s
{
	printf("str, strlen s = %lu\n", strlen(s)); //5
	printf("str, sizeof s = %lu\n", sizeof(s)); //8
}

int main(void)
{
	char t[10] = {0, 1, 2, 3, 5};
	char s[] = "hello";
	printf("strlen t = %lu\n", strlen(t)); //0
	printf("sizeof t = %lu\n", sizeof(t)); //10
	printf("strlen s = %lu\n", strlen(s)); //5 6
	printf("sizeof s = %lu\n", sizeof(s)); //6
	str(s);
	//在C中,数组名在以下情况下不会自动转换为指向数组首元素的指针类型
	//1.数组名作为sizeof的操作数
	//2.C中,对数组名取地址 例如:&arr 表示整个数组的首地址
	return 0;
}
