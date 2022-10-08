//5.Patterns:A
//		   	 A B
//		   	 A B C
//		     A B C D
//		     A B C D E

#include<stdio.h>
int main()
{
	int x,y;
	char z= 'A';
	for(x=1;x<=5;x++) //
	{
		for(y=1;y<=x;y++) 
		{
			printf("%c",'A'+y-1); // first A print than ++ to B than C many more
		}
		printf("\n");
	}
	return 0;
}