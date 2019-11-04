/*
https://stackoverflow.com/questions/1472581/printing-chars-and-their-ascii-code-in-c#targetText=char%20c%20%3D%20'a'%3B,ll%20get%20the%20ascii%20value.&targetText=To%20print%20all%20the%20ascii,to%20255%20using%20while%20loop.

*/



#include <stdio.h>



int main()
{
	int i;
	for (i = 33; i <= 126; ++i) {
                printf("%c | ", i);
	}
}
