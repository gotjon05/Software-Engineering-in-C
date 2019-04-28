#include <stdio.h>
#include <string.h>
#include <ctype.h>


void print_letters(char arg[], int str_len);



int main(int argc, char *argv[])
{

	int a, len;
	for(a = 1; a < argc; a++){
		len = strlen(argv[a]);
		print_letters(argv[a], len);
	}

}

void print_letters(char arg[], int str_len)
{
	int i;
	for(i= 0; arg[i] < str_len; i++){
		char ch = arg[i]; 
		printf("%d", ch);
		if(isalpha(ch) || isblank(ch)){
                        printf("'%c' == %d", ch, ch);
		}
	}

}
