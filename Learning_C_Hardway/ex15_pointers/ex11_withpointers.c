//go back to some other program that uses arrays and try to use pointers instead
//ex11

#include <stdio.h>

int main()
{

//	int arr1[4] = {0};
        char *arr2[3] = {"A", "B", "C"};

        int k, size2;


//	size1 = sizeof(arr1)/sizeof(int);
        size2 = sizeof(arr2)/sizeof(char);


//	int *point1 = arr1;
	char **point2 = arr2;


//	for(i = 0; i < size1; i++){
//		printf("numbers: %d\n", *(point1 + i));
//	}

	for(k = 0; k < size2; k++){
		printf("letters: %s\n", *(point2 + k));
	}



/*

	int num[] = {1,2,3,4};
	char *numbre[] = {"Jonathan"};
	
	num_count = sizeof(zero)/sizeof(int);
	
	int *new_numbers = num;
	char **my_name = numbre;
	

	for(i = 0; i < num_count; i++){
		printf("%d\t%s", *(num+i), *(numbre+i));

	}

*/
}
