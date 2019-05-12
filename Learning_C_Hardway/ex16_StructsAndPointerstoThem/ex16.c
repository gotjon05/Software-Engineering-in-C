
//standart input/output
#include <stdio.h>
//test assumptions ex. check if pointer returns malloc
// ex. assert(who != NULL);
#include <assert.h>
//NULL is a library macro
#include <stdlib.h>
//defines null
#include <string.h>

//Declare structure variables without initializing 
////similar to class in javascript
//new compound type: structure with four elements 
//allows for the referencing of elements
struct Person{
	char *name;
	int age;
	int height;
	int weight;
};

//way to create structures
struct Person *Person_create(char *name, int age, int height, int weight)
{

	//ask malloc for memory allocation from OS
	//passes size of structure to malloc to allocate
	struct Person *who = malloc(sizeof(struct Person));
	//check if valid piece of memory from malloc and did not return NULL invalid pointer
	assert(who != NULL);

	//initialize each feild of struct Person
	//strdup -- duplicate string for the name to make sure structure owns it. 
	//similar to malloc and it also copies original string the memory it creates
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	return who;

}

// garbage collection-- 
void Person_destroy(struct Person *who)
{
	//assert to make sure not getting bad input
	assert(who != NULL);
	//function free to return memory from malloc and strdup -- or you get a memory leak!
	//why free name in particular then every other feild of struct at once with who
	free(who->name);
	free(who);
}

//function prints people
//pass whole cohesive grouping to person_print
//x->y syntax to get feild from structure to print
void Person_print(struct Person *who)
{
	printf("Name: %s\n", who->name);
	printf("\tAge: %d\n", who->age);
	printf("\tHeight: %d\n", who->height);
	printf("\tWeight: %d\n", who->weight);
}

int main(int argc, char *argv[])
{
	//create two people
	struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
	
	struct Person *frank = Person_create("Frank Blank", 20, 72, 180);

	//see where the program put your structure in memory
	printf("Joe is at memory location %p:\n", joe);
	Person_print(joe);

	printf("Frankis at memory location %p:\n", frank);
	Person_print(frank);

	joe->age += 20;
	joe->height -= 2;
	joe->weight += 40;
	Person_print(joe);


	frank->age += 20;
	frank->weight += 20;
	Person_print(frank);
	Person_print(NULL);
	Person_destroy(joe);
	Person_destroy(frank);
	//Person_destroy(NULL);
	return 0;
}
	





















