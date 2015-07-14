#include <stdio.h>

#define A(a) #a
#define B(a) A(a)
//宏的替换序列是另外一个宏的时候,在外面的宏展开的同时,里面的参数对应的宏也会一同展开
int main(void)
{
	printf("A(B(a)) = %s\n", A(B(123)));
	//#B(123)  B(123)
	printf("B(A(a)) = %s\n", B(A(123)));
	//A(A(a)) A(#123) A("123")  "123"
	
	printf("hello" "world" "kernel");
}
