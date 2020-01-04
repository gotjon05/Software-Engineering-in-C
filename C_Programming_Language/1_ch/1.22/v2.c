/*
word wrap problem
*/

#include <stdio.h>
#define BUFFER 100
#define COLUMN 15

void split_line(char lines[], int buffer);

int main()
{
	int i;
	char lines[BUFFER];	
	for(int i = 0; i < BUFFER; ++i){
		lines[i] = 0;
	}

	int c, j;
	j = 0;

	//put input into array
	while((c = getchar()) != EOF){
		lines[j] = c;
		++j;
	}
	lines[j] = '\0';

	split_line(lines, BUFFER);


}

//identify last non-blank character that occurs before the n-th column 
void split_line(char lines[], int buffer)
{
	
	int a, column, counter;
	counter = 0;
	for(a = 0; a != buffer; ++a){
		//put characters that occur before the last non-blank character, before the n-th column in a buffer
		++counter;
		//first line
		if(counter < COLUMN){
			printf("%c", lines[a]);				


		//subsequent lines	
		}else{
			putchar('\n');
			counter = 0;
			printf("%c", lines[a]);
		
		}



	}





}
