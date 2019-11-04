//rewrite the temp conversion program to use function for conversion 
//print celsius to farenheit 

#include <stdio.h>

int get_celsius(int f, int max);

int main()
{

	int MAX = 100;
	int buffer[MAX];
	for(int i = 0; i < MAX; i++){
		buffer[i] = 0;
	
	}
	int c;
	while((c = getchar()) != EOF){
		buffer[c];
		get_celsius(buffer[c], MAX);	
	}	
}

int get_celsius(int buffer[c], int MAX)
{
	int i, celsius;
	for(i = 0; i < MAX; i++){
		celsius = (5/9)*(i-32);
		printf("%d", celsius);
	}
}




