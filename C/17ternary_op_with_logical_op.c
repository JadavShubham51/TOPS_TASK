#include<stdio.h>
int main()
{
	int a,b,c,max;
	
	printf("enter first number :");
	scanf("%i",&a);
	
	printf("enter second number :");
	scanf("%i",&b);
	
	printf("enter third number :");
	scanf("%i",&c);
	
	printf("a=%i \n b=%i \n c=%i",a,b,c);
	
	max = (a>b && a>c) ? a : (b>c) ? b:c;
	
	printf("\n max= %i",max);
	return 0;
}