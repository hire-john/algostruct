void selection_sort(int* array, int* size, int asc_sort){
	register int min;
	for(int i = 0; i < *size; i++){
		min = i;
		for(int ii = i + 1; ii < *size; ii++){
			if(asc_sort){
				if(array[ii] < array[min]){
					min = ii;
				}
			}else{
				if(array[ii] > array[min]){
					min = ii;
				}
			}
		}
		if(asc_sort){
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