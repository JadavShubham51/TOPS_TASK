#include<stdio.h>

int getSum()
{
	int a[] = {2,1,4,6,1},x,sum=0;
	
	for(x=0;x<5;x++)
	{
		sum = sum+a[x];//13+1
		//sum=14
	}
	return sum;
	//printf("%d ",sum);
}


int main()
{
	printf("%d ",getSum());
	
	return 0;
}