//WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
	int number;
	
	printf("enter any number:\n");
	scanf("%i",&number);
	
	(number % 2 == 0) ? (printf("%i is Even number\n",number)) : (printf("%i id Odd number\n",number));
	
	return 0;
}