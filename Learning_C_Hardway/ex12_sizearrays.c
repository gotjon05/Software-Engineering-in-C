#include <stdio.h>


int main(int argc, char *argv[])
{	
	//moved char array fullname above areas	
	char full_name[] = {'J','o', 'n','a','t','h','a','n', '\0'};
	
	int areas[] = {10, 12, 13, 14, 20};
	//creating array of 8 char
	//name and full_name are identifical methods for creating char array
	char name[] = "Jonathan";

	//with null terminator in char array
	//char full_name[] = {'J','o', 'n','a','t','h','a','n', '\0'};

	//without null terminator
        //char full_name[] = {'J','o', 'n','a','t','h','a','n'};

	printf("the size of an int: %ld\n", sizeof(int));
	printf("the size of areas (int[]): %ld\n", sizeof(areas));
	printf("the number of ints in areas is %ld\n", sizeof(areas)/ sizeof(int));
	printf("the first area is %d, the second is %d\n", areas[0], areas[1]);
	printf("the size of char: %ld\n", sizeof(char));
	printf("the size of name (char[]): %ld\n", sizeof(name));
	printf("the size of chars: %ld\n", sizeof(name) / sizeof(char));
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
	return 0;







}
