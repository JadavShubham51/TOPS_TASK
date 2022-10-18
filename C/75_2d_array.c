//75_2d_array.c
#include<stdio.h>
int main()
{
	int a[3][3],r,c;
	printf("Enter your 2d array Element:\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&a[r][c]);
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",a[r][c]);
		}
		printf("\n");
	}
	
	return 0;
}