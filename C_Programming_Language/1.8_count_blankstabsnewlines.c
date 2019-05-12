//count blanks, tabs and newlines

#include <stdio.h>


int main()
{

	int c, newline, tab, space;
	// i had to set space to zero because the program set a large number to space before it ran
	space = 0;

	while ((c = getchar()) != EOF){
		if(c == '\n'){
			++newline;
		}
		if(c == '\t'){
			++tab;
		}
	
		//double quotes did not work. Because single quotes represents an integer value equal to a numberical value of the character in machine character set.
		if(c == ' '){
			++space;
		}

	printf("newline is: %d\t tab: %d\tspace:%d\n", newline, tab, space);	
}








}
