//94structure_1.c
#include<stdio.h>

struct Student
{
	int rollNo;
	char name[20];
	char sub[10];
};

int main()
{
	struct Student s;
	printf("Enter your rollNo,name,subject:\n");
	scanf("%d %s %s",&s.rollNo,&s.name,&s.sub);
	printf("%d %s %s",s.rollNo,s.name,s.sub);
	
	return 0;
}