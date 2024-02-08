#include <stdio.h>
#include <string.h>
#define code_java "package main;\n\npublic class Main{\n\tpublic static void main(String[] args){\n\t\t//Inserte su codigo de la funcion main\n\t}\n}\n\n\0"
#define makefile 1200

int comp();
void newProject(),dirMain(),fileMain(),make();

int main(int argc,char*argv[]){
	if(argc==1) return -1;
	if(comp(argv[1],"nuevo")){
		newProject(argv[2],argv[0]);
	}

	return 0;
}

void newProject(char*address,char*dirBase){
	char project[200],dir[200];
	strcpy(project,address);
	strcpy(dir,address);
	strcat(dir,"/src/main/Main.java");
	dirMain(project);
	fileMain(project,dir);
	make(project,dirBase);
}

void dirMain(char*address){
	char file[200];
	mkdir(address);
	strcpy(file,address);
	strcat(file,"/src");
	mkdir(file);
	strcat(file,"/main");
	mkdir(file);
}

void fileMain(char*address,char*file){
	FILE*Main;
	char code[] = code_java;
	Main = fopen(file,"w");
	fwrite(code,1,(sizeof code)-2,Main);
	fclose(Main);
}

void make(char*project,char*dirBase){
	char dir[100];
	strcpy(dir,dirBase);
	char*last = strrchr(dir,'\\');
	if(last!= NULL) *last='\0';

	FILE*copy,*paste;
	char address[200];
	strcpy(address,project);
	strcat(address,"/Makefile");
	strcat(dir,"/Makefile");
	copy = fopen(dir,"rb");
	paste = fopen(address,"wb");

	char file[makefile];
	for(int i=0; i<makefile; i++) file[i]=0x0A;
	fread(file,makefile,1,copy);
	fwrite(file,makefile,1,paste);

	fclose(copy);
	fclose(paste);
}

int comp(char*txt1,char*txt2){
	char t1=txt1[0];
	char t2=txt2[0];
	int i=0;
	while(t1!='\0' || t2!='\0'){
		if(t1!=t2) return 0;
		i++;
		t1=txt1[i];
		t2=txt2[i];
	}
	return 1;	
}
