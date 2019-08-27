#include <stdio.h>
#define MAXLINE 50

int getlines(char line[], int maxline);
void reverse(char line[]);

int main()
{
	char line[MAXLINE];
	while(getlines(line, MAXLINE) > 0){
		reverse(line);
		printf("%s", line);
	}
}


int getlines(char line[], int maxline)
{
	int i, c;
	for(i=0; i<maxline-1 && (c=getchar()) != EOF && c != '\n'; ++i){
		line[i] = c;
	}
	line[i] = '\0';
	return i;
}

//swap last and first characters in array and repeat, and repeat until 0 is less tham 
void reverse(char line[])
{
	int i, j;
	char temp;

	i = 0;
	while(line[i] != '\0'){
		++i;
	}
	--i;
	//index i is just before '\n' or '\0'
	if(line[i] == '\n'){
		--i;
	}
	j = 0;
	//doesnt count last letter
	printf("%d", i);
	while(j < i){
		//index j is set at begining of array
		temp = line[j]; //temp holds begining of array	
		line[j] = line[i]; //index j holds end of array
		line[i] = temp; 
		--i;
		++j;
	} 
}






