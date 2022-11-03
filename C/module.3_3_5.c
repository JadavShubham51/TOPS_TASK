//
#include<stdio.h>
int main()
{
	int num[20];
	int i,j,a,n;
	char ch;

			
	printf("Enter your number of array : \n");
	scanf("%d",&n);
	printf("enter the elemnets\n");
	for(i=0;i<n;i++)
	scanf("%d",&num[i]);
	printf("Enter your ascending / descending A/D:");
	scanf(" %c",&ch);
	
	if(ch=='a' || ch=='A')
	{
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
	}
	
	else if(ch=='d' || ch=='D')
	{
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(num[i]<num[j])
				{
					a=num[i];
					num[i]=num[j];
					num[j]= a;
				}
			}
		}
		printf("the number in descending oreder is:\n");
		for(i=0;i<n;i++)
		{
			printf("%d\n",num[i]);
		}
	}
	return 0;
}