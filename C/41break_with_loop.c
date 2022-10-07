//41breaj_with_loop.
#include<stdio.h>
int main()
{
	int x;
	
	for (x=1;x<=10;x++)
	{
		if(x>=6)
//		if(x!=6)
		{
			break;
		}
		
		printf("%i\n",x);
	}
	return 0;
}