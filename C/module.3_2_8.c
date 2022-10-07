//8.WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746 
#include<stdio.h>
int main()
{
	int number=64728,rem,res=0; // 64728
	printf("main number=%d\n",number);
	while(number!=0) //0 != 0
	{
		rem =number%10; // 1%10 =1
		res = res*10+rem; // res= 32*10 +1
		number = number/10; // 1/10=0
	} // 82746
	
	printf("reverse num=%i\n",res);
//	printf("rem= %i num = %d",rem,number);
	
	return 0;	
}
