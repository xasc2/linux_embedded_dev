#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct foo {
	int a;
	char *s;
};

int main(void)
{
	struct foo f1 = {10, "hello"}, f2;
	f2 = f1; //f2.a = f1.a  f2.s = f2.s
	
	/*
	if (f2 == ) { //结构体无法进行整体判断,但其中的成员没问题;
		printf("相等\n");
	} else {
		printf("不相等\n");
	}
	*/
//	printf("");

	struct foo *pf;
//	pf = &f1;
	pf = (struct foo *)malloc(10 *sizeof(struct foo));
	if(pf == NULL) {
		printf("malloc err\n");
		return -1;
	}
	pf->a = 100;
//	pf->s = "linux";
//	printf("pf->a = %d, pf->s = %s\n", pf->a, pf->s);
	pf->s = (char *)malloc(sizeof("kernel"));
	strcpy(pf->s, "kernel");
	
	free(pf->s);
	pf->s = NULL;
//	strcpy(pf->s, "kernel");
	printf("pf->a = %d, pf->s = %s\n", pf->a, pf->s);
//常见的内存使用错误:
//1.释放不是自己申请的堆空间
//2.只释放堆空间的一部分
//3.多次释放同一块堆空间
//4.释放堆空间之后,继续使用(段错误)

//valgrind


	return 0;
}



