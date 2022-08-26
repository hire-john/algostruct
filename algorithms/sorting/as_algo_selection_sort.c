#include <as_algo_selection_sort.h>
void selection_sort(int* array, int* size, int sort_order){
	register int i, ii, min;
	for(i = 0; i < *size; i++){
		min = i;
		for(ii = i + 1; ii < *size; ii++){
			if(sort_order){
				if(array[ii] < array[min]){
					min = ii;
				}
			}else{
				if(array[ii] > array[min]){
					min = ii;
				}
			}
		}
		if(sort_order){
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
