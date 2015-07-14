TGT = test
SRCS = main.c test.c
CC = gcc
RM = rm

$(TGT):$(SRCS)
	$(CC) $^ -o $@

#test:main.c test.c
#	gcc main.c test.c -o test

# $@ 表示当前规则中的目标
# $^ 表示当前规则中的所有条件(或者是所有的依赖)
# $< 表示当前规则中的所有条件中第一个(或者是所有依赖中的第一个)
# $? 表示当前规则中所有比目标文件更新的文件
# $* 表示当前的模式规则中%匹配部分

all:file1 file2 file3
	

file1:
	touch file1

file2:
	touch file2

file3:
	touch file3

clean:
	$(RM)  -rf file1 file2 file3 $(TGT)
	


