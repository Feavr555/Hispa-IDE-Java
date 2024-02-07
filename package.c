#include <stdio.h>
#include <string.h>

void addFileMain(),addPack();

int main(int argc,char*argv[]){
	if(strcmp(argv[1],"main")==0){addFileMain(argv[2]);}else{addPack(argv[1],argv[2]);};
	return 0;
}

void addFileMain(char*file){
	FILE*java;
	char code[50];
	for(int i=0; i<50; i++){
		code[i]=0x0A;
	}
	strcpy(code,"src/main/");
	strcat(code,file);
	strcat(code,".java");
	java = fopen(code,"w");
	strcpy(code,"package main;\n\n");
	strcat(code,"public class ");
	strcat(code,file);
	strcat(code,"{\n\n}");
	fwrite(code,1,(sizeof code),java);
	fclose(java);
}

void addPack(char*pack,char*file){
	char code[50];
	for(int i=0; i<50; i++){
		code[i]=0x0A;
	}
	FILE*java;
	strcpy(code,"src/");
	strcat(code,pack);
	mkdir(code);
	strcat(code,"/");
	strcat(code,file);
	strcat(code,".java");
	java = fopen(code,"w");
	strcpy(code,"package ");
	strcat(code,pack);
	strcat(code,";\n\npublic class ");
	strcat(code,file);
	strcat(code,"{\n}");
	fwrite(code,1,(sizeof code),java);
	fclose(java);
}
