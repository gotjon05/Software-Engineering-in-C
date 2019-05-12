//print input one word per line

#include <stdio.h>
#define IN 1
#define OUT 0

int main()
{

	int c, state;
	state = OUT;

	while((c = getchar() != EOF)){
		if( c == ' ' || c == '\n' || c == '\t'){
			state = OUT;			
			printf("\n");
		}
		else if(state == OUT){
			state = IN;	
		}
		putchar(c);
	}

	return 0;


}
