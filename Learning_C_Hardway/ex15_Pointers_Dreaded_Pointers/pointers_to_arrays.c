
#include <stdio.h>


int main(int argc, char *argv[])
{
        //create two arrays
        int ages[] = { 23, 43, 12, 89, 2 };
        char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};


        int count = sizeof(ages) / sizeof(int);
        int i = 0;

	int *age_pointer = ages;
	char **names_pointer = names;


	for(i = 0; i < count; i++){
		printf("%s is %d years old", *(names_pointer + i), *(age_pointer + i));
	        printf("---\n");

		
	}
//	printf("---\n");	


}


/*        //FIRST WAY: using arrays
        for(i = 0; i < count; i++){
                printf("%s has %d years alive\n", names[i], ages[i]);

        }
        printf("---\n");


        char **cur_name = names;
        int *cur_age = ages;


        //THIRD WAY: using arrays
        for(i = 0; i < count; i++){
                printf("%s is %d years old again \n", cur_name[i], cur_age[i]);
        }


        printf("---\n");


*/



