CC = gcc
INCARG = -I. -I./sorting -I./searching -I../structures -I../structures/arrays
DEBUG = -g
CFLAGS = -Wall -Wextra $(DEBUG) $(INCARG)
SORTDIR = "./sorting"
SEARCHDIR = "./searching"

all: algostruct_sorts.o subs

subs:
	$(MAKE) -C $(SORTDIR)

algostruct_sorts.o: algostruct_sorts.c algostruct_sorts.h
	$(CC) -c algostruct_sorts.c $(CFLAGS)

.PHONY: subs
