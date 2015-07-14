//指针数组
//本质是一个数组,数组中的每个元素是一个指针

#include <stdio.h>
//int main(void)
//int main(int argc, char *argv[])
//argc:表示传递命令参数的个数,包括文件名本身
//argv:指针数组,表示只想数组首元素(argv[0])
//argv:  char ** argv
int main(int argc, char *argv[])
{

	printf("argc = %d\n", argc);
	
	for(argc--; argc >= 0; argc--) {	
		printf("argv[%d] = %s\n", argc, argv[argc]);
	}
	
	printf("sizeof(argv) = %lu\n", sizeof(argv));
	
	char **arr = {"abc", "cd", "bc"};
	printf("sizeof(arr) %lu\n", sizeof(arr));	

	return 0;
}
