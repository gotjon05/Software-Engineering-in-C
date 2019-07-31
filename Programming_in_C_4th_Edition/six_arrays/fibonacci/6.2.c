#include <stdio.h>
/*
Program 6.2 permits only 20 responses to be entered. Modify that
program so that any number of responses can be entered. So that the user
does not have to count the number of responses in the list, set up the
program so that the value 999 can be keyed in by the user to indicate that
the last response has been entered. (Hint: You can use the break
statement here if you want to exit your loop.)
*/
int main (void)
{
	int ratingCounters[11], i;
	long response;	

	for ( i = 1; i <= 10; ++i )
		ratingCounters[i] = 0;
	printf ("Enter your responses\n");


	do{
		scanf ("%i", &response);
		++ratingCounters[response];
	}
	while(response < 1 || response < 1000)
		printf ("Bad response: %i\n", response);
		printf ("\n\nRating Number of Responses\n");
		printf ("------ -------------------\n");

		for ( i = 1; i <= 10; ++i )
			printf ("%4i%14i\n", i, ratingCounters[i]);

		return 0;
}



