#include <stdio.h>

/*write a program that counts blanks, tabs and newlines
read a character
while(character is not end-of-file indicator)
	check if blanks, tabs, newlines
	read character
*/

int main()
{

int c, tabs, newline, spaces;

tabs = newline = spaces = 0;

while((c = getchar()) != EOF)
	if (c == '\n')
		++newline;
	else if (c == '\t')
		++tabs;
	else if (c == ' ')
		++spaces;


printf("newline%d\n", newline);
printf("tab%d\n", tabs);
printf("spaces%d\n", spaces);




}

