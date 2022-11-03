//96file_handling.c
/*
File Handling:

Syntax :

	FILE *varName;
	
	to open a file => fopen(filename)
	to colse a file => fclose(filename)
	
	To create, write into and read from a file 
	
	Modes:
		1. write (w,w+)
		2. read (r,r+)
		3. append (a,a+)
	
	=> Create
	
	fopen("path(location)/filename.type","modes");
	=> Write
	=> Read
	
	To write into FILE:
	
	fprintf(fileName,format-specifier,varname);
	
	To read from a file:
	
	fscanf(fileName,format-specifier,&varname);
	
*/
#include<stdio.h>
int main()
{
	FILE *file1;
	char data[100];
	
	file1 =fopen("D:/TOPS TECHNOLOGIY/sh.txt","a");
	scanf("%s",&data);
	
	fprintf(file1,"%s",data);
	
	fclose(file1);
	
	FILE *file2;
	
	file2 = fopen("D:/TOPS TECHNOLOGIY/sh.txt","r");
	
	fscanf(file2,"%s",&data);
	printf("%s",data);
	
}