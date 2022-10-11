//59add_numbers_with_param.c
#include<stdio.h>

int addNums(int x,int y)
{
//	printf("%d",x+y);
	return x+y;
//	return y,x; there cant be two return statements in functions
}

int main()
{
	printf("%d",addNums(20,30));
	return 0;
}