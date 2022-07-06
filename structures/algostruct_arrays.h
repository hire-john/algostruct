#ifndef ALGOSTRUCT_STRUCT_ARRAY
#define ALGOSTRUCT_STRUCT_ARRAY

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int* new_int_array(int*); /* usually defaults to signed / arm defaults to unsigned best to use explicit type */
signed int* new_sint_array(int*);
unsigned int* new_uint_array(int*);

void seed_uint_array(int*, int*);
void print_array(int*, int*);

#endif
