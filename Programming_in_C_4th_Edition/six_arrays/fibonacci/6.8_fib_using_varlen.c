#include <stdio.h>

int main(void)
{
	int i, numFibs;
	printf("How many FIbonacci numbers do you want between (1 and 75)?");
	scanf("%i", &numFibs);
	//range of values entered is checked by program 
	if(numFibs < 1 || numFibs > 75){
		printf("Bad number, sorry!\n");
		return 1;
	}
	//variable length array-- size of array defined by variable and not by constant expression
	//fibonacci array declared to contian numFib elements
	unsigned long long int Fibonacci[numFibs];
	Fibonacci[0] = 0;
        Fibonacci[1] = 1;

	for(i = 2; i < numFibs; ++i)
	        Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

	for(i = 0; i < numFibs; ++i)
		printf("%llu", Fibonacci[i]);

	printf("\n");
	return 0;


}
