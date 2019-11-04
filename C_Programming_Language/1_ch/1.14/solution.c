#include <stdio.h>

//not clear to me how the index is increasing
int main(void) 
{
	int FREQUENCY_LENGTH = 256; // We'll just count all ASCII values. Why not?
  	int frequencies[FREQUENCY_LENGTH];
  	int i, j, c;

  	for (i = 0; i < FREQUENCY_LENGTH; ++i) {
    		frequencies[i] = 0;
  	}
	//meat of the program
	// increases value of frequencies in index c
  	while ((c = getchar()) != EOF) {
    		++frequencies[c];
		printf("%d %d\n", c, frequencies[c]);
	}

  	printf("\n");
  	printf("Character Frequencies\n");
  	printf("---------------------\n");
  	/* For the sake of brevity, we will only print visible characters.
   	* The ASCII values for visible characters are all between 33 and 126,
   	* a fact I pulled off www.asciitable.com
   	*/
	
  	for (i = 33; i <= 126; ++i) {
    		printf("%c | ", i);

    		for (j = 0; j < frequencies[i]; ++j) {
	               	printf("x");
    		}

    	printf("\n");
 	}

 	 return 0;
}
