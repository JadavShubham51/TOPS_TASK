#include<stdio.h>
int main()
{
	int test[] = {12,34,56,78,8},size,x;
	
	
	size = sizeof(test)/sizeof(test[0]);// 20/4
	
	for(x=0;x<size;x++)// 0;0<5;0++
	{
		printf("%d ",test[x]);
	}
	
	
	return 0;
}