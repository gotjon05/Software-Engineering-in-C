/*
rewrite the temp conversion program of section 1.2 to use a function for converstion 

old program: converts fahr to celsius 
	

new program: pass fahr value to celsius conversition function


*/

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float cel(float fahr);

int main()
{
	int fahr;
	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	{	
		printf("%d\n %f\n", fahr, cel(fahr));		

	}
}

float cel(float fahr)
{
	return (5.0/9.0) * (fahr-32.0);

}
