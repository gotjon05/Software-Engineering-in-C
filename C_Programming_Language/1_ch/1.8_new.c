/*
write a program to count blanks, tabs and newlines
getline function
void count_type function 
        
*/

#define MAXLINE 1000
#include <stdio.h>

int getlines(char line[], int maxline);
void count_type(char line[], int array_size);

int main()
{
        char line[MAXLINE];
        int array_size;
        while(array_size = getlines(line, MAXLINE)){
                
                //array_size = sizeof(line)/sizeof(char);
                //printf("arraysize: %d", array_size);
                count_type(line, array_size);
                printf("%s", line);
        }
}

//modifys array, adding input
int getlines(char line[], int maxline)
{
        int i, c;

        for(i=0; i<maxline-1 && (c = getchar()) != EOF && c != '\n'; ++i){
                line[i] = c;
        }
        line[i] = '\0';
        return i;
}

// pass array to a function and iterate through it while counting spaces, tabs, and newlines.
void count_type(char line[], int array_size)
{
        int i, tab;
        tab = 0;
        for(i=0; i < array_size; i++){
                if(line[i] == '\t'){
                        ++tab;
                }
        }
        printf("tab:%d", tab);
}

