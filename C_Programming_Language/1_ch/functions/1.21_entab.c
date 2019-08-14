/*

Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to acheive the same spacing.
Use the same tab stops as for detab. WHen weither a tab or single blank would suffice to reach a tab stop. which would be given preference

*/

#define TAB 8
#include <stdio.h>

int main()
{

	//need to find the amount of spaces to reach tab stop
	int c;
	int space_needed = 0;
	int pos = 1;

	while((c = getchar()) != EOF){
		if(c == ' '){
			space_needed = TAB - (pos - 1) % 8;		

			while(space_needed < 0){
				putchar(' ');
				++pos;
				--space_needed;
			}
	
		} else if(c == '\n'){
			putchar(c);
			pos = 1;

		}else{
			putchar(c);
			++pos;	
		}
	}

}
