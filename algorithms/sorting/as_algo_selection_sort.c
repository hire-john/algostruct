#include <as_algo_selection_sort.h>
void selection_sort(void* array, int* size, int sort_order){
	/*register int min;
	for(int i = 0; i < *size; i++){
		min = i;
		for(int ii = i + 1; ii < *size; ii++){
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
	}*/

	printf("Size is = %d", size);
}
