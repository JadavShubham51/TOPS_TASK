//77_2d_array_wid_functions.c

#include<stdio.h>
int getArrValues(int x[20][20])
{
	int r,c;
	printf("Enter your 2d arry:\n");
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			scanf("%d",&x[r][c]);
		}
	}
	
	for(r=0;r<3;r++)
	{
		for(c=0;c<3;c++)
		{
			printf("%d ",x[r][c]);
		}
		printf("\n");
	}
}

int main()
{
	int arr[20][20];

	
	getArrValues(arr);
	return 0;

}