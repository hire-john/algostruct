#include <as_algo_insertion_sort.h>

void insertion_sort(unsigned int* array, int* size, int sort_order){
	register int curr, prev;
	for(int i = 1; i < *size; i++){
		curr = array[i];
		prev = i - 1;
		if(sort_order){
			while(prev >= 0 && array[prev] > curr){
				array[prev + 1] = array[prev];
				prev = prev - 1;
			}
		}else{
			while(prev >= 0 && array[prev] < curr){
				array[prev + 1] = array[prev];
				prev = prev - 1;
			}
		}
		array[prev + 1] = curr;
	}
}
