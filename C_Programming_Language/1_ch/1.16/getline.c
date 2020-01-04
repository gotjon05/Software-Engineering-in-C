/*
read set of lines and print the longest line

while(theres another line)
	if(its longer than the previous longest)
		save it
		save its length
	print longest line

*/

#include <stdio.h>
//buffer
#define MAXLINE		200

//fetches next line of input
int getlines(char line[], int maxline);
//save line that is longer than previous long line by saving in array
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;
	//zero is an acceptable end-of-file return because its never a valud lune length
	while((len = getlines(line, MAXLINE)) > 0){
		//save line that is longer than previous in variable max
		//after getlines returns number of words, it is stored in len
		//it sets the new max
		if(len > max){
			max = len;
			copy(longest, line);	
		}
	}
	if(max > 0){
		printf("%s", longest);
	}
	return 0;
}

//
int getlines(char s[], int lim)
{
	int c, i;
	for(i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i){
		//storing input in line array corresponding to each index
		s[i] = c;
		
		if(c == '\n'){
			s[i] = '\n';
			++i;
		}
	}
	s[i] = '\0';
	//returning index which is counting the number of words
	return i;
}
//moves values from array line to longest
void copy(char to[], char from[])
{
	int i;
	i = 0;
	while((to[i] = from[i]) != '\0'){
		++i;
	}


}
