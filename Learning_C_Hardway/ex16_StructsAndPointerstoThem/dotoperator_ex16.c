#include <stdio.h>
#include <string.h>


//How to initialize it using the x.y (period) character instead of the x->y syntax.


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
	// structure can be initialized by following def with list initlaizers 
	struct Person who = {.name = "Joe Alex", .age = 32, .height = 6, .weight = 189 };

/*
	struct Person p1;
	strcpy(p1.name, "Joe Alex");
	p1.age =  32;
	p1.height = 6;
	p1.weight = 189;

	printf("%s\n", p1.name);
	printf("\t%d\n", p1.age);
	printf("\t%d\n", p1.height);
	printf("\t%d\n", p1.weight);
*/
	printf("%s\n", who.name);
	printf("\t%d\n", who.age);
	printf("\t%d\n", who.height);
	printf("\t%d\n", who.weight);





}
