#include <as_structs_arrays.h>

void seed_uint_array(int* array, int* size){
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

int* new_int_array(int* size){
	return (int*) calloc(*size, *size * sizeof(int));
}

signed int* new_sint_array(int* size){
	return (signed int*) calloc(*size, *size * sizeof(signed int));
}

unsigned int* new_uint_array(int* size){
	return (unsigned int*) calloc(*size, *size * sizeof(unsigned int));	
}
