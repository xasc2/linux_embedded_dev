SRCS = foo.c
SUB_DIR =
#当前目录下的目标(built-in.o)是有当前目录的.c文件和当前目录下的子目录的目标
#ld 生成一个不完全的链接
#ld test.o foo/bulit-in.o -r -o bulit-in.o
$(SUB_TGT):$(SRCS:.c=.o) $(SUB_DIR)
	$(LD) $(SRCS:.c=.o) $(SUB_DIR:=/$(SUB_TGT)) -r -o $@

%.o:%.c
	$(CC) $(CFLAGS) -c $<

$(SUB_DIR):
	make -C $@

.PHONY:$(SUB_DIR)

