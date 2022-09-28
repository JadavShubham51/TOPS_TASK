//Monday to Sunday using switch case

#include<stdio.h>
int main()
{
	int day;
	
	printf("Enter any no_day:\n");
	scanf("%i",&day);
	
	switch(day)
	{
		case 1: printf("monday");
		break;
		
		case 2: printf("tuseday");
		break;
		
		case 3: printf("wensday");
		break;
		
		case 4: printf("thursday");
		break;
		
		case 5: printf("friday");
		break;
		
		case 6: printf("satrday");
		break;
		
		case 7: printf("sunday");
		break;
		
		default:printf("invalid number");
	}
	return 0;
	
}