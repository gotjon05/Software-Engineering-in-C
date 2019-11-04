//main passes values to get_celsius()
//get_celsius() converts fahrenheit to celsius

#include <stdio.h>

float get_celsius(int fahrenheit);

int main()
{
        int i;
	printf("Fahrenheit to Celsius\n");
        printf("---------------------\n");
	printf("Fahrenheit    Celsius\n");


	for(i = 0; i < 300; i += 20)
	{
		printf("%6d %15f\n", i, get_celsius(i));	
	}

        
}

float get_celsius(int fahr)
{
	return((5.0/9.0)*(fahr-32));



}




