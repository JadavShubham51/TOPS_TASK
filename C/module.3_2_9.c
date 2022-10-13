// Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)

#include<stdio.h>
int main()
{	
	int n,sum,n1=0;
    
    printf("enter any number:\n");// 234
    scanf("%d",&n);
    //1532
    
    while(n!=0) //   1
    {
    	sum = n % 10; //
    	if(sum>n1) //1>5
    	{
    		n1=sum; 	
		}
    	n = n /10;  //1/10=0
	}
 
 	printf("Max digit number =%d",n1);
	return 0;
}