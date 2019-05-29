//www.dyclassroom.com/c/c-pointers-and-one-dimensional-array

#include <stdio.h>

int main()
{
//prints characters at a time
	int i;
	char str[6] = "Hello";

	for(i = 0; i < str[i] != '\0'; i++){
		printf("%c\n", str[i]);
	}

	
//print whole string
	char strl[] = "Hello";
	int buff;
		buff = 6;
		for(i = 0; i < buff; i++){
			printf("%d: %s\n", i, strl);
		}


//one dimensional array -- storing the begining address of array stra in the pointer
//0 1 2 3 4 5
//H e l l o \0
// array
	char stra[6] = "Hello";
// pointer
	char *ptr = stra;
	printf("%s", ptr);








}
