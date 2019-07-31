#include <stdio.h>

void swap(int *px, int *py);

int main()
{
	int a = 3;
	int b = 9;
	printf("Original %d %d\n", a, b); 	

	swap(&a, &b);
	printf("Modified %d %d\n", a, b);  

}


void swap(int *px, int *py)
{
	int temp;
	temp = *px;
	*px = *py;
	*py = temp;

}

