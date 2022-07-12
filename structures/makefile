CC = gcc
INCARG = -I. -I./arrays
DEBUG = -g
CFLAGS = -Wall -Wextra $(DEBUG) $(INCARG)
ARRAYDIR = "./arrays"

all: algostruct_structs.o subs

subs:
	+$(MAKE) -C $(ARRAYDIR)

algostruct_structs.o: algostruct_structs.c algostruct_structs.h
	$(CC) -c algostruct_structs.c $(CFLAGS)

.PHONY: subs
