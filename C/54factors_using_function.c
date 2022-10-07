//55factors_using_function.c
#include<stdio.h>
int factors()
{
	int num,n;
	
	printf("Enter any number:\n");
	scanf("%d",&num);
	
	for(n=1;n<=num;n++)
	{
		if(num%n==0)
		{
			printf("%d ",n);
		}
	}
}

int main()
{
	factors();
	factors();
	return 0;
}