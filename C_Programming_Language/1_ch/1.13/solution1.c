#include<stdio.h>

#define IN        1
#define OUT       0
#define MAXLENGTH 11

int main()
{
	//index is word lengths and array value is frequency of thoes lengths based on number of spaces or tabs or newlines
	//This program is not storing the variables in the program, its simply counting when they occur   


	int i = 0;
  	int j =0;  /* i and j are simply index counters */  
  	int c = 0;
  	int nchar = 0;  /*number of characters in a word */
  	//set to IN 
  	int inspace = IN; /* a flag to know whether we are inside of outside the word */ 
  	int wordlen[MAXLENGTH]; /* counts  */

	for(i = 0; i < MAXLENGTH; ++i)
    		wordlen[i] = 0;

 	 while((c = getchar()) != EOF){
		 if(c == ' ' || c == '\t' || c == '\n'){
	  		if (inspace == OUT){
				//the program will count the first wordlen before counting frequency by setting inspace to IN, allowing it to fail these checks
				//wordlen counts number of exits signifying (words) for each particular index storing the characters
				//eventually when the word ends, this function counts the final total of characters in nchar 
				if(nchar < MAXLENGTH)
					++wordlen[nchar];
					printf("%d", wordlen[nchar]);
			}
	  
	 		inspace = IN;
			//resets count after exiting each word
			nchar = 0;

		//if it is not space/tab/newline, increase nchar, thus increasing the wordlen  
		//the point of IN and OUT is so that, this function goes first after each cycle through function
		 }else{
			//if not exiting word, its counting characters
			++nchar;
	 		if(c == '"' || c == '\'')
	    			--nchar;
	  		inspace = OUT;
		}
	}


  /* printing the Horizontal-Histogram */
  for(i = 1; i < MAXLENGTH; ++i)
    {
      printf("%2d| ", i);
      for(j = 0; j < wordlen[i]; ++j)
	putchar('*');

      putchar('\n');
    }

  
  return 0;
}
