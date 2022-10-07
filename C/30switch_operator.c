//30_switch_operator.c
#include<stdio.h>
int main()
{
	int num1,num2;
	char choice;
	
	printf("Enter your choice: \n");
	scanf("%c",&choice);
	
	printf("enter first number:\n");
	scanf("%i",&num1);
	printf("Enter second number:\n");
	scanf("%i",&num2);
	
		switch(choice)
			{
				case '+': printf("Addition of %i and  %i = %i",num1,num2,num1+num2);
				break;
				
				case '-': printf("subtration of %i and  %i = %i",num1,num2,num1-num2);
				break;
				
				case '*': printf("multification of %i and  %i = %i",num1,num2,num1*num2);
				break;
				
				case '/': printf("division of %i and  %i = %i",num1,num2,num1/num2);
				break;
			}
}