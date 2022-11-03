//95bank.c
#include<stdio.h>
struct Bank
{
	char bankName[50];
	char IFSC[30];
	int accNum;
	float balance;
	int atmPin;	
};

int main()
{
	struct Bank xyz;
	
	printf("\nbank name: \n");
	scanf("%s",&xyz.bankName);
	printf("\nbank IFSC: \n");
	scanf("%s",&xyz.IFSC);
	printf("\nbank Accopunt Num: \n");
	scanf("%d",&xyz.accNum);
	printf("\nbank Atmpin: \n");
	scanf("%d",&xyz.atmPin);
	printf("\nbank balance: \n");
	scanf("%f",&xyz.balance);
	
	printf("Bank Name = %s\nIFSC = %s\nAccNum = %d\nAtmPin = %d\nBalance = %f",
	xyz.bankName,xyz.IFSC,xyz.accNum,xyz.atmPin,xyz.balance);
	
	return 0;
}