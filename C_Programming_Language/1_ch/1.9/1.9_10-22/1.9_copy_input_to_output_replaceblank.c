/*
write program top copy its input to output, replacing each string of one or more blanks by a single blank

read a character
while(character is not end-of-file indicator)
	count spaces
		if space exceeds 1, change to 1
	print output

*/
#include <stdio.h>

int main()
{

int c, blanks;
	blanks = 0; 

	while((c = getchar()) != EOF)
	{
		putchar(c);
		if(c == ' ')
			blanks++;
		else
			blanks = 0;

		if(blanks < 2)
			putchar(c);
	
		

	}	



	return 0;

}
