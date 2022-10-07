//43go_to_statement.c
#include<stdio.h>
int main()

{
	//	intializaton;
	//	condition;
	//	inc/dec;
	
	int x;
	
	x=1;
	
	shubham:
	if(x<=10)
	{
		printf("%i\n",x); //10
		x++; // 10++ ===> 11
	}
	goto shubham;
	
	return 0;
}