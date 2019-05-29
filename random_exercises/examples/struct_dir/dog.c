https://overiq.com/c-programming-101/pointer-to-a-structure-in-c/

int main()
{
	//structure with four elements
	struct dog{

		char name[10];
		char breed[10];
		int age;
		char color[10];
	};

	struct dog spike;
	//declare a pointer to a structure of type struct dog with compound data types
	//we can now assign address of variable spike to ptr_dog
	struct dog *ptr_dog;
	
	//ptr_dog now points to structure variable spike
	ptr_dog = &spike;

	




}
