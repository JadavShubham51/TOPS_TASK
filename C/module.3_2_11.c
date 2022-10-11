// Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include<stdio.h>

int main()
{
    int n,sum,n1,n2;
    
    printf("enter any number:\n");// 234
    scanf("%d",&n);
    n1=n; //234
    
    while(n!=0) // 2!=0
    {
    	sum = n % 10; //0=0+4=4
    	if(n1==n || n/10==0) //234==234 
    	{
    		n2=n2+sum; 		
		}
    	n = n /10; 
	}
 
 	printf("sum digit total =%d",n2);
    
    return 0;
}