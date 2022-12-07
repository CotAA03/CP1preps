//A c program that asks the user to enter a number between 1 to 10. then the prog prints an inverted right triangle with the input number as the base(or max number) of asterisks


#include <stdio.h>


int main(){
	int dNum1;
	printf("Please input a number between 1 and 10: ");
	scanf("%d", &dNum1);
	for (int i = 0; i < dNum1; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			printf(" ");
		}
		for (int j = i; j < dNum1; ++j)
		{
			printf("*");
		}
		printf("\n");
	}
	
}

