//84strcpy.c
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20]="hi",str2[20];
	
	strcpy(str2,str1); // accepts two parameters
	
	printf("%s",str2);
	
	return 0;
}