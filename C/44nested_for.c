//44nested_for.c
#include<stdio.h>
int main()
{
	int row,col;
	
	for(row=1;row<=3;row++) // this loop is for ROWs
	{
		//2<=3
		for(col=1;col<=3;col++) // thid loop is for columns
		{
			printf("* "); // * * *
			
		}
	printf("\n");		
	}
	return 0;
}