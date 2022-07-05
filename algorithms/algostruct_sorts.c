#include "algostruct_sorts.h"

void seed_int_array(int* array){
	time_t seed;
	srand((unsigned) time(&seed));
	for(int i = 0; i < size; i++){
		array[i] = rand() % 50;
	}
}

void print_array(int* array){
	printf("{");
	for(int i = 0; i < size; i++){
		if(i == size - 1){
			printf("[%d]=>%d", i, array[i]);
		}else{
			printf("[%d]=>%d,", i, array[i]);
		}
	}
	printf("}\n");
}

void selection_sort(int* array, int asc_sort){
	register int min;
	for(int i = 0; i < size; i++){
		min = i;
		for(int ii = i + 1; ii < size; ii++){
			if(asc_sort){
				if(array[ii] < array[min]){
					min = ii;
				}
			}else{
				if(array[ii] > array[min]){
					min = ii;
				}
			}
		}
		if(asc_sort){
			if(array[i] > array[min]){
				array[i] = array[i] ^ array[min];
				array[min] = array[i] ^ array[min];
				array[i] = array[i] ^ array[min];
			}
		}else{
			if(array[i] < array[min]){
				array[i] = array[i] ^ array[min];
				array[min] = array[i] ^ array[min];
				array[i] = array[i] ^ array[min];
			}
		}
	}
}