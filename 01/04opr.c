//运算符
//+ - * / %
//->


//&  | ~ 按位运算符
//位操作运算符,(位操作是针对二进制数而言的)
//&按位与,如果两个数都为1,该位为1,否则为0
//|按位或,两个数都为0,运算结果为0,否则为1
//~取反, 该位1变成0,0变成1
//<< 按位左移:
//>>按位右移:


#include <stdio.h>

//int a = 10;
int main(void)
{
#if 0
//对GPM4DAT 低五位清零操作,其他位为1
	size_t  a = ~0x1f;
//对GPM4DAT 第四位值1,其他不变
	GPM4DAT |= (1 << 0x4);
//对GPM4DAT 第四位清零,其他位不变
	GPM4DAT &= ~(1 << 0x4);
//对GPM4DAT 第9位第11位 值1 
 GPM4DAT =	GPM4DAT | (1 << 9| 1 << 11) & ~(1 << 4 | 1<< 5);
//11位值1  
//对4位 清零 
	GPM4DAT &= ~(1 << 4 | 1<< 5);
//对5位 清零

//++ --;
	

	int i = 1, a;
	a = i++; //1
	a = ++i; //3
#endif

//	int a = 10;
//	printf("%d, %d, %d, %d, %d\n", a++, ++a, a, a++, ++a);


	//条件运算符
//	? :	

#if 0
	b==c ? printf("相等\n"):printf("不相等\n");

	//&& || ! 真是非0  假 0
	//&& exp1 && exp2 
	//当表达式exp1为假的时候,后面的表达式不执行
	b == c && c++;
	printf("%d, %d\n", b, c);
	//|| exp1 || exp2 
	//当表达式exp1为真的时候,后面的表达式不执行
//	bool boo;
#endif
	//逗号运算符
	int a;
	int b = 6, c = 5;
	a = b, c;
	printf("%d\n", a);

copy_form_user(..., const char __usr *form);
	return 0;
}


