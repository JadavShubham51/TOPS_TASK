//60function_with_parameter1.c
#include<stdio.h>

float test(float x,char y, int z)
{
	char value=y;
	
	printf("y = %d\n",value);
	return x+y+z;
}

int main()
{
	printf("%f",test(23.335,'t',45));
	return 0;
}