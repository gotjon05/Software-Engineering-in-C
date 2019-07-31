#include <stdio.h>

/*2. Modify Program 6.1 so that the elements of the array values are
initially set to 0. Use a for loop to perform the initialization.
*/

int main (void)
{
	int values[10];
	int index;

	//by initially settting elements of the array to zero, unused values are not set to random garbage	
	for(index = 0; index < 10; ++index){
		values[index] = 0;

	} 


	values[0] = 197;
	values[2] = -100;
	values[5] = 350;
	values[3] = values[0] + values[5];
	values[9] = values[5] / 10;
	--values[2];

	for ( index = 0; index < 10; ++index )
		printf ("values[%i] = %i\n", index, values[index]);
		return 0;
}
