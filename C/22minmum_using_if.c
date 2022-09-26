#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter fisrt value: \n");
	scanf("%i",&a);
	
	printf("Enter second value : \n");
	scanf("%i",&b);
	
	printf("a= %i \nb= %i \n",a,b);
	
	if(a<b)
	{
		printf("a is lowest...%i",a);
	}
	else
	{
		printf("b is lowest...%i",b);
	}
	return 0;
}