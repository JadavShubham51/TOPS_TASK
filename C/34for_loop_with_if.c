//32for_loop_with_if.c
#include<stdio.h>
int main()
{
	int x,y=1;
	for(x=1;x<=10;x++)
	{
		if(x%2!=0)
		{
			printf("odd number =%i\n",x);
		}
	}
	return 0;
}