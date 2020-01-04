/*
rewrite the temp converion program celsius to fahrenheit use function for conversion

*/
#include <stdio.h>

float to_celsius(int fahr);

int main()
{
	int i, upper,lower, step; 
	upper = 300;
	step = 20;

	for(i = 0; i <= upper; i += step){
		printf("%d %f\n", i, to_celsius(i));
	}	
}

float to_celsius(int fahr)
{
	  return (5.0 * (fahr - 32.0) / 9.0);


}



