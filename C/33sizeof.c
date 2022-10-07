//33sizeof.c
#include<stdio.h>
int main()
{
//	int ==> 4 bytes
//	float ==> 4bytes
//	char ==> 1 bytes
//	double ==> 8bytes

//	sizeof(int);
	int a= 5;
	char ab= 6;
	printf("%i\n",sizeof(a));
	printf("%i",sizeof(ab));
	
	return 0;


}