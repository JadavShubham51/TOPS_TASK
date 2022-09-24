#include<stdio.h>
int main()
{
	int a=1;
	
	char res;
	
	res = (!a==1) ? 't' :'f';
	
	printf("%c",res);
	return 0;
}