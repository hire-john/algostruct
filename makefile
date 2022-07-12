CC = cc
ASDIR = $(realpath $(CURDIR))
APPNAME = Algostruct
ALGODIR = "./algorithms/"
STRUCTDIR = "./structures/"
INCDIR = -I./algorithms -I./structures -I./algorithms/sorting/ -I./structures/arrays/
DEBUG = -g

subs:
	+$(MAKE) -C $(ALGODIR)
	+$(MAKE) -C $(STRUCTDIR)

main.o: main.c
	$(CC) -c main.c $(DEBUG) $(INCDIR)

.PHONY: subs
