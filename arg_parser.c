#include "arg_parser.h"

void parse_cli_args(int argc, char* argv[]){
	if(argc == 3){
		if(strcmp(argv[1], "sort") == 0){
			select_sort(argv[2]);
		}
	}else{
		printf("ALGOSTRUCT!\n");
		printf("sort or search arguments are available -> Algostruct sort sort_name or Algostruct search search_name\n");
	}
}
