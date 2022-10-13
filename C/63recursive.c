
//63recursive.c

/*Recursive Function :
	===> function calls itself
	
	note:-
	1) it will call itself based on given condition
	2) works for function with parameter.
	
	syntax:-
		datatype functionName()
		{
			code....;
			functionName();
		}
		main()
		{
			functionName();
		}
*/

#include<stdio.h>
int recurse(int x) // 0
{
	if(x>=1)
	{
		printf("hello\n");
		recurse(x-1);
	}
}

int main()
{
	recurse(5);
	return 0;
	
}








	