#include <stdio.h>

void rcomment(int c);
void in_comment(void);
void echo_quote(int c);

/* remove all comments frm a valid C program */

int main()
{
	int c, d;
	while((c = getchar()) != EOF){
		rcomment(c);
	return 0;
	}
}

/* read each character, remove comments */
void rcomment(int c)
{
	int d;
	if(c == '/'){
		if((d = getchar()) == '*'){
			in_comment();
		}
		else if(d == '/'){
			putchar(c);
			rcomment(d);
		
		}else{
			putchar(c);
			putchar(d);
		
		}
	
	}
	//weird syntax?
	else if(c == '\'' || c == '"'){
		echo_quote(c);
	}else{
		putchar(c);
	}

}

/* in comment: inside a valid comment */
void in_comment(void)
{
	int c, d;
	c = getchar(); //previous character
	d = getchar(); //curr character	
	while(c != '*' || d != '/'){ //search for end
		c = d;
		d = getchar();
	}
}


/*echo quote: echo characters without quotes */
void echo_quote(int c)
{
	int d;
	putchar(c);
	while((d = getchar()) != c){  //search for end
		putchar(d);
		if(d == '\\'){
			putchar(getchar());	//ignore escape sequences
		}
	}
	putchar(d);
}


