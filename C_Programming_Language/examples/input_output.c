#include <stdio.h>

int main()
{

	int c;
/*
	c = getchar();
	while(c != EOF){
		putchar(c);
		c = getchar();
	}

*/
	while((c = getchar()) != EOF){
		putchar(c);
	}	

	char value;
	value = ((c = getchar()) != EOF);
	printf("%i\n", value);
	return 0;
	



}
