//print table in reverse order, 300 to 0
#include <stdio.h>

int main
{
	float fahr, cels;
	int low, high, step;

	low = 0;
	high = 300;
	step = 20;
	
	fahr = high;

	for(fahr = 0; fahr <= low; fahr -= step){
		printf("%3d %6.1f\n", fahr, (5.0/9/0)*(fahr-32));

	} 



}
