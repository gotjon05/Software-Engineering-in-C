#include <stdio.h>

void fortune_cookie(char msg[]);

int main()
{
	char quote[] = "Cookies make you fat";
	fortune_cookie(quote);	
	printf("The quote string is stored at: %p\n", quote);

}

//msg is a pointer variable
void fortune_cookie(char msg[])
{
	//msg points to the message
	printf("message reads: %s\n", msg);


	//the quote variable will represent the address of the first character of the string. Associating the first character with quote variable
	//returns the size of pointer to string
	printf("msg occupies %i bytes\n", sizeof(msg));

}
