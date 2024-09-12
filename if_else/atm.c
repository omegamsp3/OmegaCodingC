//Write a C program to simulate a simple ATM machine that allows the user to withdraw a specific amount of money,
//checking if the user has sufficient balance and if the amount is a multiple of 100.

#include <stdio.h>

int main()
{
	int x = 89000;
	printf("TOTAL BALANCE : %d",x);
	int y;
	printf("\nENTER AMOUNT : ");
	scanf("%d",&y);
	if(y<=x && y%100==0) {
		printf("SUFFICIENT BALANCE READY TO WIDTHDRAW");
	}
	else {
		printf("INSUFFICIENT BALANCE");
	}
	return 0;
}