/*
word wrap problem
*/

#include <stdio.h>
#define BUFFER 40
#define COLUMN 14

int find_space(char lines[]);
void column_split(char lines[], int spaces);

int main()
{
	int i, spaces;
	char lines[BUFFER];	
	for(int i = 0; i < BUFFER; ++i){
		lines[i] = 0;
	}

	int c, j;
	j = 0;

	while((c = getchar()) != EOF){
		lines[j] = c;
		++j;
	}
	lines[j] = '\0';


	int z, counter;
	z = 0;
	//walk through the entire array
	//call column_split for each 14 characters?
	while(z < BUFFER){
		++counter;
		if(counter <= COLUMN){
			column_split(lines, find_space(lines));
		}
		counter = 0;
	}

	
	//spaces = find_space(lines);
	//column_split(lines, spaces);

}

//tells me where the first space is in input before column 15
int find_space(char lines[])
{
	int counter, space;
	space = 0;
	//goes back down array to find first space at or before column 14 		
	for(counter = 14; counter >= 0; --counter){
		//finds the first space from index 14
		if(lines[counter] == ' '){
			space = counter;				
		        space = 14 - space;
			printf("%d\n", space);
			printf("%c\n", lines[space]);
			break;
		}
	}  
}

//prints characters until the space before column 15
void column_split(char lines[], int spaces)
{
	int c;
	for(c = 0; c <= spaces; c++){
		printf("%c", lines[c]);
	
	}	
	/*
	int c;
	c = 0;
	while(c <= spaces){
		printf("%c", lines[spaces]);
	}
	*/
}






