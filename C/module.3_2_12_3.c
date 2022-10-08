//3.pattern: *
//		    ***
// 		   *****
//        *******
//       *********


#include <stdio.h>

int main()
{
	int x,y,z;
	for (x=0;x<=4;x++)
	{
		for(y=0;y<=4-x-1;y++)
		{
			printf(" ");
		}
		for(z=0;z<2*x+1;z++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}