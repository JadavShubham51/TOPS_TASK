//#11asscending order with array .c
#include<stdio.h>
int main()
{
	int num[20];
	int i,j,a,n;
	
	printf("Enter your number of array : \n");
	scanf("%d",&n);
	printf("enter the elemnets\n");
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(num[i]>num[j])
			{
				a=num[i];
				num[i]=num[j];
				num[j]= a;
			}
		}
	}
	printf("the number in ascending oreder is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}


////#11asscending order with array .c
//#include<stdio.h>
//int main()
//{
//	int num[5] = {55,44,335,553,23};
//	int i,j,a;
//	
//	for(i=0;i<5;i++)
//	{
//		for(j=i+1;j<5;j++)
//		{
//			if(num[i]>num[j])
//			{
//				a=num[i];
//				num[i]=num[j];
//				num[j]= a;
//			}
//		}
//	}
//	printf("the number in ascending oreder is:\n");
//	for(i=0;i<5;i++)
//	{
//		printf("%d\n",num[i]);
//	}
//	return 0;
//	
//}			                                                  
		                                                  