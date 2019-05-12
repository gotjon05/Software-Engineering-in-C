#include <stdio.h>


int main(int argc, char *argv[])
{
        //create two arrays
        int ages[] = { 23, 43, 12, 89, 2 };
        char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};


        int count = sizeof(ages) / sizeof(int);
        int i = 0;

	while(i < count-1){
	i++;
	printf("%s has %d years alive\n", names[i], ages[i]);

	}


/*
        //FIRST WAY: using arrays
        for(i = 0; i < count; i++){
                printf("%s has %d years alive\n", names[i], ages[i]);

        }
        printf("---\n");


*/

        char **cur_name = names;
        int *cur_age = ages;






	while( i < count-1){
		i++;
		printf("%s is %d years old\n", *(cur_name + i), *(cur_age + i));

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


	//FORTH WAY
        for(cur_name = names, cur_age = ages; (cur_age - ages) < count; cur_name++, cur_age++){
                printf("%s lived %d years so far \n", *cur_name, *cur_age);
        }

        return 0;
/
*/

}

