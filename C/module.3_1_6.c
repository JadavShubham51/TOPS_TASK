//WAP to convert years into days and days into years
//1 Day = 0.00273973 Year 1 Year = 365 Day Formula to convert Year to Day. Day = Year * 365
#include<stdio.h>
int main()
{
	float no_of_day,no_of_year;
	
	printf("Enter your no_of_day :\n");
	scanf("%f",&no_of_day);
	
	printf("Enter your no_of_year :\n");
	scanf("%f",&no_of_year);
	
//	printf("no_of_day=%f\n",no_of_day);

	no_of_year=no_of_day/365;
	
	printf("no_of_year=%f\n",no_of_year);
	
	no_of_day = no_of_year*365;
	printf("no_of_year=%f\n",no_of_day);	
	return 0;
}