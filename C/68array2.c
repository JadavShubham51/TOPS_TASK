#include<stdio.h>
int main()
{
	int number[] = {45,22,64,76,23,44};
	int size,key;
	
//	printf("%d\n",sizeof(number[3])); // paticluar int number 4 bit
	
//	printf("%d",sizeof(number)); // total int number 24 bit
	
	size = sizeof(number)/sizeof(number[0]); //  24/4
	
	for(key=0;key<size;key++)
	{
		printf("%d ",number[key]);
	}
	return 0;
}