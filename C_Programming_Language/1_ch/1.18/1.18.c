/*
write a program to remove trailing blanks and tab from each line of input and to delete entirely blank lines

fetch the next line of input, save it in array
	Locate end of the array and remove any blanks or tabs


*/

#include <stdio.h>
#define MAXLINE 300

int getlines(char line[], int maxline);
int removes(char line[]);

int main()
{
	//input line
	char line[MAXLINE];
	while((getlines(line, MAXLINE)) > 0){
		if(removes(line) > 0){
			printf("%s", line);		
		}	

	}

}


int getlines(char line[], int maxline)
{
	int c, i;
	for(i=0; (c = getchar()) != EOF && c != '\n'; ++i){
	//if the last character is a blank or tab dont include it
		line[i] = c;
		//putchar(line[maxline]);
	}     
	
	if(c == '\n'){
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}

//i want to step backwards from the last index of array to find spaces and tabs
int removes(char s[])
{
	int i;
	i = 0;

	//for(i=0; s[i]!='\n'; ++i);--i; 	  
	while(s[i] != '\n'){
		++i;
	}
	--i;
	printf("%c", s[i]);

	//for(i >0; ((s[i] == ' ') || (s[i] =='\t'));--i)   
	while(i >= 0 && (s[i] == ' ' || s[i] == '\t')){
		--i;
	}
	//blankline, terminate it
	if(i >= 0){
		++i;
		s[i] = '\n';
		++i;
		s[i] = '\0';
		printf("terminated");
	}
	return i;

}
