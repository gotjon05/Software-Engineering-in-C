#include <stdio.h>

int main()
{
	//char array
	char str[6] = "Hello";
	
	//ptr is pointing to first memory location of one dimensional character array str
	char *ptr = str;
	//dereference point-- providing first index of array
	while(*ptr != '\0'){
		printf("%c\n", *ptr);
		ptr++;

	}

	return 0;
}

