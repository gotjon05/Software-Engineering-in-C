/*
write an alternate version of squeeze (s1, s2) that deletes each character in s1 that matches any character in string s2


Mistake of comparing strings with characters?

*/
#include <stdio.h>
void squeeze(char s1[], char s2[]);


int main()
{

	char s1[] = {"The course of true love never did run smooth"};
	char s2[] = {'o', 'u', '\0'}; 
	squeeze(s1, s2);
}



void squeeze(char s1[], char s2[])
{

	int i, j, k;
	for(i = k = 0; s1[i] != '\0'; i++){
		for(j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++){
			if(s2[j] == '\0'){
				s1[k++] = s1[i];
				printf("%s", s1);
			}
		}	
	}
	s1[k] = '\0';


}
