#include "algostruct_sorts.h"

void seed_int_array(int* array, int* size){
	time_t seed;
	srand((unsigned) time(&seed));
	for(int i = 0; i < *size; i++){
		array[i] = rand() % 50;
	}
}

void print_array(int* array, int* size){
	printf("{");
	for(int i = 0; i < *size; i++){
		if(i == *size - 1){
			printf("[%d]=>%d", i, array[i]);
		}else{
			printf("[%d]=>%d,", i, array[i]);
		}
	}
	printf("}\n");
}