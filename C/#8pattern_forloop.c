//full pyramid 
#include<stdio.h>
int main()
{
	int r,c;
	for(r= 1; r<=5; r++)
	{
		for(c=1; c<=5-r; c++)
		{
		printf(" ");
		}
		
		for(c=r; c<2*r; c++)
		{
			printf("* ");
		
		}
		
	printf("\n");	
	}
	return 0;
}