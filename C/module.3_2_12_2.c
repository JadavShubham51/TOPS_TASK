//2.pattern:A
//			B C
//			D E F
//			G H I J
//			K L M N O
#include<stdio.h>
int main()
{
	int r,c;
	char x ='A';
	for(r=1;r<=5;r++)
	{
		for(c=1;c<=r;c++)
		{
			printf("%c ",x++);
		}
		printf("\n");
	}
	return 0;
}