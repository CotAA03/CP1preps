//a c prog that allows the user to input two numbers. Print the product of the two numbers. However you can not use the multiplication * symbol



#include <stdio.h>
#include <stdbool.h>


int main(){

	int dNum1;
	int dNum2;
	int dProduct;
	printf("Please input first number: " );
	scanf("%d", &dNum1);
	printf("Please input second number: ");
	scanf("%d", &dNum2);
	dProduct=0;
	for (int i = 0; i < dNum1; ++i)
	{
		dProduct += dNum2;
	}
	printf("\n The product is %d", dProduct);
	printf("\n");

}