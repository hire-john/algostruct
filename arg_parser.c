#include "arg_parser.h"

void parse_cli_args(int argc, char* argv[]){
	for(int i = 0; i < argc; i++){
		printf("Argument entered: %s\n", argv[i]);
	}
}

void parse_arg_commands(){
}

void argument_parser(int argc, char* argv[]){
	if(argc > 1){
		parse_cli_args(argc, argv);
	}else{
		printf("add default handler function\n");
	}
}

