#include<stdio.h>
int main()
{
	
	int arr[] = {975,123,56,214,1},x;
	
	int max=arr[0];//975
	
	for(x=0;x<5;x++)//4;4<5;4++
	{
		if(max<arr[x])//975<975
		{
			max = arr[x];//214
		}	
		
	}
	
	printf("Max from an Array = %d ",max);
	
	
	return 0;
}