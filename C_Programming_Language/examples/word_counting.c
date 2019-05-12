#include <stdio.h>

#define IN 1 
#define OUT 0

int main()
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	
	while((c = getchar()) != EOF){
		++nc;	//everytime it encounters first char, it counts
		if(c == '\n'){
			++nl; //counts new line
		}
//evaluated left to right
//tests if word is blank first -- not need to test for newline or tab if so
//conditions for adding another word to counter for new word
		if(c == ' ' || c == '\n' || c == '\t'){
			state = OUT;
		}	
		else if(state == OUT){
			state = IN;
			++nw;  // counts new word
		}
	}
	printf("%d %d %d\n", nl, nw, nc);

}



