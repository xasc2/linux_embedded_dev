//int *(*(*func)[2])(int* (*)[2], void (*)(int (*)[2]));
int (*func1[2])(void);
int (*func2(void))[2];

int *(*func(int (*)[2], int (*(*)(int (*)(int, int),int (*)[2]))[2]))[2];

//int  (*b)(int , int)[2];

int main(void)
{
	return 0;
}
