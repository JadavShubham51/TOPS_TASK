//7. input electricity unit charges and calculate total electicity bill according to the given condition:
//for first 50 unit Rs. 0.50/unit
//for next 100 unit RS. 0.75/unit
// for next 100 unit RS.1.20/unit
// for unit above 250 Rs. 1.50/unit
// an additional surcharge of 20% is added to the bill
#include<stdio.h>
int main()
{
	int unit;
	float total,sumcharge,total_bill;
	
	printf("Enter the unit :\n");
	scanf("%i",&unit);
	
	if(unit<=50)
	{
		total = unit * 0.50;
	}
	
	else if(unit<=150)
	{
		total = 25+(unit-50) * 0.75;
	}
	
	else if(unit<=250)
	{
		total = 100+(unit-150)*1.20;
		
	}
	
	else
	
	{
		total = 150+(unit-250)*1.50;
	}
	
	sumcharge = total * 0.20;
	
	total_bill = sumcharge + total;
	
	printf("Electricity_bill Rs.= %.2f",total_bill);
	
	return 0;
}