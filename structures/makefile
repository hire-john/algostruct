CC = gcc
INCARG = -I. -I./arrays
DEBUG = -g
ARRAYDIR = "./arrays"

subs:
	+$(MAKE) -C $(ARRAYDIR)

algostruct_structs.o: algostruct_structs.c algostruct_structs.h
	$(CC) -c algostruct_structs.c $(DEBUG) $(INCARG)

.PHONY: subs
