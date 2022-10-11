//58return_keyword.c
#include<stdio.h>

//void: function doesn't return any value

int GetValue(int n1)
{
	
	//printf("%d",n1);
	
	return n1; //23 value is returned
}
int main()
{ 
	printf("%d",GetValue(23));
	return 0;
}