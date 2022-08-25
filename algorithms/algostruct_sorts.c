#include <algostruct_sorts.h>

void select_sort(char* sort_name){
	printf("sort: %s\n", sort_name);

	int size, sort_order, sort_name_error = 0;
	printf("enter # of elements: ");
	scanf("%d", &size);

	printf("enter 0 for descending order; enter 1 for ascending order: ");
	scanf("%d", &sort_order);

	void* p_array = new_int_array(&size);
	seed_int_array(p_array, &size);

	printf("Array before sorting: \n");
	print_int_array(p_array, &size);

	if(strcmp(sort_name, "selection") == 0){
		selection_sort(p_array, &size, sort_order);
	}else if (strcmp(sort_name, "insertion") == 0){
		insertion_sort(p_array, &size, sort_order);
	}else if (strcmp(sort_name, "bubble") == 0){
		bubble_sort(p_array, &size, sort_order);
	}else if (strcmp(sort_name, "bucket") == 0){
		bucket_sort(p_array, &size, sort_order);
	}else if (strcmp(sort_name, "counting") == 0){
		counting_sort(p_array, &size, sort_order);
	}else if (strcmp(sort_name, "cube") == 0){
		cube_sort(p_array, &size, sort_order);
	}else if (strcmp(sort_name, "heap") == 0){
		heap_sort(p_array, &size, sort_order);
	}else if (strcmp(sort_name, "merge") == 0){
		merge_sort(p_array, &size, sort_order);
	}else if (strcmp(sort_name, "quick") == 0){
		quick_sort(p_array, &size, sort_order);
	}else if (strcmp(sort_name, "radix") == 0){
		radix_sort(p_array, &size, sort_order);
	}else if (strcmp(sort_name, "shell") == 0){
		shell_sort(p_array, &size, sort_order);
	}else if (strcmp(sort_name, "tree") == 0){
		tree_sort(p_array, &size, sort_order);
	}else{
		sort_name_error = 1;
	}

	if(!sort_name_error){
		printf("Array after sorting: \n");
		print_int_array(p_array, &size);
	}else{
		printf("sort name: %s not found\n", sort_name);
	}
	free(p_array);
}
