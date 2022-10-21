//80string.c
//string = char array which can store more than one letters in a single variable.

//Format Specifier fir string is %s
#include<stdio.h>
int main()
{
	
	char name[20] = "shubham jadav";
	
	printf("%c",name[4]); // char one find karega
	
	printf("\n%s",name); // stirng all find %s
	
	return 0;
		
}
