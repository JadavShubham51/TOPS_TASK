#include<stdio.h>
int main()
{
	int atmpin=1234;
	int somevalue;
	
	printf("Enter your pin: ");
	scanf ("%i",&somevalue);
	
	if(atmpin==somevalue)
	{
		printf("welcome user...!");
	}
	else
	{
		printf("invalid pin..!");
	}
	return 0;
}