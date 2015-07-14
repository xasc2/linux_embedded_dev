SRCS = main.c
SUB_DIR = 

$(SUB_TGT):$(SRCS:.c=.o)  $(SUB_DIR)
	$(LD) $(CFLAGS) $(SRCS:.c=.o) $(SUB_DIR:=/$(SUB_TGT)) -r -o $@

$(SUB_DIR):
	make -C $@

%.o:%.c
	$(CC)  $(CFLAGS) -c $<


clean:
	-$(RM) -rf $(SRCS:.c=.o)  $(SUB_TGT)
	for dir in $(SUB_DIR); do\
		make -C $$dir clean; \
	done

.PHONY:$(SUB_DIR)
