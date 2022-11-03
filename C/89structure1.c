#include<stdio.h>

struct Person
{
	int age;
	char name[20];
	float salary;
		
};

int main()
{
	struct Person p;
	
	printf("Enter your age...=");
	scanf("%d",&p.age);
	printf("%d\n",p.age);
	
	printf("Enter your name..=");
	scanf("%s",&p.name);
	printf("%s\n",p.name);
	
	printf("Enter your salary..=");
	scanf("%f",&p.salary);
	printf("%.f\n",p.salary);
	
	return 0;
}