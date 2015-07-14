//数组:相同类型的元素的集合
//1.C语言中只有一维数组,而且数组的大小必须在编译期间就作为一个常数确定下来,但是,C语言中数组的元素可以是任何类型的对象
//2.任何一个数组下标运算都等同于一个对应的指针运算,可以根据指针进行下标运算,哪怕是已经越界.
//3.确定该数组大小,获得只想该数组下标为0的指针
#include <stdio.h>
#include <string.h>

int main(void)
{
//	int arr[0];// = {1, 2, 3};
//	int arr[0];// 元素 * 元素个数
	
	
	//数组的类型 int [3]
				//数组中元素的类型 int
//	int brr[5] = {10,,18 };//err, 未赋值的元素只能堆积在后面
	
	
//字符数组和字符串
	char str1[] = {'h', 'e', 'l', 'l', 'o'};
	char str2[5] = "hello"; //字符数组
	for(int i = 0; i<10; i++) {	
		printf("str2[%d] = %d\n", i, str2[i]);
	}
	

	char str3[] = "hello"; //字符串
	char str4[] =  {"hello"};
	

	printf("str1 = %lu\n", strlen(str1));
	printf("sizeof(str1) = %lu\n", sizeof(str1));
	printf("str2 = %lu\n", strlen(str2));
	printf("sizeof(str2) = %lu\n", sizeof(str2));
	printf("str3 = %lu\n", strlen(str3));
	printf("sizeof(str3) = %lu\n", sizeof(str3));
	printf("str4 = %lu\n", strlen(str4));
	printf("sizeof(str4) = %lu\n", sizeof(str4));
	
	char s[3][2] = {{'a', 'b'},{'c', 'd'}, {'e', 'f'} };
	char t[3][2] = {"a", "b", "c"};

	
	
	return 0;
}
