//37reverse_num.c
#include<stdio.h>
int main()
{
	int number =1234,rem,res=0; // 4321
	
	while(number !=0) //0 != 0
	{
		rem =number%10; // 1%10 =1
		res = res*10+rem; // res= 32*10 +1
		number = number/10; // 1/10=0
	} // 4321
	printf("reverse num=%i\n",res);
	printf("rem= %i num = %d",rem,number);
	
	return 0;	
}