CC = cc
ASDIR = $(realpath $(CURDIR))
APPNAME = Algostruct
INCDIR = -I./algorithms -I./structures -I./algorithms/sorting/ -I./structures/arrays/
DEBUG = -g
CFLAGS = $(DEBUG) $(INCDIR)
ALGODIR = "./algorithms/"
STRUCTDIR = "./structures/"
OBJECTS = algorithms/*.o algorithms/sorting/*.o structures/*.o structures/arrays/*.o ./*.o

all: arg_parser.o main.o subs $(APPNAME) clean

clean:
	rm $(OBJECTS)

$(APPNAME):
	$(CC) $(OBJECTS) $(DEBUG) -o $(APPNAME)
subs:
	+$(MAKE) -C $(ALGODIR)
	+$(MAKE) -C $(STRUCTDIR)

main.o: main.c
	$(CC) -c main.c $(CFLAGS)

arg_parser.o: arg_parser.h arg_parser.c
	$(CC) -c arg_parser.c $(CFLAGS)

.PHONY: subs clean
