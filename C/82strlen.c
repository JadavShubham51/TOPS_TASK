//82strlen.c
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20] = "Shubham";
	
	
	//	strlen(str);// 7
		
		printf("Size of string \"Shubham\"  = %d\n",strlen(str));//7 printf me "\"shubham\" ==> its s double to use becuse not user "" time"
		
		printf("String in uppercase = %s",strupr(str));// SHUBHAM
		
		printf("\nString in lowercase = %s",strlwr(str));//shubham
		
		
		printf("\nreverse string = %s",strrev(str));//mahbuhs
		
	return 0;
}