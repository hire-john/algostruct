#include <as_algo_insertion_sort.h>

void insertion_sort(int* array, int* size, int sort_order){
	register int current;
	for(int i = 0; i < *size; i++){
		while((i-1 >=0) and array[i] < array[i-1]){
			array[i] = array[i-1];
		}
		array[i-1]=array[current]
	}
}
