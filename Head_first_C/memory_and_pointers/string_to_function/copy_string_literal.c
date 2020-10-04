#include <stdio.h>


int main()
{
	//cards variable points to a string in the stack, so we are free to modify content
	char cards[] = "JQK";
	char a_card = cards[2];
	cards[2] = cards[1];
	cards[1] = cards[0];
	cards[0] = cards[2];
	cards[2] = cards[1];
	cards[1] = a_card;
	puts(cards);
	return 0;
}
