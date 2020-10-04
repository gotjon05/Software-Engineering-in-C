/*
Why this works:

*/

#include <stdio.h>

void voice(char *msg);

int main()
{
	char *msg_from_god = "Be good or you will feel my wrath";
	voice(msg_from_god);
}

void voice(char *msg)
{
	puts(msg + 11);


}
