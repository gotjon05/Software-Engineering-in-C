#include <stdio.h>
#define MAXLINE 1000
#define LONGLINE 80


int getlines(char line[], int maxline);

int main()
{
	int len;
	char line[MAXLINE];

	while((len = getlines(line, MAXLINE)) > 0)
		if(len > LONGLINE)
			printf("%s", line);
	return 0;
}


int getlines(char s[], int lim)
{
	char c;
  	int i;
  	for (i = 0; ((c = getchar()) != EOF) && (c != '\n') && (i < lim); ++i)
    		s[i] = c;
  		if (c == '\n'){
      			s[i] = c;
      			++i;
    		}
  	s[i] = '\0';
  	return i;
}



