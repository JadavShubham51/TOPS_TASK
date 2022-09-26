//check the uppercase and lower case
#include<stdio.h>
int main()
{
	char alphabet;
	
	printf("enter the alphabet :\n");
	scanf("%c",&alphabet);
	
	if(alphabet>='A' && alphabet<='Z')
	{
		printf("alphabet is uppercase...");
	}
	else if(alphabet>='a' && alphabet<='z')
	{
		printf("alphabet is lowercase...");
	}
	else
	{
		printf("alphabet is not ");	
	}
	return 0;
}