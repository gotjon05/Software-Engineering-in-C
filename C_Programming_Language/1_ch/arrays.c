/* count digits, white spaces, ohers*/

#include <stdio.h>

/*
	read a character
	while(character C is not end-of-file)
        	check if C is a digit by checking if its more than '0' and less than '9'
			increment value in array
		check if C is a word separator
			increment nwhite
		check for other 
			increment nother
	print array to show results 
*/

int main(void)
{
	int c, i, nwhite, nother;
  	int ndigit[10];
  	nwhite = nother = 0;


	for (i = 0; i <= 9; i++){
		ndigit[i] = 0;
	}

  	while ((c = getchar()) != EOF){
    		if (c >= '0' && c <= '9')
      			++ndigit[c-'0'];
    		else if ((c == ' ') || (c == '\t') || (c =='\n'))
      			++nwhite;
    		else
      			++nother;
	}

  	printf("digits =");
 	for (i = 0; i <= 9; ++i){
    		printf(" %d", ndigit[i]);
	}
  	
	printf(", white space = %d, other = %d\n", nwhite, nother);
  
	return 0;
}

