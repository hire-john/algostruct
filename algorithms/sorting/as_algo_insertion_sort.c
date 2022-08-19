#include <as_algo_insertion_sort.h>
void insertion_sort(void* array, int* size, int sort_order){
	register int curr_val, prev_idx;
	/*for(int i = 1; i < *size; i++){
		curr_val = (int) array[i];
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
	}*/
}
