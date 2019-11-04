/*
copy input to output, replace \t with \b and \ with \\.  

	read a character
	while(character is not end-of-file indicator)
	if input is tab print \t
	else if input is backspace print \b
	else if input is \ print \\
	else print c 
*/
#include <stdio.h>


int main()
{

	int c;

	while((c = getchar()) != EOF){
		if( c == '\t'){
			printf("\\t");
		}
		else if( c == '\b'){
			printf("\\b");
		}
		else if(c == '\\'){
			printf("\\\\");
		}else{
			putchar(c);

		}	
	}



}

