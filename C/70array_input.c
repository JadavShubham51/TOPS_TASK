#include<stdio.h>
int main()
{
	
	int arr[500],a;
	
	printf("enter 10 element in array:\n");
	for(a=0;a<10;a++)
	{
		scanf("%d",&arr[a]);	
	}
		
	for(a=0;a<10;a++)
	{
		printf("%d ",arr[a]);	
	}
	
	return 0;
}