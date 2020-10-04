#include <stdio.h>

int main()
{
	//contestants is a pointer variable that points to the first value in array
	int contestants[] = {1,2,3};

	//the pointer variable choice now stores the address of the contestants array
	int *choice = contestants;
	//overwrites 1 with 2
	contestants[0] = 2;
	
	contestants[1] = contestants[2];
	constestans[2] = *choice;	
	printf("%i\n", contestants[2]);
	return 0;



}
