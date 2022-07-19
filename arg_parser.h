/*
 * Calls the algostruct function prototypes from the CLI
 * In the future I will make this more extensible somehow.
 * Author John McDonnell - JJM - john@hire-john.com
 */

#ifndef ALGOSTRUCT_ARG_PARSER
#define ALGOSTRUCT_ARG_PARSER

#define ALGOSTRUCT_ARG_CMDS "arg_commands"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <algostruct_sorts.h>
#include <algostruct_structs.h>

void parse_cli_args(int, char* []);
void argument_parser(int, char* []);

#endif
