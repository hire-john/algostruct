CC = cc
ASDIR = $(realpath $(CURDIR))
APPNAME = Algostruct
INCDIR = -I. -I./algorithms -I./structures -I./algorithms/sorting/ -I./structures/arrays/ -I./features/
DEBUG = -g
CFLAGS = $(DEBUG) $(INCDIR)
ALGODIR = "./algorithms/"
STRUCTDIR = "./structures/"
FEATDIR = "./features/"
OBJECTS = algorithms/*.o algorithms/sorting/*.o structures/*.o structures/arrays/*.o ./*.o features/*.o

all: arg_parser.o main.o subs $(APPNAME) clean

clean:
	rm $(OBJECTS)

$(APPNAME):
	$(CC) $(OBJECTS) $(DEBUG) -o $(APPNAME)
subs:
	+$(MAKE) -C $(ALGODIR)
	+$(MAKE) -C $(STRUCTDIR)
	+$(MAKE) -C $(FEATDIR)

main.o: main.c
	$(CC) -c main.c $(CFLAGS)

arg_parser.o: arg_parser.h arg_parser.c
	$(CC) -c arg_parser.c $(CFLAGS)

.PHONY: subs clean
