#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter any integer number :\n");
	scanf("%d",&num);
	
	printf("%i",num);
	
	if(num%2 == 0)
	{
		printf("nnumber is EVEN...");
	}
	else{
		printf("number is ODD...");
	}
	return 0;
}