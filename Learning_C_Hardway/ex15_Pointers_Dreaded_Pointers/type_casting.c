#include <stdio.h>

int main(int argc, char *argv[])
{
        //create two arrays
        int ages[] = { 23, 43, 12, 89, 2 };
        char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};


        int count = sizeof(ages) / sizeof(int);
        int i = 0;


 	char **cur_name = names;

        //Original 
        //int *cur_age = ages;
	//explicit typecasting from char to int
        int *cur_age = (int*)names;


	for(i = 0; i < count; i++){
                printf("%s is %d years old\n", *(cur_name + i), *(cur_age + i));
        }
        printf("---\n");

}

