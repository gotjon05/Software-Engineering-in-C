/* fold, to fold long lines after a specified Column */

#include<stdio.h>
#define MAXCOL 14
#define TABVAL 8

char line[MAXCOL];
int expandtab(int pos);
int printline(int pos);
int getblank(int pos);
int newposition(int pos);

int main(void)
{
	int pos,c;
    	pos = 0;

   	 while((c=getchar())!=EOF){
		printf("intro %d\n", pos);
 		 line[pos] = c;
	       	if( c == '\t'){
            		pos = expandtab(pos);
		}

		//sends position of newline to printline
        	if( c == '\n'){
            		printline(pos);
            		pos = 0;
        	}

		//conditional on whether the program runs functions to find last blank posiiton before 14 characters
		//
		else if(++pos >= MAXCOL){
			//printf("else if runs when pos is %d\n", pos);
			pos = getblank(pos);
            		printline(pos);
			//printf("argument stored in pos is:%d\n", pos);
			pos = newposition(pos);
        	}
	}
    	return 0;
}


//find last blank position before 14 characters
//parameter pos is 14
int getblank(int pos)
{
	//printf("getblank paramter pos value is: %d\n", pos); 
	//updates number of pos when value line[pos] is greater than zero or not equal to space 
	while(pos > 0 && line[pos] != ' '){
		--pos;	
		//printf("getblank: pos is %d", pos);
	}
	
	//no spaces in line and pos has decreased all the way to 0
	//resets for next 14 count
	if(pos == 0){
       	        //printf("maxcol");
		return MAXCOL;
	//at least one blank
	//adds 1 to the value of POS
        }else{
		printf("getblank: pos is %d +1\n", pos);
		return pos + 1; //position after the blank
        }
}

//after learning the position, print all characters up to position
int printline(int pos)
{

	printf("printline receives: %d\n", pos);
	int i;
	for(i = 0; i < pos; ++i){
		putchar(line[i]);
	}
	if(pos > 0){
	    putchar('\n');
	}    

}


int newposition(int pos)
{
	printf("newposition receives: %d\n", pos);
        int i,j;

        if(pos <= 0 || pos >= MAXCOL){
                printf("yes\n");
		return 0;
	}else{
                i = 0;
                for(j=pos;j < MAXCOL; ++j,++i)
                line[i] = line[j];
        }
        return i;
}





int expandtab(int pos)
{
    	line[pos] = ' ';

    	for(++pos; (pos < MAXCOL)&&((pos % TABVAL)!= 0); ++pos)
    		line[pos] = ' ';
	
    	if( pos >= MAXCOL){
        	printline(pos);
        	return 0;
    	}else{
        	return pos;

    	}
}

