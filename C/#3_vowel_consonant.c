// program to input any alphanbet and check whether it is vowel or consonant
#include<stdio.h>
int main()
{
	char alphabet;
	
	printf("enter your alphabet:\n");
	scanf("%c",&alphabet);
	
	printf("alphanet=%c\n",alphabet);
	
	if(alphabet== 'a'|| alphabet=='e' || alphabet== 'i' || alphabet=='o' || alphabet=='u')
	{ 
		printf("it's alphabet is vowel=%c",alphabet);
	}
	else if(alphabet=='A'|| alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U')
	{
		printf("it's alphabet is vomel=%c",alphabet);
		
	}
	else
	{
		printf ("alphabet is consonant");
	}
	
	return 0;
}