//copy input to output and replace each string of more than one blank with a single blank
#include <stdio.h>
int main()
{

	char c, spaces;

	while((c = getchar()) != EOF)
		if(c == ' '){
			++spaces;
			if(spaces < 2){
				spaces = ' ';
		
		}
	}
	putchar(c);	
}
