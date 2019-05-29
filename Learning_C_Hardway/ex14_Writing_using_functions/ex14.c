#include <stdio.h>
#include <ctype.h>

int can_print_it(char ch);
void print_letters(char arg[]);

void print_argument(int argc, char *argv[])
{
	int i = 1;
	for(i = 1; i < argc; i++){
		print_letters(argv[i]);

	}
}

void print_letters(char arg[])
{
	int i = 0;
	for(i = 0; arg[i] != '\0'; i++){
		char ch = arg[i];
		
		if(isalpha(ch) || isblank(ch)){
			printf("'%c' == %d ", ch, ch);
		}

	}
}

void print_letters(char arg[])
{
        int i = 0;
        for(i = 0; arg[i] != '\0'; i++){
                char ch = arg[i];
                if(can_print_it(ch)){
			printf("'%c' == %d ", ch, ch);
                }

}

int can_print_it(char ch)
{
	//isalpha-- Checks whether c is an alphabetic letter.
	//isspace-- return true if the character is a space.
	return isalpha(ch) || isblank(ch);
}



int main(int argc, char *argv[])
{
	print_argument(argc, argv);
	return 0;

}


