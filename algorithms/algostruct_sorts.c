#include <algostruct_sorts.h>

void select_sort(char* sort_name){
	printf("sort: %s\n", sort_name);
	int size, sort_order, sort_name_error = 0;
	printf("enter # of elements: ");
	scanf("%d", &size);
	printf("enter 0 for descending order; enter 1 for ascending order: ");
	scanf("%d", &sort_order);
	unsigned int* uint_array = new_uint_array(&size);
	void* void_array = new_void_array(&size, "uint");
	seed_uint_array(uint_array, &size);
	printf("Randomly generated array before sorting: \n");
	print_uint_array(uint_array, &size);

	if(strcmp(sort_name, "selection") == 0){
		selection_sort(uint_array, &size, sort_order);
	}else if (strcmp(sort_name, "insertion") == 0){
		insertion_sort(uint_array, &size, sort_order);
	}else if (strcmp(sort_name, "bubble") == 0){
		bubble_sort(void_array, &size, sort_order);
	}else if (strcmp(sort_name, "bucket") == 0){
		bucket_sort(uint_array, &size, sort_order);
	}else if (strcmp(sort_name, "counting") == 0){
		counting_sort(uint_array, &size, sort_order);
	}else if (strcmp(sort_name, "cube") == 0){
		cube_sort(uint_array, &size, sort_order);
	}else if (strcmp(sort_name, "heap") == 0){
		heap_sort(uint_array, &size, sort_order);
	}else if (strcmp(sort_name, "merge") == 0){
		merge_sort(uint_array, &size, sort_order);
	}else if (strcmp(sort_name, "quick") == 0){
		quick_sort(uint_array, &size, sort_order);
	}else if (strcmp(sort_name, "radix") == 0){
		radix_sort(uint_array, &size, sort_order);
	}else if (strcmp(sort_name, "shell") == 0){
		shell_sort(uint_array, &size, sort_order);
	}else if (strcmp(sort_name, "tree") == 0){
		tree_sort(uint_array, &size, sort_order);
	}else{
		sort_name_error = 1;
	}

	if(!sort_name_error){
		printf("Randomly generated array after sorting: \n");
		print_uint_array(uint_array, &size);
	}else{
		printf("sort name: %s not found\n", sort_name);
	}
	free(uint_array);
}
