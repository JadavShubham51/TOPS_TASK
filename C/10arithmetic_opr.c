#include<stdio.h>
int main()
{
	int  n1,n2;
	
	printf("enter two int number: \n");
	
	scanf("%i %i",&n1,&n2);
	printf("%i \n", n1+n2);
	
	printf("n1=%i + n2=%i sum=%i\n",n1,n2,n1+n2);
	printf("n1%i + n2%i sub =%i \n",n1,n2,n1-n2);
	printf("n1%i + n2%i  mul =%i \n",n1,n2,n1*n2);
	printf("n1%i + n2%i division =%i \n",n1,n2,n1/n2);
	printf("n1%i + n2%i  mod =%i \n",n1,n2,n1%n2);
	
	return 0;
}