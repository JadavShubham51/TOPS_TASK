//WAP to swap two numbers without using third variable 
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter any two number:\n");
	scanf("%i %i",&a,&b);
	printf("a=%i b=%i\n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("swap value is \na=%i\nb=%i",a,b);
	return 0;
}