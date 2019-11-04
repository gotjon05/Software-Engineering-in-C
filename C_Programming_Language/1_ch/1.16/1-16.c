#include <stdio.h>


#define MAXLINE 1000

int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
	int len;            /* current line length */
    	int max;            /* maximum length seen so far */
    	char line[MAXLINE];     /* current input line */
    	char longest[MAXLINE];  /* longest line saved here */
    	max = 0;
	
	while ((len = getlines(line, MAXLINE)) > 0){
        	if (len > max) {
            	max = len;
            	copy(longest, line);
        	}
	}
	
	if (max > 0){    /* there was a line */
        	printf("%s", longest);
	}
	return 0;
}

/* getlines:  read a line into s, return length */
int getlines(char s[], int lim)
{
	int c, i, j;

	for (i=0; (c=getchar())!=EOF && c!='\n'; ++i){
		//lim-2 leaves room for newline character and end of string marker 
		if(i < lim-2){
			s[j] = c;
			++j;		
			printf("\n%d", j);
                        printf("%20d", i);
			}
	
	}
	//the point of variable j-- to place newline character just after the characters
	if (c == '\n'){
        	s[j] = c;
		++j;
		++i;
    	}
	s[j] = '\0';
	return c;
}

/* copy:  copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

    	i = 0;
    	while ((to[i] = from[i]) != '\0'){
		++i;

	}	
}
