#include <stdio.h>
//枚举型:
//1.枚举型是一个集合,集合中的元素(枚举成员)是一些命名的整型常量,元素之间用 ,隔开
//2.第一个成员默认为0,后续的枚举成员加1
//3.可以人为设置成员的值,从而自定义某个范围的整数
//4.枚举型是预处理指令#define的代替
int main(void)
{
	enum DAY {
		sun = 10, mon, tue =-9, wed, thu, fri, sat,
	};
	
//	enum WEEK_DAY {
//		sat, sun,
//	};


//	sat = 100;
	enum DAY day;
	#if 0
//	day = sun
//	day = 10; //语法合法,但这样赋值,失去枚举型定义的意义;
	printf("day = %d\n", day);
//	#define
	printf("sizeof DAY = %lu\n", sizeof(enum DAY));
	printf("sizeof day = %lu\n", sizeof(day));
	
	printf("sun = %d\n", sun);
	printf("mon = %d\n", mon);
	printf("tue = %d\n", tue);
	printf("wed = %d\n", wed);
	printf("thu = %d\n", thu);
	printf("fri = %d\n", fri);
	printf("sat = %d\n", sat);
	#endif

//联合体(共用体):所有的成员共用同一块内存空间的结构
//1.联合体大小,取决于其中最大成员的大小.
//2.联合体的赋值,是按照第一个成员的类型来接受的
//3.在同一时刻,只能使用其中一个成员.
//4.该空间的值是最后一次通过其中某个成员修改之后的值
	union ufoo {
		char a;   //4
		short s;  //2
		int c;   //1
	};	
	
//	struct foo f  = {10, "hello"};
	union ufoo uf = {0x11223344}; //整体赋值
//	uf.a = 0x11223344; //针对成员赋值
//	uf.s = 0x5678;
//	uf.c = 0x99;
//	uf.a = 0x88888888;
	
	
	printf("sizeof ufoo = %lu\n", sizeof(union ufoo));
	printf("uf.a = %#x\n", uf.a);	
	printf("uf.s = %#x\n", uf.s);	
	printf("uf.c = %#x\n", uf.c);	

	return 0;
}
