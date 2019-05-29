#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

	//Person structure with 4 elements, compound data type
	struct Person{
		char *name;
		int age;
		int height;
		int weight;
	};

	//Person_create is a pointer to the structure of type struct Person
	//Does not occupy any memory until we create structure variable
	struct Person *Person_create(char *name, int age, int height, int weight)
	{
		//structure variable
		struct Person *who = malloc(sizeof(struct Person));
		assert(who != NULL);
		//initialize each feild of struct Person with x->y to set
		who->name = strdup(name);
		who->age = age;
		who->height = height;
		who->weight = weight;

		return who;
	}
	
	//use function free to return memory from malloc and strdup to avoid memory leak 
	void Person_destroy(struct Person *who)
	{
		assert(who != NULL);
		free(who->name);
		free(who);
	}
	
	//x->y to get field from structure to print it. 
	void Person_print(struct Person *who)
	{
		printf("Name: %s\n", who->name);
		printf("\tAge: %d\n", who->age);
		printf("\tHeight: %d\n", who->height);
		printf("\tWeight: %d\n", who->weight);
	}


	int main(int argc, char *argv[])
	{
		//returns Person who into pointer object joe/frank
		struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
		struct Person *frank = Person_create("Frank Blank", 20, 72, 180);
		
		Person_print(joe);
                printf("Joe is at memory location %p:\n", joe);
		Person_print(frank);
                printf("Frank is at memory location %p:\n", frank); 
		
		joe->age += 20;
		joe->height -= 2;
		joe->weight += 40;
		Person_print(joe);

		frank->age += 20;
		frank->weight += 20;
		Person_print(frank);
	
		Person_destroy(joe);
		Person_destroy(frank);

		return 0;
		


	}
















