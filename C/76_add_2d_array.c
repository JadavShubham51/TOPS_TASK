//76_add_2d_array.c
#include<stdio.h>
int main()
{
	int a[2][2],b[2][2],r,c,sum[2][2];
	
	printf("\nEnter your first array element:\n");
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	
	printf("\nfirst array:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%d ",a[r][c]);
		}
		printf("\n");
	}
	
	printf("\nEnter your second array element:\n");
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&b[r][c]);
		}
	}
	
	printf("\nsecond array:\n");
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%d ",b[r][c]);
		}
		printf("\n");
	}
	
	printf("\nSum of 2d array elements:\n");
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			sum[r][c]=a[r][c] + b[r][c];
			printf("%d ",sum[r][c]);
		}
		printf("\n");
	}
	return 0;
}
