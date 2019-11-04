/*
write a program to print all input lines that are longer than 80 characters
	I need to find the length of the lines to determine if they are longer than 80

*/


#include <stdio.h>
#define MAX 1000


int main()
{
	char words[MAX];
	int len, c, j, i;
	for(i = 0; i < MAX; i++){
		words[i] = 0;
	} 


	while((c = getchar() != EOF && c != '\n' && c != ' ')){	
		len++;
			
		if(len < 80){
			printf("provide input longer than 80");
		
		}else{
			words[j] = c;	
			++j;			
		}
	}
	words[j] = '\0';
	
}



