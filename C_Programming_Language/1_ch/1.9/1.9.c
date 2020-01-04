/*
write a program to copy its input to its output, replacing each string of one or more blanks by a single blank
	
*/

#include <stdio.h>


int main()
{
	int c, count;
	count = 0;
	while((c = getchar()) != EOF){
		if(c == ' '){
			count++; 
		}else{
			count = 0;
		}
		//only printing variables stored in variable c, when count is less than 2. Resets to 0 after each iteration	
		if(count < 2){
			printf("%c", c);
		}
	}
}
