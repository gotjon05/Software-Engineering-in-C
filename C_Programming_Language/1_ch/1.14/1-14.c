//print histogram of frequencies of different characters in its input
	//determine uniqueness of character



#include <stdio.h>
#define MAX 256


int main()
{
	int freq[MAX];
	int i, c;
	for(i = 0; i < MAX; i++){
		freq[i] = 0;	
	}

	while((c = getchar()) != EOF){
		//array value is counting each unique character/integer. if A or 65 it counts 1, same for each other unique letter
		//no ascii characters exceed 256 
		++freq[c];		
	}
	

	int j;
	for (i = 33; i <= 126; ++i){
      		printf("%c | ", i);
		for (j = 0; j < freq[i]; ++j) {
                       	printf("x");
               	}

        printf("\n");
        }


}
