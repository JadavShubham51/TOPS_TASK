//3.How many Even numbers are there
#include<stdio.h>
int main()
{
	int i,total_even;

	
	for(i=0;i<=10;i++)
	{
		if(i%2==0)
		{
			total_even = printf("Even number =%i\n",i);
		}
	
	}
	printf("total_even=%i",total_even);
	return 0;
}
