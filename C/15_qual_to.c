#include<stdio.h>
int main()
{
	int a=1,b=1; // a==b;
	char c='1';
	// == : it will check just the values 
	// === : it will check values along with data-type
	
	char res;
	
	res = (a==b) ? 't' : 'f';
	
//	res = (a===b) ? 't' : 'f';

	printf("%c",res);
	return 0;
}