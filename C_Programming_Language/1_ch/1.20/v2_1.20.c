/*
write program that replaces tabs in the input with the proper number of blanks to space to the next tab stop. 
*/

#include <stdio.h>
#define MAX 100
#define TABS 8

int main()
{
	char lines[MAX];
	int c, i, detab, pos;
	i = detab = 0;
	pos = 1;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			//determine how many spaces we need to replace the orignal tab spaces with 
			/*
			--pos starts as 1 instead of 0 to avoid returning 1 -- 8-(0-1) % 8 = 1
				8-(1-1) % 8 = 8
				8-(2-1) % 8 = 7
				8-(3-1) % 8 = 6
				8-(4-1) % 8 = 5
			*/	
			detab = TABS - (pos - 1) % TABS;	
			
			while(detab > 0){
				putchar(' ');
				++pos;
				--detab;
			}
		//start counting the pos from 1 for every new line 	
		}else if(c == '\n'){
			putchar(c);
			pos = 1;
		
		} else {
			//increment pos for all the characters
			putchar(c);
        	        ++pos;

		
		}
	}
	printf("%s", lines);
}
