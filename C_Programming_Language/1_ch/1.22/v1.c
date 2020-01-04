/*
https://stackoverflow.com/questions/14797734/k-and-r-exercise-1-22

*/

#include <stdio.h>
int main()
{
	int c, column;
	count = 0;
	while((c = getchar()) != 0 ){
		++column;	
	
		if(column == 7 && c == ' '){
			putchar('\n');
		
		}else{
			printf("%c", c);
		
		}
	
	}
	



}
