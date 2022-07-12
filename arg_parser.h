/*
 * Handles the program arguments by parsing the arg_commands file
 * and mapping the argv/argc to the contents in arg_commands.
 * Author John McDonnell - JJM - john@hire-john.com
 */

#ifndef ALGOSTRUCT_ARG_PARSER
#define ALGOSTRUCT_ARG_PARSER

#define ALGOSTRUCT_ARG_CMDS "arg_commands"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void parse_cli_args(int, char* []);
void parse_arg_commands();
void argument_parser(int, char* []);

#endif
