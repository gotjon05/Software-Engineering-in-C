/*
https://www.oreilly.com/library/view/c-in-a/0596006977/ch04.htm
https://www.dyclassroom.com/c/c-type-conversion

What is implicit type conversion? 
	When operands or function arguments are mismatched types, program converts them to a uniform type using a  hierarchy ladder of implicit type conversion


What is an explicit type conversion? 
	Manual conversion of expression to different type	

** Try and make cur_age point at names using C cast to force it **

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	// create two arrays we care about
    	int ages[] = { 23, 43, 12, 89, 2 };
    	char *names[] = {"Alan", "Frank","Mary", "John", "Lisa"};

    	// safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
    	int i = 0;

    	// first way using indexing
    	for (i = 0; i < count; i++) {
        	printf("%s has %d years alive.\n", names[i], ages[i]);
    	}

    	printf("---\n");

    	// setup the pointers to the start of the arrays
	//matching int pointer type
    	int *cur_age = (int*)names;
    	char **cur_name = names;

    	// second way using pointers
    	for (i = 0; i < count; i++) {
       		printf("%s is %d years old.\n", *(cur_name + i), *(cur_age + i));
    	}

    	printf("---\n");

    	// third way, pointers are just arrays
    	for (i = 0; i < count; i++) {
        	printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    	}

    	printf("---\n");

    	// fourth way with pointers in a stuipd conplex way
    	for (cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++) {
        	printf("%s lived %d years so far.\n", *cur_name, *cur_age);
    	}

    	return 0;
}



