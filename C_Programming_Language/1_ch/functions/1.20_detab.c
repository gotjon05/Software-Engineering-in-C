/*
Write a program detab that replaces tabs in the input with the proper number of blanks to space for the next tab stop


	Read input and put store it in array
	
	walkthrough array and replace tabs with proper spaces

*/


#include <stdio.h>
#define MAXLINE 1000
#define TAB 8


 
int getlines(char line[], int maxline);
void detab(char line[], int array_size);


int main()
{
	char line[MAXLINE]; 
	int array_size;
	
	while(array_size = getlines(line, MAXLINE)){
		detab(line, array_size);
                printf("%s", line);
		

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

void detab(char line[], int array_size)
{
	int i;
	for(i=0; i<array_size; i++){
		if(line[i] == '\t'){
			line[i] = "        ";
		
		}		
	}
}



