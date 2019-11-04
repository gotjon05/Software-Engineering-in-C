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

	//ends when getlines returns null character 
	while((len = getlines(line, MAXLINE)) > 0){
		if (len > 80){
			printf("%s", line);
		}
	
	}
	return 0;
}

//read a line into s, return string
int getlines(char s[], int lim)
{
	int i, c;
	for(i = 0; i < lim-2 && (c = getchar()) != EOF && c != '\n'; ++i){
		s[i] = c;
		//printf("%d", i);	
	}		
		
	if(c == '\n'){
		s[i] = c;
		++i;
	
	}
	printf("%d\n", lim-2);
	s[i] = '\0';
	return i;	
}


