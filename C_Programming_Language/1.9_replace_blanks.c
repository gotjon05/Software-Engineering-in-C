//https://stackoverflow.com/questions/31542494/exercise-1-9-of-kr-book
//using counter to keep track of consecutive empty spaces
/*
while(input is not EOF)
	check if input is a space ' '
		create counter


*/
//while((getchar() != EOF))



#include <stdio.h>

int main()
{
        int c, nspaces;

        nspaces = 0;
        c = getchar();

        while(c != EOF) {
                if (c == ' '){                     
			//nspaces increments first?
			if (nspaces > 0) {
                                ++nspaces;
                        } else {
                                putchar(c);
                                ++nspaces;
                        }
                } else {
                        putchar(c);
                        nspaces = 0;
                }
                c = getchar();
        }

        return(0);
}







/*
int main()
{
	int c;
  	while ((c = getchar()) != EOF) {
    		putchar(c);

		//redundant if statement?
    		if (c == ' '){
      			while ((c = getchar()) == ' ');
			putchar(c);
    			}
 		}
}
*/



// When i put the put brackets around the nested while loop and put the 2nd putchar inside. I get a completely different result. Not sure why. 
//

/*
int main()
{
        int c;
        while ((c = getchar()) != EOF) {
                putchar(c);
		while ((c = getchar()) == ' ');
		putchar(c);
		}
	}
}       
*/
