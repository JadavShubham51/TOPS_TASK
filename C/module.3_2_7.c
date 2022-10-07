//7.WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3;
	int number;
	
	printf("enter any number:\n");
	scanf("%d",&number);
	
	printf("%i %i ",n1,n2);
	while(number>n3) // (n3<number)
	{
		n3=n1+n2;//2+3=5
		n1=n2;
		n2=n3;
		printf("%i ",n3);
	}
	return 0;
}