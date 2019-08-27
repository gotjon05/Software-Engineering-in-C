#define YES	1
#define NO	0
#include <stdio.h>

int htoi(char s[]);
int main(){


	char s[] = {'3', '0xA', 'a'};
	htoi(s);
	printf("%x", s);
}




int htoi(char s[])
{
	int hexdigit, i, index, n;
	
	i=0;
	if(s[i] == '0'){
		++i;
		if(s[i] == 'x' || s[i] == 'X'){
			++i;
		}
	}
	n = 0;
	index = YES;
	//i will be the last value assigned to it when the loop starts.
	for(; index == YES; ++i){
		if(s[i] >= '0' && s[i] <= '9'){
			hexdigit = s[i] - '0';
		} else if(s[i] >= 'a' && s[i] <= 'f'){
			hexdigit = s[i] - 'a' + 10;
		} else if(s[i] >= 'A' && s[i] <= 'F'){
			hexdigit = s[i] - 'A' + 10;
		}else{
			index = NO;
		}
		if(index == YES){
			n = 16 * n + hexdigit;
		}
		return n;
	}
}
