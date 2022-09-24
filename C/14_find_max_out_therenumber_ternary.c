#include<stdio.h>
int main()
{
	int a,b,c,max;
	
	printf("Enter the first number :");
	scanf("%i",&a);
	
	printf("Enter the second number :");
	scanf("%i",&b);
	
	printf("Enter the third number :");
	scanf("%i",&c);
	
	printf ("a=%i \n b=%i \n c=%i",a,b,c);
	
	max = (a>b) ? (a>c) ? a : c : (b>c) ? b : c;
	
	printf("\n max number =%i",max);
	
	return 0;
}