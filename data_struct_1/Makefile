TGT = mytest
SUB_DIR = main seqlist

export SUB_TGT = built-in.o
export CC = gcc
export RM = rm
export CUR_DIR = $(shell pwd)
export HEAD_DIR = $(CUR_DIR)/include
export CFLAGS = -I $(HEAD_DIR)
export LD = ld

$(TGT):$(SUB_DIR)
	$(CC) $(^:=/$(SUB_TGT)) -o $(TGT)


#分别到main 和seqlist 目录下面执行make 
$(SUB_DIR):
	make -C $@

clean:
	-$(RM) -rf $(TGT)
	for dir in $(SUB_DIR); do \
		make -C $$dir clean; \
	done


.PHONY:$(SUB_DIR)






