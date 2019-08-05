/* Write a function reverse(s) that reverses the characte string s. 
   Use it to write a program that reverses its input a line at a time. */

#include <stdio.h>
#define MAXLINE 1000

int getlines(char line[], int maxline);
void reverse(char s[]);

int main()
{
        char line[MAXLINE]; /*Current Input Line  */

        while(getlines(line, MAXLINE) > 0){
                reverse(line);
                printf("%s", line);
        }
}


int getlines(char line[], int maxline)
{
	int c, i;
        for (i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i){
                line[i] = c;
	}

        line[i] = '\0';
        printf("%d\n", i);
        return i;
}

// finds length of input after subtracting null character and endline if it exists and storing it in I
// 
void reverse(char s[])
{
	int i, j;
	char temp;

	i = 0;

	while(s[i] != '\0'){ /*find the end of string s */
		++i;
		
	}
	--i;		/* back off from '\0' */
	
	if(s[i] == '\n'){
		--i; // leave new line in place
	}

	j = 0;		//begining of new string s


	//i stores length of input
	//alters elements of array to be reversed
	printf("i: %d, j: %d\n", i, j);

	while(j < i){
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
//	        printf("i: %d j: %d\n", i, j);
		--i;
		++j;

	}

	
}


