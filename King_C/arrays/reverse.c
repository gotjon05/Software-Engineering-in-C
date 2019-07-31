#include <stdio.h>

#define N 10

int main(void)
{
	int a[N], i; 

	printf("Enter %d numbers: ", N);
	for(i = 0; i < N; i++)
		//first loop puts user value in address a[0]
		scanf("%d", &a[i]);

	printf("in reverse order:");
	for(i = N - 1; i >= 0; i--)
		printf(" %d", a[i]);
	
	printf("\n");
	return 0;
}
