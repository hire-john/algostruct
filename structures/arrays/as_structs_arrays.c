#include <as_structs_arrays.h>

void seed_sint_array(signed int* array, int* size){
	time_t seed;
	srand((signed) time(&seed));
	for(int i = 0; i < *size; i++){
		array[i] = rand() % 50;
	}
}

void seed_uint_array(unsigned int* array, int* size){
	time_t seed;
	srand((unsigned) time(&seed));
	for(int i = 0; i < *size; i++){
		array[i] = rand() % 50;
	}
}

void seed_void_array(void* array, int* size){
	time_t seed;
	srand((void) time(&seed));
	for(int i = 0; i < *size; i++){
		array[i] = rand() % 50;
	}
}

void print_array(void* array, int* size){
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

void* new_void_array(int* size, char* element_type){
	if(strcmp(element_type, "int") == 0){
		return (void*) new_int_array(size);
	} else if (strcmp(element_type, "sint") == 0){
		return (void*) new_sint_array(size);
	}else if (strcmp(element_type, "uint") == 0){
		return (void*) new_uint_array(size);
	}
}
