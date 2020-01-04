//copy input to output replacing tab with \t, backspace with \b, and backslash with \\

#include <stdio.h>

int main()
{
	int c;
	while((c = getchar()) != EOF){
		if(c == '\t'){
			putchar('\t');		
		}
		else if(c == '\b'){
			putchar('\b');
		}
		else if(c == '\\'){
			putchar('\\');
		}

		else{
			putchar(c);
		}
	
	}

	

}
