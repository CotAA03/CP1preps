//the user gets two digit number. the num can be a combination of 1s and zeros
//if the first digit is 1 followed by 0 print Bazinga
//if the first is 0 followed by 1 print booyeah
//if the digits are the same print Alakazam



#include <stdio.h>


int main(){

	int dNum1, dDigit1, dDigit2;


	printf("Please input a two digit integer constructing od a 1 and a 0 in any order you watn: " );
	scanf("%d", &dNum1);

	//split the number into two digits 
	dDigit1 = dNum1/10;

	//modulo 10 to get the last digit
	dDigit2 = dNum1%10;

	//check the digits by treating them like boolean 
	if(dDigit1==1 && !dDigit2)
	{
		printf("\n Bazingaaa \n" );
	}
	else if (!dDigit1 && dDigit2){
		printf("\n Boyahhhhh \n");

	}
	else printf("\n Alakazam \n");
}