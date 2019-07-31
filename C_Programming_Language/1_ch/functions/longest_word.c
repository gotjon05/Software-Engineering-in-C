/*
while(theres another char)
	if(there is longer than previous)
		save it
		save its length
	print longest line

https://stackoverflow.com/questions/28959181/kr-section-1-9-character-arrays-concerning-the-getline-function
 */

#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */
int getlines(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
        int len;                /* current line length 			*/
        int max;                /* maximum length seen so far 	*/
        char line[MAXLINE];     /* current input line 			*/
        char longest[MAXLINE];  /* longest line saved here 		*/

        max = 0;
	//passing empty char array line and int 1000 to getlines
	//null character is the end condition of the while loop
        while ((len = getlines(line, MAXLINE)) > 0){
		printf("%d, %s", len, line);
                if (len > max) {
                        max = len;
                        copy(longest, line);
                }

	}
        
	if (max > 0){            /* there was a line */
                printf("longest is :%s", longest);
	}
        return 0;
}

/* 
getline: 
stores characters in array, returns int length to getlines


*/
int getlines(char line[], int maxline)
{
        int c, i;
	//end condition is line break--loop keeps counting until line break 
	for (i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; ++i){
		//save input into char array
  		line[i] = c;
//understanding how getlines counts the number of characters		
//	        printf("%d\n", i);

/*		
		//situation never happens>?
		if (c == '\n') {
             		line[i] = c;	
			++i;
		}        	
*/
	}
        line[i] = '\0';
	printf("%d\n", i);
	return i;
}	

/* copy: copy 'from' into 'c'; assume to is big enough
longest char array and line array storing input from getlines
*/
void copy(char longest[], char line[])
{
        int i;

        i = 0;
	//updates longest value stored in lines array to maxline array until it reaches null character at end of array
        while ((longest[i] = line[i]) != '\0')
                ++i;
}
