/*
Write a program detab that replaces tabs in the input with the proper number of blanks to space for the next tab stop


if the input is:
\tone\ntwo\tthree\nsixteen\tseventeen\teighteen\n

the output is:

........one
two.....three
sixteen.seventeen.......eighteen

check if there are spaces after a tab column 
find position 

*/



#define TAB 8
#include <stdio.h>



int main()
{
	int c;
	int space_needed = 0;
	int pos = 1;
	while((c = getchar())!= EOF){
		//check if input is past a tab position
		if(c == '\t'){
			//initial space needed value is 8
			space_needed = TAB - (pos - 1) % TAB; 		
//			printf("%d", space_needed);	
			while(space_needed > 0){
				//prints the spaces we need to add
				putchar(' ');
				//counts until space_needed is zero
				++pos;
				//after every space, subtracts space_needed by 1
				--space_needed;
			}
		//if the character is newline then print out and pos is reinitialized to begining of the line 
		} else if( c == '\n'){
			putchar(c);
			pos = 1;
		} else {
			putchar(c);
			++pos;
		}
	} 
}
