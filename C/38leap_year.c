//38leap_year.c
#include<stdio.h>
int main()
{
	int start_year,end_year,leapyear;
	
	printf("enter start year:");
	scanf("%i",&start_year);
	printf("enter end year:");
	scanf("%i",&end_year);
	
	for(leapyear=start_year;leapyear<=end_year;leapyear++)
	{
		if(leapyear%4==0)
		{
			printf("%i\n",leapyear);
		}
		else
		{
			printf("it's not leap year between thi year'%i\n",leapyear);
		}
	}
	return 0;
}