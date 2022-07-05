/*
 * Algostruct Sorting Algorithms
 * 
 * Include with this header is all the various sorting algorithms. As I develop this I may further decompose this into isolated algorithmically atomic functions per include.
 *
 * Author: John McDonnell - JJM - john@hire-john.com
 */

#ifndef ALGOSTRUCT_ALGO_SORTING
#define ALGOSTRUCT_ALGO_SORTING

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

/*
 * pointer to array & to size of array to seed
 */
void seed_int_array(int*, int*);

/*
 * pointer to array & size of the array
 */
void print_array(int*, int*);

/*
 * pointer to array & size of array, sort order
 */
void selection_sort(int*, int*, int);

#endif
