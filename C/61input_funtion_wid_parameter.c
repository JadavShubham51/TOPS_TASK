//61input_function_wid_parameter.c

#include<stdio.h>
int GetValue(int x)
{
	printf("x = %d",x);
}

int findMax(int a,int b,int c)
{
	printf("max = %d",(a>b && a>c) ? a : (b>c) ? b : c);
}
int main()
{
	int n1,num1,num2,num3;
	printf("\nenter n1 value:\n");
	scanf("%d",&n1);
	GetValue(n1);
	
	printf("\nenter three value:\n");
	
	printf("\nEnter value of a:");
	scanf("%d",&num1);
	
	printf("\nEnter value of b:");
	scanf("%d",&num2);
	
	printf("\nEnter value of c:");
	scanf("%d",&num3);
	
	findMax(num1,num2,num3);
	
	return 0;
}