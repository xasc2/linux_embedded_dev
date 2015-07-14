//linux编程风格
//1.对标示符命名习惯用_下划线
//2.除了函数 { 另起一行,其他的程序块一般不另起
#include <stdio.h>

//判断结构
//1.if (表达式1) {
		
// } else if (表达式2) {
//	} else {
//	}

int main()
{
//注意事项:
//1.误把== 写成了=
//2.多写了;
//3.嵌套的if...else...注意嵌套范围

/*
	int a = 6, b = 0;
	if ( a == 0) {}
	
	else if(a >  b) {
		printf("a > b\n");
	} else {
		printf("a < b\n");
	}
*/
//switch
/*
switch (表达式1) {
	case 数值1或者范围1:
		 代码段1;
		 break;
	case 数值2或者范围2:
		 代码段2;
		 break;
		....
	default:
		break;
}
*/
//1.范围不能重叠
//2.  ...两边的空格不能省略
//3. 范围从小到大 而且是确定的范围
//4.break的使用
#if 0
	int s = 45 ;
	switch (s) {
		case 81 ... 100:
			printf("优秀\n");
			break;
		case 61 ... 80:
			printf("良好\n");
			break;
		case  + :
			opt = -opt			
		case - :
			-opt
			xxx();
			break;
		default:
			printf("err\n");
			break;
	}
#endif

//循环
//1.while(表达式) {
//}

//2.do {
//}while(表达式);

//#define SAFE_FREE(p) do{free(p);p=NULL;}while(0)
//3.for
	if (a > b)
		do{free(p);p=NULL;}while(0);
	
	for(int i=0;i<10;i++) {
		printf("i = %d\n", i);
	}
	
	int a = 5;
	while(a) {
		printf("%d\n", a);
		a--;
	}
//跳转
//goto  return break continue 
//break跳出循环
//continue 跳出本次的循环

//goto 用法
//错误

	a = 1;
	while(a) {
		printf("in break\n");
		if(a == 3) {
			break;
			//continue;
		}
		printf("end break\n");
		a++;
	}


	a = 1;

loop:
	a++;
	printf("a = %d\n", a);
	if(a == 5) {
		goto out;
	}	
	goto loop;

out:
	printf("game over!");
	xxx;
	xxx;

out2:
	xxx;
//	return 0;
}




