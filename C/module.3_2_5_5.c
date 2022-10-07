//5.Sum of even numbers
#include<stdio.h>
int main()
{
	int i,even_sum=0;
	for(i=0;i<=10;i++)
	{
		if(i%2==0)
		{
			printf("Even number=%d\n",i);
			even_sum=even_sum + i;
		}
	}
	printf("even_sum=%d",even_sum);
	return 0;
}