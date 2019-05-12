#include <stdio.h>

int main()
{
	//int fahr, celsius;
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;


	fahr = lower;
	
	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
//		printf("%d\t%d\n", fahr, celsius);
//%3.0f - floating point is to be printed at least three characters wide with no decimal point or fraction digits
//%6.1f - at least six characters wide with 1 digit after the decimal point
		printf("%3.0f %6.1f\n", fahr, celsius); 
		fahr = fahr + step;

	}
}


