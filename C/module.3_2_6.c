//3.2.6 WAP to print factorial of given number
#include<stdio.h>
int main()
{
	int num,n;
	
	printf("Enter any number:");
	scanf("%d",&num);
	
	for(n=1;n<=num;n++)
	{
		if(num%n==0)
		{
			printf("%d ",n);
		}	
	}	
	return 0;
}
