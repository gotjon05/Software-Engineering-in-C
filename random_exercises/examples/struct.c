#include <stdio.h>

int main()
{

	//student structure template
	struct student{
		char firstname[64];
		char lastname[64];
		char id[64];
		int score;

	};
	//create student structure variable
	struct student std1;

	printf("Enter First Name:");
	scanf("%s", std1.firstname);

	printf("Enter Last Name:");
	scanf("%s", std1.lastname);

	printf("Enter Score:");
	scanf("%d", &std1.score);
	
	printf("Firstname: %s\n", std1.firstname);
	printf("Lastname: %s\n", std1.lastname);
	printf("Score: %d\n", std1.score);

	return 0;

}
