#include<stdio.h>
int main()
{
	
	int arr[] = {975,123,235,214,1},x;	
	int max=arr[0];	
	int second_max =arr[0];
	
	for(x=0;x<5;x++)
	{
		if(max<arr[x])
		{
			max = arr[x];//975
		}	
		
	}
	
	printf("Max from an Array = %d\n ",max);
	
//	arr[] = {975,123,56,214,1}
	for(x=1;x<5;x++)
	{
		if(second_max<arr[x] && max>arr[x] || second_max==max) //975<235 && 975>235 || 975==235
		{
			
			second_max = arr[x];//975
		}	
		
	}
	
	
	printf("Second Max from an Array = %d ",second_max);	
	return 0;
}