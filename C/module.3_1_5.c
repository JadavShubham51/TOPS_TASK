// WAP to check if the given year is a leap year or not.

#include<stdio.h>
int main()
{
	int year;
	
	printf("Enter your year numer:\n");
	scanf("%i",&year);
	
	if(year%400 ==0)
	{
		printf("%i is not a leap year.",year);
	}
	else if(year%100 ==0)
	{
		printf("%i is not a leap year.",year);
	}
	else if(year%4 == 0)
	{
		printf("%i is a leap year.",year);
	}
	else
	{
		printf("%i is not a leap year.",year);	
	}
	return 0;
}