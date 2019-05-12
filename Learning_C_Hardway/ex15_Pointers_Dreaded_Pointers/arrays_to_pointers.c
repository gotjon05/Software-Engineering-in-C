#include <stdio.h>


int main(int argc, char *argv[])
{
        //create two arrays
        int ages[] = { 23, 43, 12, 89, 2 };
        char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};


        int count = sizeof(ages) / sizeof(int);
        int i = 0;


	for(i = 0; i < count; i++){
		printf("%s is %d years old\n", names[i], ages[i]);

	}




/*
        char **cur_name = names;
        int *cur_age = ages;

        //SECOND WAY:using pointers
        for(i = 0; i < count; i++){
                printf("%s is %d years old\n", *(cur_name + i), *(cur_age + i));
        }
        printf("---\n");



	//FOURTH WAY: Using Pointers
        for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++){
                printf("%s lived %d years so far \n", *cur_name, *cur_age);
        }

        return 0;


*/

}

