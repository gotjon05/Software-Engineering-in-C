#include <stdio.h>

int strlens(char s[]);

int main()
{

	char c;
	int i = 0;
	char s[];
	while((c = getchar()) != EOF){
		s[i] = c;
		++i;
		strlens(s);
		printf("%c", strlens);
	}


}

int strlens(char s[])
{
	int i;
	
	i = 0;
	while(s[i] != '\0'){
		++i;
	return i; 

	}

}
