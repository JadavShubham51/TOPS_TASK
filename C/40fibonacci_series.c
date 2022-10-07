// 0 1 1 2 3 5 8 = 0+1=1, 1+1=2, 2+1=3, 3+2=5, 5+3=8
//this is a fibonacci_series.c

#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3;
	int number=9;
	printf("%i %i ",n1,n2);
	while(number>n3) // (n3<number)
	{
		n3=n1+n2;//2+3=5
		n1=n2;
		n2=n3;
		printf("%i ",n3);
	}
	return 0;
}