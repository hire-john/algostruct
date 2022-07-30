/*
 * Eventually I will rework these - likely just allowing data to be passed in through the CLI 
 * and make this an functioning command line program for sorting etc - right now these arrays 
 * are mainly just for testing. They will definitely be changed in the future.
 *
 * @TODO: Condense the functions down into single typeless interfaces
 * Author: John McDonnell - JJM - john@hire-john.com
 */

#ifndef ALGOSTRUCT_STRUCT_ARRAY
#define ALGOSTRUCT_STRUCT_ARRAY

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int* new_int_array(int*); /* usually defaults to signed / arm defaults to unsigned best to use explicit type */
signed int* new_sint_array(int*);
unsigned int* new_uint_array(int*);
void* new_void_array(int*, char*);

void seed_sint_array(signed int*, int*);
void seed_uint_array(unsigned int*, int*);
void seed_void_array(void*, int*, char*);

void print_int_array(int*, int*);
void print_uint_array(unsigned int*, int*);

#endif
