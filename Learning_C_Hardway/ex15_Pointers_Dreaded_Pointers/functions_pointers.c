#include <stdio.h>


//function that takes pointers as arguments


void print_nameage(char **cur_name, int *cur_age, int count);

int main(int argc, char *argv[])
{
        //create two arrays
        int ages[] = { 23, 43, 12, 89, 2 };
        char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};


        int count = sizeof(ages) / sizeof(int);
        int i = 0;

	char **cur_name = names;
        int *cur_age = ages;


	print_nameage(**cur_name, *cur_age, count);

}

void print_nameage(char **cur_name, int *cur_age, int count)
{

        int i = 0;
        for(i = 0; i < count; i++){
                printf("%s is %d years old\n", *(cur_name + i), *(cur_age + i));
        }
        
}





/*






        //SECOND WAY:using pointers
        for(i = 0; i < count; i++){
                printf("%s is %d years old\n", *(cur_name + i), *(cur_age + i));
        }
        printf("---\n");



        //THIRD WAY: using arrays
        for(i = 0; i < count; i++){
                printf("%s is %d years old again \n", cur_name[i], cur_age[i]);
        }


        printf("---\n");

	//Fourth Way
        for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++){
                printf("%s lived %d years so far \n", *cur_name, *cur_age);
        }

        return 0;

}


*/

