//47factors_of_a_num.c
#include<stdio.h>
int main()
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
	return 0;
}