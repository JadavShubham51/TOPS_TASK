//62pattern_using_function.c
#include<stdio.h>
int pattern(int s,int e)
{
	int r,c;
	
	for(r=s;r<e;r++)
	{
		for(c=s;c<e;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
int main()
{
	int start,end;
	printf("start value:\n");
	scanf("%d",&start); //1
	printf("end value:\n");
	scanf("%d",&end); //4
	pattern(start,end);
	return 0;
}