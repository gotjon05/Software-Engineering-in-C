// https://www.dyclassroom.com/c/c-structures
// https://www.dyclassroom.com/c/c-pointers-and-structures

#include <stdio.h>

int main(void) {
    
// student structure
	struct student {
		char id[15];
    		char firstname[64];
		char lastname[64];
    		float points;
 	};
  
  // student structure variable
  	struct student std;
  
  // student structure pointer variable
  	struct student *ptr = NULL;
  
  // assign std to ptr
  	ptr = &std;
  
  // get student detail from user
  	printf("Enter ID: ");
	scanf("%s", ptr->id);
  	printf("Enter first name: ");
  	scanf("%s", ptr->firstname);
  	printf("Enter last name: ");
  	scanf("%s", ptr->lastname);
  	printf("Enter Points: ");
  	scanf("%f", &ptr->points);
  
  // display result via std variable
  	printf("\nResult via std\n");
  	printf("ID: %s\n", std.id);
  	printf("First Name: %s\n", std.firstname);
  	printf("Last Name: %s\n", std.lastname);
  	printf("Points: %f\n", std.points);
  
  // display result via ptr variable
  	printf("\nResult via ptr\n");
  	printf("ID: %s\n", ptr->id);
  	printf("First Name: %s\n", ptr->firstname);
  	printf("Last Name: %s\n", ptr->lastname);
  	printf("Points: %f\n", ptr->points);
  
  return 0;
}

