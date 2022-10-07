//29switch.c
#include<stdio.h>
int main()
{
	int choice;
	
	printf("Enter your choice: \n");
	scanf("%i",&choice);
	
		switch(choice)
			{
				case 1: printf("CASE 1....!");
				break;
				case 2: printf("CASE 2....!");
				break;
				case 3: printf("CASE 3....!");
				break;
				case 4: printf("CASE 4....!");
				break;
				
				default: printf("invalid choice..!");
			}
		return 0;
		
}