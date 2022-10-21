// 87string_length_without_strlen.c
#include<stdio.h>
int main()
{
	int i;
	char str[20] = "Manan Dabhi";// 7
	int length=0;
	
	//int arr[20]={1,2,3,4,5};
	
	
	printf("%d\n",sizeof(str));//
	
	//printf("%s",str);//Manan
	
//	for(i=0;str[i]!='\0';i++) // \0 ==> escape sequence ==> NULL value
//	{
//		printf("%c",str[i]);// manan
//	}
	
	printf("%c",'m');

	for(i=0;str[i]!='\0';i++) // manan
	{
		length++;//5
	}
	
	printf("string length  = %d",length);
	
	return 0;
}