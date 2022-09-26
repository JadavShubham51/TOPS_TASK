//program to input month number and print number of days in that month.
#include<stdio.h>
int main()
{
	int month;
	
	printf("Enter the month number:\n");
	scanf("%i",&month);
	
	if(month>=1 && month<=12)
	{
		printf("month is this=%i\n",month);
	}
	
	if(month==2)
	{
		printf("this month is 28 or 29 day");
		
	}
	else if(month==4 || month==6 || month==8 || month==10 || month==12)
	{
		printf("this month is 30 day");
	}
	else if(month==1 || month==3 || month==5 || month==7 || month==9 || month==11)
	{
		printf("this month is 31 day");
	}
	return 0;
}
