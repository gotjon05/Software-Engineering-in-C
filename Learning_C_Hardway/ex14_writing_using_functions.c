#include <stdio.h>
#include <ctype.h>
#include <string.h>

//forward declarations
//int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
	int i;
	//passsing the arguments in argv array to print_letters 
	for(i= 1 ; i < argc; i++){
		print_letters(argv[i]);
	}

}


void print_letters(char arg[])
{
	int i;
	//if no null parameter, assign arguments in argv array to char variable ch
	//check if letter or space tab-- print if so
	for(i= 0; arg[i] != '\0'; i++){
		char ch = arg[i];
		if(isalpha(ch) || isblank(ch)){
			printf("'%c' == %d", ch, ch);


		}
//		if(can_print_it(ch)){
//			printf("'%c' == %d", ch, ch);
	}
	printf("\n");		
}
/*
//checks if alphabetic letter or space/tab
int can_print_it(char ch)
{
	return isalpha(ch) || isblank(ch);
}


*/
int main(int argc, char *argv[])
{
	print_arguments(argc, argv);
	return 0;


}




