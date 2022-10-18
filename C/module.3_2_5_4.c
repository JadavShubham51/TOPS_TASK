//4.How many odd numbers are there
#include<stdio.h>
int main()
{
	int i,total_odd,j=0;
	
	
	for(i=0;i<=10;i++)
	{
		if(i%2!=0)
		{
			total_odd = printf("odd number =%i\n",i);
			j++
		}
	
	}
	printf("total_odd number=%i",j);
	return 0;
}
