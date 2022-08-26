#include <as_algo_insertion_sort.h>
void insertion_sort(int* array, int* size, int sort_order){
	register int i, curr_val, prev_idx;
	for(i = 1; i < *size; i++){
		curr_val = array[i];
		prev_idx = i - 1;
		if(sort_order){
			while(prev_idx >= 0 && array[prev_idx] > curr_val){
				array[prev_idx + 1] = array[prev_idx];
				prev_idx = prev_idx - 1;
			}
		}else{
			while(prev_idx >= 0 && array[prev_idx] < curr_val){
				array[prev_idx + 1] = array[prev_idx];
				prev_idx = prev_idx - 1;
			}
		}
		array[prev_idx + 1] = curr_val;
	}
}
