//56storage_classes.c

//1. auto (default)
//2. register (for faster memory access)
//3. extern (Global)
//4. static

// extern int x=24; // global scope

#include<stdio.h>
void main()
{
	auto int x=23;
	
//	register int x=32;
	
	printf("%d",x);
}