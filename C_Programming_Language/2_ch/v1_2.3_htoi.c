// https://stackoverflow.com/questions/12701379/format-specifier-for-hex-char-in-c
// https://stackoverflow.com/questions/18438946/format-specifier-02x
// http://www.asciitable.com/
#include <stdio.h>
/*i
write function htois which converts a string of hexadecimal digits into its equivlent integer value.
Allowable digits are 0 through 9, a through f, and A through F. 

*/

int htois(char hex[], int size);

int main(){
	
	//issue storing big hexadecimal numbers in array
	char hex[] = {'A', 'C', 'B', 'F'};
	
	int size; 
	size = sizeof(hex)/sizeof(char);
	htois(hex, size);

}

/*
converts a string of hexadecimal digits into equivelent integer value
	read through array, right to left
	

*/

int htois(char hex[], int size)
{
	int i, exponent;
	exponent = 0;

	//walkthrough array, right to left
	for(i = size; i >= 0; --i){


//		hex[i] = hex[i] / 16^exponent;
//		++exponent;
		printf("\n%02x", hex[i]);
		
	}
	
}
