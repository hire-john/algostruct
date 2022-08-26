#include <as_algo_bubble_sort.h>

void bubble_sort(int* array, int* size, int sort_order){
	register int i, ii;
	for(i = 0; i < *size - 1; i++){
		for(ii = 0; ii < *size - i - 1; ii++){
			if(sort_order){
				if(array[ii] > array[ii+1]){
					array[ii] = array[ii] ^ array[ii+1];
					array[ii+1] = array[ii] ^ array[ii+1];
					array[ii] = array[ii] ^ array[ii+1];
				}
			}else{
				if(array[ii] < array[ii+1]){
					array[ii] = array[ii] ^ array[ii+1];
					array[ii+1] = array[ii] ^ array[ii+1];
					array[ii] = array[ii] ^ array[ii+1];
				}
			}
		}
	}
}
