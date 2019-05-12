#include <stdio.h>

/*
play with combination of getting address of and value of things
Resources:
	https://stackoverflow.com/questions/6239833/printing-array-element-memory-adresses-c-and-c-why-different-output

*/

int main(int argc, char *argv[])
{
        //create two arrays
        int ages[] = { 23, 43, 12, 89, 2 };
        char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};


        int count = sizeof(ages) / sizeof(int);
        int i = 0;

	int *pointer_ages = ages;
	char **pointer_names = names;		



	//address and value from ages array
	for(i = 0; i < count; i++){
		printf("the address of ages is %p and the value is %d \n", &ages[i], ages[i]);
	}

	
	for(i = 0; i < count; i++){
		printf("the address of names is %p and the values are %s \n", &names[i], *(pointer_names + i));

	}



}
