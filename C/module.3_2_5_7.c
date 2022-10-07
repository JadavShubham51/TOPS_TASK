//7.WAP to print table up to given numbers
#include<stdio.h>
int main()
{
	int n,x;
	printf("Enter an integer number: ");
	scanf("%d",&n);
	
	for(x=1;x<=10;x++)
	{
		printf("%d * %d = %d \n",n,x,n*x);
	}
	return 0;
}