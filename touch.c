#include <stdio.h>


int main(int argc,char*argv[]){
	FILE*archivo = fopen(argv[1],"w");
	if(!archivo) printf("Error al crear archivo");
	fclose(archivo);
	return 0;
}
