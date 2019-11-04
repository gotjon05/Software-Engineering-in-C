//print histogram of length of words in input 


#include <stdio.h>
#define MAXLEN 15
#define IN 1
#define OUT 0
int main()
{
	int c = 0;
	int i, j;
	//number of char in word
	int nchar = 0;
	//flag to know if inside word
	int state = IN;
	//count how many words in particular length
	int wordlen[MAXLEN];


	for(i = 0; i < MAXLEN; ++i){
		wordlen[i] = 0;
	}

	while((c = getchar()) != EOF){
		
		

		if(c == '\t' || c == ' ' || c == '\n'){	
			if(state == OUT){
				//state = IN; 
				//nchar = 0;

				if(nchar < MAXLEN){
					//increments value at index nchar and evaluates wordlen[nchar] before it was been incremented
					++wordlen[nchar];
					
				}
				state = IN;
				nchar = 0;
		
			}
		}else{
			++nchar;
			state = OUT;			
		}

	}
	for(i = 1; i < MAXLEN; ++i){
		printf("%2d | ", i);
		for(j = 0; j < wordlen[i]; ++j){
			putchar('*');
	
		}
		putchar('\n');
	}	
	
}	

