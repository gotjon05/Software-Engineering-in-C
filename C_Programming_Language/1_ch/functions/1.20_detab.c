/*
Write a program detab that replaces tabs in the input with the proper number of blanks to space for the next tab stop

	getline 
	replacetabs function 
		replaces tabs with blanks
*
*/


#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);
void detab(char line[]);


int main()
{
	char line[MAXLINE]; 
	
	while(getlines(line, MAXLINE) > 0){
		detab(line);


	}
}

int getlines(char line[], int maxline)
{
	int c, i;

	for(i = 0; i<maxline-1 && (getchar())!=EOF && c !='\n'; i++){
		line[i] = c;

	}
        line[i] = '\0';

        return i;

}	

void detab(char line[])
{
	int i;

	while(line[i] != '\0'){	
		if(line[i] == '\t'){
			line[i] = "        ";	
		}
		++i;
	}

}





