# Exercise 15: Pointers, Dreaded Pointers



## Original Code  
```c
#include <stdio.h>


int main(int argc, char *argv[])
{

        int ages[] = { 23, 43, 12, 89, 2 };
        char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};


        int count = sizeof(ages) / sizeof(int);
        int i = 0;

        //FIRST WAY: using arrays
        for(i = 0; i < count; i++){
                printf("%s has %d years alive\n", names[i], ages[i]);

        }
        printf("---\n");


        char **cur_name = names;
        int *cur_age = ages;


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

	//FOURTH WAY: using pointers
        for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++){
                printf("%s lived %d years so far \n", *cur_name, *cur_age);
        }

        return 0;

}

```

## How To Break it


## Make cur_age point at names
Resources 
https://developerinsider.co/type-casting-c-programming/

### The compiler error from pointing int pointer cur_age to char array names
```
int *cur_age = names;

ex15_pointers.c:23:17: warning: initialization of ‘int *’ from incompatible pointer type ‘char **’ [-Wincompatible-pointer-types]
  int *cur_age = names;
                 ^~~~~
```
### The basic syntax for creating an explicit type cast is (type) expression. I tried this and got a compiler error
```
type_casting.c: In function ‘main’:
type_casting.c:19:24: warning: cast from pointer to integer of different size [-Wpointer-to-int-cast]
         int *cur_age = (int)names;
                        ^
type_casting.c:19:24: warning: initialization of ‘int *’ from ‘int’ makes pointer from integer without a cast [-Wint-conversion]
```



##Modified program: 


```c
#include <stdio.h>


int main(int argc, char *argv[])
{
        int ages[] = { 23, 43, 12, 89, 2 };
        char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};


        int count = sizeof(ages) / sizeof(int);
        int i = 0;

        for(i = 0; i < count; i++){
                printf("%s has %d years alive\n", names[i], ages[i]);

        }
        printf("---\n");

        char **cur_name = names;


	// The Original
        int *cur_age = ages;

        //explicit typecasting from char to int
        int *cur_age = (int*)names;




        for(i = 0; i < count; i++){
                printf("%s is %d years old\n", *(cur_name + i), *(cur_age + i));
        }
        printf("---\n");

        return 0;

}

```
</details>



