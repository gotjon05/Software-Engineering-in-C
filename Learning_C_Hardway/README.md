hello world

Exercise 15
```
#include <stdio.h>


int main(int argc, char *argv[])
{
        //create two arrays
        int ages[] = { 23, 43, 12, 89, 2 };
        char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};


        int count = sizeof(ages) / sizeof(int);
        int i = 0;

        //first way using indexing
        //using i to index into the array
        for(i = 0; i < count; i++){
                printf("%s has %d years alive\n", names[i], ages[i]);

        }
        printf("---\n");

        //pointing the name ages at the begining of memory block cur_age
        int *cur_age = ages;
        char **cur_name = names;


        //second way of using pointers
        //indexing into block by taking the base address of ages and getting the element
        for(i = 0; i < count; i++){
                printf("%s is %d years old\n", *(cur_name + i), *(cur_age + i));
        }
        printf("---\n");



        //third way, pointers are just arrays
        for(i = 0; i < count; i++){
                printf("%s is %d years old again \n", cur_name[i], cur_age[i]);
        }


        printf("---\n");

        for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++){
                printf("%s lived %d years so far \n", *cur_name, *cur_age);
        }

        return 0;

}
```
