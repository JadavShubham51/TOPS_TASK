#include<stdio.h>

struct employee
{
	int empage;
	int empno;
	char empname[20];
	char empaddress[50];
		
};


int main()
{
	struct employee emp;
	
	printf("Enter your empno:");
	scanf("%d",&emp.empno);
	printf("employee number= %d\n",emp.empno);
	
	printf("Enter your Empname:");
	scanf("%s",&emp.empname);
	printf("employee name= %s\n",emp.empname);
	
	printf("Enter your empaddress:");
	scanf("%s",&emp.empaddress);
	printf("employee address= %s\n",emp.empaddress);
	
	printf("Enter your empage:");
	scanf("%d",&emp.empage);
	printf("employee age= %d\n",emp.empage);
	

	return 0;
}