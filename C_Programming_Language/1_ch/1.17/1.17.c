/*
write a program to print all "input lines" that are longer than 80 characters

while theres another line


*/

#define MAXLINE 200
#include <stdio.h>
int getlines(char line[], int maxline);

int main()
{
	int len;
	char line[MAXLINE];
	while((len = getlines(line, MAXLINE)) > 0){
		if(len > 80){
			printf("good job\n");
			printf("%s", line);
		}else{
			printf("less than 80");
		
		}
		
	}
	return 0;
}

int getlines(char line[], int maxline)
{
	int i, c;
	for(i = 0; i < maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i){
		line[i] = c;
	}	
	
	if(c == '\n'){
		line[i] = c;
		++i;
	}

	line[i] = '\0';
	return i;
}


