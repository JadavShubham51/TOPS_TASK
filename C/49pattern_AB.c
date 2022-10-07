//49pattern_AB.c
#include<stdio.h>
int main()
{
	int r,c;
	for (r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			if(r%2==0) 
			{
				printf("B "); // even
				
			}
			else
			{
				printf("A "); // odd
			}
		}
		printf("\n");
	}
	return 0;
}