//77_1d_array_wid_functions.c

#include<stdio.h>
int getArrValues(int x[20])
{
	int index;
	for(index=0;index<3;index++)
	{
		printf("%d ",x[index]);
	}
}

int Getvalue(int number)
{
	printf("%d",number);
}

int main()
{
	int arr[20]={1,245,7};
	int num=12;
	
	getArrValues(arr);
	
	printf("\nnumber print\n");
	Getvalue(num);
	return 0;
}