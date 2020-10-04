/*
pointers allow functions to share memory: data created by one function can be modied by another function

pointer variable: stores memory address

& - finds the address of a variable
* - can read the contents of memory address


*/


#include <stdio.h>

//telling the go_south_east function where to find the current lattitude value
//read and update
//
void go_south_east(int *latitude, int *longitude);


int main()
{
	int latitude = 32;
	int longitude = -64;
	
	//pass addresses of the variables in main
	go_south_east(&latitude, &longitude);
	printf("you are now %i, %i", latitude, longitude);
	return 0;
}
/*
arguments need to be pointer variables to store address  
function takes pointer arguments, its able to update the original latitude and logititde variable

*/

void go_south_east(int *latitude, int *longitude)
{
	*latitude = *latitude -1;
	*longitude = *longitude +1;
}



//pass the location as a parameter to go_south_east()
