#include <stdio.h>

int main()
{


	struct student{
		char firstname[64];
		char lastname[64];
		char id[64];
		int score;
	};


	//student structure array variable
	struct student stdArr[3];

	int i;

	for(i = 0; i < 3; i++){
		printf("first name:");
		scanf("%s", stdArr[i].firstname);
		printf("last name");
		scanf("%s", stdArr[i].lastname);
	

	}



	for(i = 0; i < 3; i++){
		printf("firstname: %s\n", stdArr[i].firstname);
		printf("lastname: %s\n", stdArr[i].lastname);
	}


}
