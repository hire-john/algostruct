/*
 * Algostruct Main
 *
 * Main entry function for the Algostruct application. 
 *
 * Author: John McDonnell - JJM - john@hire-john.com
 */

#include "arg_parser.h"

int main(int argc, char* argv[]){
	parse_cli_args(argc, argv);
	return EXIT_SUCCESS;
}
