// program to input basic salary of an employee and calculates its gross salary according to following:
//basic salary<= 10000 : HRA = 20% DA=80%
//basic salary<= 20000 : HRA = 25% DA=90%
//basic salary<= 20000 : HRA = 23% DA=95%
// gross_salary = basic salary + HRA + DA  
// HRA = basic salary * ( 20/100)
// DA = basic salary * (80 /100)
#include<stdio.h>
int main()
{
	float basic_salary,HRA,DA,gross_salary;
	
	printf("Enter the basic salary of the Employee:\n");
	scanf("%f",&basic_salary);
	
	printf("basic_salary=%.f\n",basic_salary);

	// basic salary<=10000 : hra =20% da=80%
	if(basic_salary <= 10000)
	{
		HRA = basic_salary*0.2;
		DA = basic_salary*0.8;
	}
	//basic salary<= 20000 : HRA = 25% DA=90%
	else if(basic_salary <= 20000)
	{
		HRA =basic_salary*0.25;
		DA =basic_salary*0.9;
	}
	//basic salary<= 20000 : HRA = 23% DA=95%
	else
	{
		HRA = basic_salary*0.23;
		DA = basic_salary*0.95;
	}
	
	gross_salary = basic_salary+HRA+DA;
	
	printf("gross_salary is = %.2f",gross_salary);
	
	return 0;
}