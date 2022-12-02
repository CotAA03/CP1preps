#include <stdio.h>


int main(int argc, char const *argv[])
{
	
	int dNum1=0;
	printf("Give me three digit number: ");
	scanf("%d", &dNum1);
	int dHundred = dNum1/100;
	printf(" \n Hundreds : %d \n", dHundred);
	int dTens = (dNum1/10) - (dHundred*10);
	printf(" \n Tens : %d \n", dTens);
	int dOnes = dNum1 - (dHundred*100) - (dTens*10);
	printf(" \n Ones : %d \n", dOnes);









	return 0;
}

