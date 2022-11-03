/* 92pointer.c
Pointer:
	==> used to access memory address as well as the value of that address
	
	& => to get memory address
	* => to get values of particular address
	
	Syntax:
	
	datatype *var-name,**var-name1;
	
	*/
	
	#include<stdio.h>
	int main()
	{
		int a=12,*p,**q;
		
		p=&a; // address of a
		q=&p;
		
		printf("\na = 12\np = &a\nq =&p\n\n");
		
		printf("p = %d\n",p);// address of a
		printf("*p = %d\n",*p);// 12
		
		printf("q = %d\n",q);// address of p
		printf("*q = %d\n",*q);// address of a
		
		printf("value of **q  = %d\n",**q);// 12
		
		
		return 0;
	}