//3.check whether a number is divisible by 5 and 11 or not
#include<stdio.h>
int main()
{
	int num;
	printf("enter any number: \n");
	scanf("%i",&num);
	
	if(num%11 == 0)
	{
		printf("divisiable by 11");
		
	}
	else if(num%5 == 0)
	{
		printf("divisiable by 5");
		
	}
	else
	{
		printf("not");
	}
	return 0;
}