//39palindrome_num.c
#include<stdio.h>
int main()
{
	int number = 12321,rem,reverse_num=0; //321
	int n;
	n = number; // n=151
	while(n!=0) // 0!=0
	{
		rem = n%10; //1%10=1
		reverse_num = reverse_num*10+rem; // res = 32*10 +1
		n= n/10; // 1/10=0
	}
	
//	printf("%i\n",reverse_num);
//	printf("%i\n",number);
	
	if(reverse_num == number)
	{
		printf("palindrome num...!");
	}
	else
	{
		printf("not a palindrome num...!");	
	}
	
	return 0;
}