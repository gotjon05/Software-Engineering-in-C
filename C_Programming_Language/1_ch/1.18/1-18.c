/*
Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and
to delete entirely blank lines. 




bettween my line and lim which is 1000 there could be a lot of trailing blanks. I need to redefine where '\0' is. 

check for 8 spaces(tab) after null character/newline after checking for single spaces 
	go back 8 spaces 

check for space after nul character/newline 
	go back a line until there are no white spaces, go up one and set null character 

*/

#include <stdio.h>
#define MAX 1000


int getlines(char line[], int MAX);
int remove(char s[]);

int main()
{
	int line[MAX];
	while((getlines(line, MAX)) > 0){
 		if((remove(line)) > 0){
			print("%s", line);
		}	
	}

}

//reads line into s and return length
int getlines(s[], lim)
{
	for(i = 0; i < lim-2 && (c = getchar()) != EOF && i++){
		s[i] = c;
	}
	if(c == '\n'){
		s[i] = '\n';
	
	}
        s[i] = '\0';
	return i;
}
	
int remove(char line)
{
	int i;
	//goes to line
	while(s[i] != '\n'){
		++i;
		printf("%c", s);

}
