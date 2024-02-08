#include <stdio.h>
#include <direct.h>

int main(int argc,char*argv[]){

	if(argc==1) return 0;
	mkdir(argv[1]);
	return 0;
}
