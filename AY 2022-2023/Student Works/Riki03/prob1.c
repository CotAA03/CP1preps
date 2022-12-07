/*wirte a program that asks for an integer, a float and a double input from the user. Print the sum in float data type
int  3, 69  %d
float 3.14 		%f
doble 3.141618	%lf,%f     	%.3f

multiple data types
type casting
explicit
implicit*/


#include <stdio.h>


int main(){
	
	int dNum1;
	float fNum2, fSum;
	double fNum3;

	//ask user for input
	printf("\n Give me an integer: " );
	scanf("%d", &dNum1);

	printf("Give me a float: " );
	scanf("%f", &fNum2);

	printf("Give a double: ");
	scanf("%lf", &fNum3);

	//add them where we do implicit casting
	fSum = dNum1+fNum3+fNum2;
	//print the solution
	printf("\n The sum od %d, %.1f and %.2f is %.3f", dNum1, fNum2, fNum3, fSum);



	return 0;
	
}//end main