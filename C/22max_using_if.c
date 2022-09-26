#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter fisrt value: \n");
	scanf("%i",&a);
	
	printf("Enter second value : \n");
	scanf("%i",&b);
	
	printf("a= %i \nb= %i \n",a,b);
	
	if(a>b)
	{
		printf("a is bigest...%i",a);
	}
	else
	{
		printf("b is bigest...%i",b);
	}
	return 0;
}