//1.Patterns:1
//		   	 1 0
//		   	 1 0 1
//		     1 0 1 0
//		     1 0 1 0 1

#include<stdio.h>
int main()
{
	int x,y;
	for(x=1;x<=5;x++)
	{
		for(y=1;y<=x;y++)
		{
			if(y%2==1)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
	return 0;
}

		   