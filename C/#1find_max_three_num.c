//find maximum between three number
#include<stdio.h>
int main()
{
	int num1,num2,num3;
	
	printf("Enter your first number:\n");
	scanf("%i",&num1);
	
	printf("Enter your second number:\n");
	scanf("%i",&num2);
	
	printf("Enter your third number:\n");
	scanf("%i",&num3);
	
	printf("num1=%i\nnum2=%i\nnum3=%i\n",num1,num2,num3);
	
	if(num1>num2 && num1>num3)
	{
		printf("num1 is bigest");
		
	}
	else if(num2>num3)
	{
		printf("num2 is bigest");
	}
	else
	{
		printf("num3 is bigest");
	}
	return 0;
}