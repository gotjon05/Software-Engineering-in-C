//prints its input one word per line
	//ex. Bart fart mart 
	//bart
	//fart
	//mart
	//I need to identify when a word begins and ends
	


#include <stdio.h>

int main()
{
	int c;
	while((c = getchar()) != EOF){

		//identifies when a word ends
		if(c == '\t' || c == ' ' || c == '\n'){
			printf("\n");			
		}		
		else{
			putchar(c);
		}
	} 
}
