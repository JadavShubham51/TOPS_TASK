//Write a program to make Simple calculator (to make addition, subtraction, 
//multiplication, division and modulo)

#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter your numb1:");
	scanf("%i",&num1);
	
	printf("numb1 = %i\n",num1);
	
	printf("Enter your numb2:");
	scanf("%i",&num2);
	
	printf("numb1 = %i\n",num2);

	printf("total of adition=%i\n",num1+num2);
	printf("total of subtraction=%i\n",num1-num2);
	printf("total of multiplication=%i\n",num1*num2);
	printf("total of division=%i\n",num1/num2);
	printf("total of modulo=%i",num1%num2);
	return 0;
}