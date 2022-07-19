#include "arg_parser.h"

void parse_cli_args(int argc, char* argv[]){
	const unsigned char action_sentinel = 0x3D;
	const unsigned char* p_action_sentinel = &action_sentinel;
	for(int i = 0; i < argc; i++){
		if(*argv[i] == *p_action_sentinel){
			printf("match found!\n");
			char* p_cli_sentinel;
			p_cli_sentinel = strstr(argv[i], p_action_sentinel);
			printf("Address of Sentinel In String: %p\n", p_action_sentinel);
		}
	}
}

void argument_parser(int argc, char* argv[]){
	if(argc > 1){
		parse_cli_args(argc, argv);
	}else{
		printf("add default handler function\n");
	}
}
