//3.How many Even numbers are there
#include<stdio.h>
int main()
{
	int i,total_even,j=0;

	
	for(i=0;i<=10;i++)
	{
		if(i%2==0)
		{
			total_even = printf("Even number =%i\n",i);
			j++
		}
	
	}
	printf("total even number=%i",j);
	return 0;
}
