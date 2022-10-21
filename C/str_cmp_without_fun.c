#include<stdio.h>
int main()
{
	int i;
	char str1[20] = "shubham";// 7
	char str2[20]= "shubham";
	int n=0;
	//int arr[20]={1,2,3,4,5};
//	printf("%d\n",sizeof(str));//
	
	//printf("%s",str);//Manan
	
//	for(i=0;str[i]!='\0';i++) // \0 ==> escape sequence ==> NULL value
//	{
//		printf("%c",str[i]);// manan
////	}
//	printf("%c",'m');
    n=0;
	for(i=0;str1[i]!='\0';i++) // manan
	{
		if(str1[i]==str2[i])
		{
//		 printf("%c ",str1[i]);	
//		 printf("%c ",str2[i]);
		}
		else
		{
			n++;
		}
	}
	if(n==0)
	{
		printf("equal");
	}
	else
	{
		printf("not equal");
	}
//	printf("string length  = %d",length);
	
	return 0;
}