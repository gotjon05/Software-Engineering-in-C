/*
replace tab by \t
replace backspace by \b
replace backslash by \\

psudocode:
	while(char != EOF)
		if('\t'(dont perform tab by using escape sequence, ascii code 92))
			print(\t)
		if('\b'(dont perform backspace by using escape sequence))
			print(\b)
		if('\\'(dont perform backslash by using escape seq))
			print(\\)

*/
#include <stdio.h>
int main()
{
	int c;

	while((c = getchar()) != EOF){

		if (c == '\t') {
        		putchar (92);
        		putchar ('t');
		}
		if(c == '\b'){
			putchar(92);
			putchar('b');
		}
		if(c == '\\'){
			putchar(92);
			putchar(92);
		}else{
			putchar(c);
		}
	}
}


