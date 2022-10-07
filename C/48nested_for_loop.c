//48nested_for_loop.c
#include<stdio.h>
int main()
{
	int row,col;
	
	for(row=4;row>=1;row--)
	{
		for(col=1;col<=row;col++)
		{
			printf(" ");
		}
		for(col=row;col<=4;col++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}