#include <stdio.h>


//celsius to fahrenheit
//
int main(){
	float celsius, fahr;
	int low, high, step;
	low = 0;
	high = 50;
	step = 5;


	celsius = low;

	printf("%3s %3s \n", "celsius", "fahr");
	while(celsius <= high){
		fahr = (celsius * 1.8) + 32;
		printf("%6.0f %6.1f\n", celsius, fahr);
		celsius += step;
	}

}

