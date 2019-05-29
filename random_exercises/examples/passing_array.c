#include <stdio.h>


void displayString(char []);


int main()
{
	char message[] = "Hello World";
	displayString(message);

	return 0;

}

void displayString(char str[])
{
	int i = 0;
	printf("string: ");
	while(str[i] != '\0'){
		printf("%c", str[i]);
		i++;
	}
	printf("\n");



}
