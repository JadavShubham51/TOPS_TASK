#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter first number: ");
	scanf("%i",&a);
	
	printf("Enter second number :");
	scanf("%i",&b);
	
	printf("a= %i\nb =%i",a,b);
	
	printf("\nlargest number = %i",(a>b) ? a : b);
	
	return 0;
}