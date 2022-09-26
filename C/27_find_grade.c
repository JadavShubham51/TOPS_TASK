#include<stdio.h>
int main()
{
	int phy,chem,math;
	
	float percentage,total;
	
	printf("enter marks of physics : \n");
	scanf("%i",&phy);
	
	printf("enter marks of chemistry : \n");
	scanf("%i",&chem);
	
	printf("enter marks of maths : \n");
	scanf("%i",&math);
	
	printf("physics = %i\nchemistry = %i\nmaths = %i",phy,chem,math);
	total = phy+chem+math;
	printf("\n\nTotal marks=%.f",total);
	
	percentage = total/3;
	
	printf("\n\npercentage = %.2f\n",percentage);
	
	if(percentage>=90)
	{
		printf("your grade is A...");
	}
	else if(percentage<=90 && percentage>=80)
	{
		printf("your grade is B...");
	}
	else if(percentage<=80 && percentage>=60)
	{
		printf("your grade is c...");
	}
	else{
		printf("your grade is d..");
	}
	return 0;
}