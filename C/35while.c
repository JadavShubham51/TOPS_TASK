//35While.c
/*
intialization;// x=1

while(condition)// x<=5
{
	...code; //x;
	inc/dec // x++;
}
*/
#include<stdio.h>
int main()
{
	int x;
	
	x=10;
	while(x>=1) //while(x<=1)==> this is flase condition
	{
		printf("%d\n",x);
		x--;
	}
	return 0;
}