/*
write program that replaces tabs in the input with the proper number of blanks to space to the next tab stop. 
*/

#include <stdio.h>
#define MAX 100

int main()
{
	char lines[MAX];
	int c, i;
	i = 0;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			printf("        ");
		}
		lines[i] = c;
		++i;
	}
	printf("%s", lines);
}
