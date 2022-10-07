//36do_while.c
/*
intialization;
do
{
	..code;
	inc/dec;
}while(condition);
*/

#include<stdio.h>
int main()
{
	int x;
		x=10;
		do
		{
			printf("%d\n",x);
			x--;
		}while(x>=1); // (x>=1); this condition is flase but printf statment frist to printf girst output...
	return 0;
}