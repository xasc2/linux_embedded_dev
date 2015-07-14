TGT = test
SRCS = main.c test.c
OBJ = main.o test.o
DEP = main.dep test.dep
CC = gcc
RM = rm

#目标更新的规则
#1.目标文件不存在
#2.目标文件存在,但时间戳比它的依赖旧
#3.目标文件存在,它的依赖文件需要更新

$(TGT):$(OBJ)
	$(CC)  $^ -o $@

#下面的规则是为了解决因为头文件的更新,所有的依赖文件没有被重新生成的问题
#为了显示查看,Makefile自动推导过程
#%.dep:%.c
#	@echo "dep"
#	$(CC) -MM $< > $@
#sinclude $(DEP)
#include 类似于头文件包含,main.dep test.dep,


all:
	@echo "hello world"

#main.dep =main.c
#	gcc -MM main.c > main.dep
#test.dep = test.c
#	gcc -MM test.c > test.dep

#%被称为模式,所在的规则就被称为模式规则,它执行的过程类似C语言循环,每次取出一个依赖文件,生成一个对应的目标

#Makefile 自动推导
#test:main.o test.o
#	gcc main.o test.o -o test

clean:
	$(RM) -rf $(OBJ) test $(DEP)





