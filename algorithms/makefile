CC = gcc
INCARG = -I. -I./sorting -I./searching
SORTDIR = "./sorting"
DEBUG = -g

subs:
	$(MAKE) -C $(SORTDIR)

algostruct_sorts.o: algostruct_sorts.c algostruct_sorts.h
	$(CC) -c algostruct_sorts.c $(DEBUG) $(INCARG)

.PHONY subs
