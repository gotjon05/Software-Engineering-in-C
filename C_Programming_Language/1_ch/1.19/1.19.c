/*
write a function reverse that reverse the character stirng s. Use it to write a program that reverse its input a line at a time.
	


*/

#include <stdio.h>
#define MAXLINE 300
 

int getlines(char line[], int maxline);
void reverse(char line[]);

int main()
{
	char line[MAXLINE];
	while(getlines(line, MAXLINE) != 0){
		reverse(line);
		printf("%s", line);
	}	

}

//store input in line array and run until return value is 0
int getlines(char line[], int maxline)
{
	int i, c;
	for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i){
		line[i] = c;
	}
	
	if(c == '\n'){
 		line[i] = c;
 		++i;
 	}	


	line[i] = '\0';
        return i;
}

//reverse the character string a line at a time.
//swapping front and last characters to reverse input
void reverse(char line[]){
	int i, j;
	char temp;
	//had to set i to 0 to avoid segfault
	i = 0;
	//go to the very end of array with index i
	while(line[i] != '\n'){
		++i;
	}
	--i;


	//set index j to the begining of array 
	j = 0;
	//swap while j is less than i
	while(j < i){
		temp = line[j];
		line[j] = line[i];
		line[i] = temp;
		--i;
		++j;
	}
}
