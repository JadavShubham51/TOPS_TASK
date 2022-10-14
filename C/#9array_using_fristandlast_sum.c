#include <stdio.h>

int main()
{
	int arr[] = {23,5,31,2,5},x;
	int first,last;
	int sum;
	
	first = arr[0];
	last = arr[4];
	sum = first + last;
	printf("sum of first and last number is:%d",sum);
	return 0;
}

