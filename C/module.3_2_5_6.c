//6.Sum of odd numbers
#include<stdio.h>
int main()
{
	int i,odd_sum=0;
	for(i=0;i<=10;i++)
	{
		if(i%2!=0)
		{
			printf("odd number=%d\n",i);
			odd_sum=odd_sum + i;
		}
	}
	printf("odd_sum=%d",odd_sum);
	return 0;
}