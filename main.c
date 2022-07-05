/*
 * Algostruct Main
 *
 * Main entry function for the Algostruct application. 
 *
 * Author: John McDonnell - JJM - john@hire-john.com
 */

#include <algostruct_sorts.h>

void test_selection_sort();

int main(int argc, char** argv){
    test_selection_sort();
	return EXIT_SUCCESS;
}

void test_selection_sort(){
    int size, asc_sort;
    printf("enter # of elements: ");
    scanf("%d", &size);
    printf("enter 0 for descending order; enter 1 for ascending order: ");
    scanf("%d", &asc_sort);
    unsigned int* uint_array = (unsigned int*) malloc(size * sizeof(unsigned int));
    seed_int_array(uint_array, &size);
    print_array(uint_array, &size);
    selection_sort(uint_array, &size, asc_sort);
    print_array(uint_array, &size);
    free(uint_array);
}
