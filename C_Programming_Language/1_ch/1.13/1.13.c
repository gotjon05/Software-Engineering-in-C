#include <stdio.h>
#define LENGTH 20

//write a program to print a histogram of the length of words in its input.
//identify a word and count input


int main()
{
	int words[LENGTH];
	int i;
	for(i = 0; i < LENGTH; i++){
		words[i] = 0;
	}

	int c;
	while((c = getchar()) != EOF){
		//new word, increment index
		if(c == '\n' || c == '\t' || c == ' ')		
			words[i++];	
		//increment size of word in particular index
		else{
			++words[i];	
		}	
	}


	int j;
	for(j= 0; j < LENGTH; j++){
		printf("%d", words[j]);
	
	}

}

	

