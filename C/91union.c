#include<stdio.h>

union Person // (total Size of  Union =20 bytes)

{
	int age; // 4 bytes
	char name[20]; // 20 bytes
	float salary; // 4 bytes
	
};
//91union.c
int main()
{
	union Person p; // int p;
	
	scanf("%d %s %f",&p.age,&p.name,&p.salary);
	printf("Age = %d\nName = %s\nSalary = %f",p.age,p.name,p.salary);

/*
	printf("enter your age: \n");
	scanf("%d",&p.age);
	printf("%d",p.age);
	
	printf("\nEnter your name:\n");
	scanf("%s",&p.name);
	printf("%s",p.name);
	
	printf("\nEnter your salary:\n");
	scanf("%f",&p.salary);
	printf("%f",p.salary);
*/	
	
	return 0;
}