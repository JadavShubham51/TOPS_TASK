//nested_if.c
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	
	printf("Enter first number:\n");
	scanf("%i",&num1);
	
	printf("Enter second number:\n");
	scanf("%i",&num2);
	
	printf("Enter third number:\n");
	scanf("%i",&num3);
	
	if(num1>num2)
	{
		if(num1>num3)
		{
			printf("num1 is lagest=%i",num1);
		}
		else
		{
			printf("num3 is largest=%i",num3);
		}
	}
	
	else if(num2>num3)
	{
		printf("num2 is largest=%i",num2);
	}
	else
	{
		printf("num3 is largest=%i",num3);
	}
	return 0;
}