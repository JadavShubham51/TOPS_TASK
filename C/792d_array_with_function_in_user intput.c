//79function_with_2d_arr.c

#include<stdio.h>
int getarrvalues(int x[2][2])
{
	int r,c;
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			scanf("%d",&x[r][c]);
		}
	}
	
	for(r=0;r<2;r++)
	{
		for(c=0;c<2;c++)
		{
			printf("%d ",x[r][c]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[2][2];
	
	getarrvalues(arr);
	return 0;
}