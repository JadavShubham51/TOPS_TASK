//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>

int main()
{
    int n,sum;
    
    printf("enter any number:\n");// 234
    scanf("%d",&n);
    
    while(n!=0) // 2!=0
    {
    	sum = sum + n % 10; 
    	n = n /10; 
	}
 
 	printf("sum digit total =%d",sum);
    
    return 0;
}