TGT = mytest
SUB_DIR = main test


#export该变量传承到子目录下面
export CC = gcc
export RM = rm
export CUR_DIR = $(shell pwd)
export HEAD_DIR = $(CUR_DIR)/include
export CFLAGS = -I $(HEAD_DIR)
export LD = ld
export SUB_TGT = built-in.o
#子目标:子目录下的目标文件和子子目录下面的目标文件生成的目标

#gcc -I ../include main/bulit-in.o test/built-in.o

$(TGT):$(SUB_DIR)
	$(CC) $(CFLAGS) $(^:=/$(SUB_TGT)) -o $@

#-C 到子目录下面去执行make
#make -C main  test
$(SUB_DIR):
	make -C $@  


.PHONY:$(SUB_DIR)




