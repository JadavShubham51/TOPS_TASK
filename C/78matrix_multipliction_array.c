//78matrix_multiplication.c

#include<stdio.h>
int main()
{
	int arr1[3][3] , arr2[3][3], row,col,x,mul[3][3];
	
	printf("\nEnter First array elements:\n");
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			scanf("%d",&arr1[row][col]);
		}
	}
	
	printf("\nFirst array elements:\n");
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",arr1[row][col]);
		}
		printf("\n");
	}
	
	printf("\nEnter second array elements:\n");
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			scanf("%d",&arr2[row][col]);
		}
	}
	
	printf("\nSecond array elements:\n");
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",arr2[row][col]);
		}
		printf("\n");
	}
	
	printf("\n\nMatrix multiplication:\n");
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
		
			mul[row][col]=0;
			for(x=0;x<3;x++)
			{
				mul[row][col]=mul[row][col] + arr1[row][x] * arr2[x][col];
			}
		}
		printf("\n");
	}
	
	for(row=0;row<3;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",mul[row][col]);
		}
		
		printf("\n");
	}
	
	
	return 0;
	
}