#include<stdio.h>
int main()
{
	int a =20;
	int b = 30;
	
	printf("%i\n",a); // 20
	printf("%i\n",a++); //20
	printf("%i\n",++a); //22
	printf("%i\n",a++); //22
	printf("%i\n",++a); //24
	printf("%i\n",a++); //24
	printf("%i\n",++a); //26
	
	printf("decrment\n");
	printf("%i\n",--b); //29
	printf("%i\n",--b); //28
	printf("%i\n",b--); //28
	printf("%i\n",++b); //28
	printf("%i\n",b++); //28
	printf("%i\n",--b); //28
	printf("%i\n",--b); //27
	return 0;
}