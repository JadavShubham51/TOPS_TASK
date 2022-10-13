//65recursive_function_with_return.c
#include<stdio.h>
int getsum(int x)
{
	if(x>1)
	{
		return x* getsum(x-1);
	}
}

int main()
{
	printf("%d",getsum(5));
	return 0;
}