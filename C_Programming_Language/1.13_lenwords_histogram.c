/*Print histogram of lengths of words in input
 *
 *
while((c = getchar) != EOF))
	identify a word by checking for \n, ' ', and \t
		create counter for input that meets this criteria--
			reset counter after each word
				print c with print format that creates style of histogram 
			

*/
#include <stdio.h>

#define SPACE ' '
#define NEWLINE '\n'
#define TAB '\t'
#define IN 1
#define OUT 0

int main()
{
	int state, c, nw;
	nw = 0;
	state = OUT;

	while((c = getchar() != EOF)){
		if(c == SPACE || c == NEWLINE || c == TAB){
			state = OUT;
		}
		else if(state == OUT){
			state = IN;
			++nw;
		}
	}
	printf("%d", nw);
	return 0;
}




