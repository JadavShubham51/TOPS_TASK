//56static_keyword.c
#include<stdio.h>
void StaticKeyword()
{
	int x=1;
	int static y=1;
	
	printf("x= %d y= %d\n",x,y);
	x++; // x is value is defulat
	y++; // y is value is static its change value every time
	
}

int main()
{
	StaticKeyword();
	StaticKeyword();
	StaticKeyword();
	return 2221;
	return 0;
}