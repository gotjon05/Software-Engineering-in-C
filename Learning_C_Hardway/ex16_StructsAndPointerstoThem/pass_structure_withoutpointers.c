//Pass structure to other functions without using a pointer
//https://www.dyclassroom.com/c/c-passing-structure-to-function

#include <stdio.h>

	struct Person{
                //needs to be set as array and allocated memory
                //char name[64];
                char *name;
                int age;
                int height;
                int weight;
        };



int main()
{
        struct Person Person_creat(char *name, int age, int height, int weight)
	{



	}









}
