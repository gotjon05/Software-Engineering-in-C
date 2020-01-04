#include <stdio.h>

int main()
{




	int a[] = {1, 2, 3, 4, 5};
	int i = 0;


	++a[i];
	printf("a[i]++ increments value at index i\n");
	printf("index i: %d value: %d\n", i, a[i]);
	a[i]++;
        printf("a[i]++ increments value at index i\n");
        printf("index i: %d value: %d\n", i, a[i]);
	a[i]++;
        printf("a[i]++ increments value at index i\n");
        printf("index i: %d value: %d\n", i, a[i]);


	a[i++];
        printf("a[i++] increments index i but not the value at index i\n");
	printf("index i: %d value: %d\n", i, a[i]);
	a[i++];
        printf("a[i++] increments index i but not the value at index i\n");
        printf("index i: %d value: %d\n", i, a[i]);
	a[i++];
        printf("a[i++] increments index i but not the value at index i\n");
        printf("index i: %d value: %d\n", i, a[i]);


	
}	
