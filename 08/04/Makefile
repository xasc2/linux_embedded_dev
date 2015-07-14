#自动推导会使用的三个特殊变量
#CFLAGS:指定头文件(.h文件)的路径
#CFLAGS=-I inlcude/
#LDFLAGS:gcc 编译器会用到的一些优化参数,可以在里面指定库的位置
#LDFLAGS=-L /usr/lib
#LIBS:告诉连接器要链接到哪些库
#LIBS=-lmytest

TGT = test
SRCS = main.c 
CC = gcc
RM = rm
#指定当前所在的目录
CUR_DIR = $(shell pwd)
HEAD_DIR = $(CUR_DIR)/include
CFLAGS = -I $(HEAD_DIR)
LDFLAGS = -L $(CUR_DIR)
LIBS = -lmytest
#:
#$(SRCS:=a) main.ca  test.ca

$(TGT):$(SRCS:.c=.o)
	echo $?
	$(CC) $^ $(CFLAGS) $(LDFLAGS) $(LIBS)  -o $@

#%.o:%.c
#	$(CC)  $(CFAGS) $< -c

#$(CC) $(CFLAGS)
#%.dep:%.c
#	$(CC) $(CFLAGS) -MM $< > $@
#sinclude $(SRCS:.c=.dep)

#-强制执行,忽略当前的错误,强制继续执行
clean:
	-$(RM) -rf $(TGT) *.dep *.o


#.PHONY:clean

#.PHONY伪目标:是一种特殊的目标.不会判断目标对应的文件是否存在,以及是否存在依赖,都会强制执行下面的命令

