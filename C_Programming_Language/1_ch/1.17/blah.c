/*
while(theres another line)
	if(its longer than 80)
		(save it)
		(save its length)
		print longest line

*/

#define MAXLINE 1000
#include <stdio.h>
int getlines(char line[], int maxline);


int main()
{
        char line[MAXLINE];     /* current input line */
	int len;

	while((len = getlines(line, MAXLINE)) > 0){
		printf("%d, %s", len, line);


	}



}
//read a line into s, return string
int getlines(char s[], int lim)
{
	int i, c;

	for(i = 0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
		if(s[i] < 80){
			printf("provide line bigger than 80 char");
						
		}
		else if(s[i] > 80){
			s[i] = c;
		
		}		
		
	}
	s[i] = '\0';
	return i;	
	
	


}



