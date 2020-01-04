
#include <stdio.h>

int powers(int m, int n);

int main()
{
	int i;
	for(i = 0; i < 10; ++i){
		printf("%d %d %d\n", i, powers(2,i), powers(-3,i));
	return 0;
	
	}



}


	//parameter base is the 1st argument 2 and -3 
	//parameter n is the 2nd argument i
int powers(int base, int n)
{
	int p, i;
	p = 1;
	for(i = 1; i <= n; ++i){
		p = p * base;
	return p;
	}

	
	
}


