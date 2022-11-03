//93function_with_sturcture.c
#include<stdio.h>
struct Student
{
	int rollNo;
		
};

void getDetails(int age,struct Student st1,char name[20])
{
	
//		printf("\nEnter name:\n");
//	scanf("%s",&name);
//	printf("%s",name);
	
	printf("Enter age:\n");
	scanf("%d",&age);
	printf("%d",age);
	
	printf("\nEnter roll No:\n");
	scanf("%d",&st1.rollNo);
	printf("%d",st1.rollNo);
		
}

int main()
{
	struct Student s1,s2;// int(struct Student) a,b,c;
	int person_age;
	char person_name[20];	
	getDetails(person_age,s1,person_name);
	
	return 0;
}