#include<stdio.h>
int main()
{
	char value;
	
	printf("Enter any character : \n");
	scanf("%c",&value);
	
//	if(value>='a' && value<='z' )
	if(value>='a' && value<='z' || value>='A' && value<='Z')
	{
		printf("value is alphabet..");
	}
	
	else
	{
		printf("value is not alphabet");
	}
	return 0;	
}