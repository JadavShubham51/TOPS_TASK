#include<stdio.h>

int main()
{
	
	int arr1[20],arr2[20],x; // int a, b;
	
	printf("Enter first Array elements:\n");// enter a
	for(x=0;x<3;x++)
	{
		scanf("%d",&arr1[x]);// 1  2  3 			// 12
	}
	
	printf("\nEnter second Array elements:\n");// enter b
	for(x=0;x<3;x++)
	{
		scanf("%d",&arr2[x]);// 2 3  4			//12
	}
	
	for(x=0;x<3;x++)
	{
		printf("sum=%d ",arr1[x]+arr2[x]);			//	printf("%d",a+b)
		
	}
	
	return 0;
}