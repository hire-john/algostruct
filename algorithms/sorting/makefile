CC = gcc
INCDIR = -I.
DEBUG = -g
CFLAGS = $(DEBUG) $(INCDIR)

all: bubble_sort.o bucket_sort.o counting_sort.o cube_sort.o \
	heap_sort.o insertion_sort.o merge_sort.o quick_sort.o \
	radix_sort.o selection_sort.o shell_sort.o tree_sort.o

bubble_sort.o: as_algo_bubble_sort.h as_algo_bubble_sort.c
	$(CC) -c as_algo_bubble_sort.c $(CFLAGS)

bucket_sort.o: as_algo_bucket_sort.h as_algo_bucket_sort.c
	$(CC) -c as_algo_bucket_sort.c $(CFLAGS)

counting_sort.o: as_algo_counting_sort.h as_algo_counting_sort.c
	$(CC) -c as_algo_counting_sort.c $(CFLAGS)

cube_sort.o: as_algo_cube_sort.h as_algo_cube_sort.c
	$(CC) -c as_algo_cube_sort.c $(CFLAGS)

heap_sort.o: as_algo_heap_sort.h as_algo_heap_sort.c
	$(CC) -c as_algo_heap_sort.c $(CFLAGS)

insertion_sort.o: as_algo_insertion_sort.h as_algo_insertion_sort.c
	$(CC) -c as_algo_insertion_sort.c $(CFLAGS)

merge_sort.o: as_algo_merge_sort.h as_algo_merge_sort.c
	$(CC) -c as_algo_merge_sort.c $(CFLAGS)

quick_sort.o: as_algo_quick_sort.h as_algo_quick_sort.c
	$(CC) -c as_algo_quick_sort.c $(CFLAGS)

radix_sort.o: as_algo_radix_sort.h as_algo_radix_sort.c
	$(CC) -c as_algo_radix_sort.c $(CFLAGS)

selection_sort.o: as_algo_selection_sort.h as_algo_selection_sort.c
	$(CC) -c as_algo_selection_sort.c $(CFLAGS)

shell_sort.o: as_algo_shell_sort.h as_algo_shell_sort.c
	$(CC) -c as_algo_shell_sort.c $(CFLAGS)

tree_sort.o: as_algo_tree_sort.h as_algo_tree_sort.c
	$(CC) -c as_algo_tree_sort.c $(CFLAGS)
