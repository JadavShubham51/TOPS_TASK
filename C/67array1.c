//67array1.c
#include<stdio.h>
int main()
{
	// int a[7]= {12,3,4,5,67,-45};
	int a[]= {12,3,4,5,67,-45};
	int index;
	
	printf("a[2] = %d\n",a[2]);
	
	for(index=0;index<7;index++)
	{
		printf("%d ",a[index]);
	}
	return 0;
}