/*
 * Algostruct Main
 *
 * Main entry function for the Algostruct application. 
 *
 * Author: John McDonnell - JJM - john@hire-john.com
 */

#include "arg_parser.h"
#include <algostruct_structs.h>
#include <algostruct_sorts.h>

int main(int argc, char* argv[]){

	printf("Arg Parser \n");
	argument_parser(argc, argv);

	int size, sort_order;
	printf("enter # of elements: ");
	scanf("%d", &size);
	printf("enter 0 for descending order; enter 1 for ascending order: ");
	scanf("%d", &sort_order);

	/* test selection sort - move to sort file later */
	unsigned int* uint_array = new_uint_array(&size);
	seed_uint_array(uint_array, &size);
	print_array(uint_array, &size);
	selection_sort(uint_array, &size, sort_order);
	print_array(uint_array, &size);

	/* test insertion sort - move to sort file later */
	seed_uint_array(uint_array, &size);
	print_array(uint_array, &size);
	insertion_sort(uint_array, &size, sort_order);
	print_array(uint_array, &size);
	free(uint_array);

	return EXIT_SUCCESS;
}
