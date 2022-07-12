CC = gcc
INCDIR = -I.
DEBUG = -g
CFLAGS = $(DEBUG) $(INCDIR)
all: insertion_sort.o selection_sort.o

insertion_sort.o:as_algo_insertion_sort.h as_algo_insertion_sort.c
	$(CC) -c as_algo_insertion_sort.c $(CFLAGS)

selection_sort.o:as_algo_selection_sort.h as_algo_selection_sort.c
	$(CC) -c as_algo_selection_sort.c $(CFLAGS)
