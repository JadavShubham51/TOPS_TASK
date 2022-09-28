//WAP to find simple interest 
#include<stdio.h>
int main()
{
	float p,t,r,simple_interest;
	
	printf("Enter your three value\n",p,t,r);
	scanf("%f %f %f",&p,&t,&r);
	
	printf("p=%.f t=%.f r=%.f\n",p,t,r);
	
	simple_interest= (p+t+r)/100;
	
	printf("simple_interest=%.2f",simple_interest);
	return 0;
}