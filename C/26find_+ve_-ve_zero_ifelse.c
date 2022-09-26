#include<stdio.h>
int main()
{
	int num;
	printf("enter the number: \n");
	scanf("%i",&num);
	
	if(num>0)
	{
		printf("+ve number...");
	}
	else if(num==0)
	{
		printf("ZERO numer...");
	}
	else
	{
		printf("-ve number...");	
	}
	return 0;
}