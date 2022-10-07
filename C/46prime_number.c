//46prime_number.c
#include<stdio.h>
int main()
{
	int num,xyz=0; // 13
	int n;
	
	printf("enter any number:\n ");
	scanf("%d",&num);
	
	
	for(n=1;n<=num;n++)// 1;1<=5;1++//
	{
		if(num%n==0)// 5/5 = 0
		{
			xyz++;
		}
	}
	if(xyz==2)
	{
		printf("Prime...number!=%d",num);
	}
	
	else
	{
		printf("Not Prime...number!=%d",num);
	}
	
	
	return 0;
	
}