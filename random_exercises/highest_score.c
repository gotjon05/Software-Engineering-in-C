/*
* Write a program in C to take integer marks (0-100) of 3 tests of 4 students and print the highest score of respective student
*
* Enter marks of 3 tests of Student #1: 80 90 50
* Enter marks of 3 tests of Student #2: 60 70 80
* Enter marks of 3 tests of Student #3: 50 80 60
* Enter marks of 3 tests of Student #4: 90 70 50

4 arrays of individual students with respective scores
forloop(store highest
*
*/

#include <stdio.h>

int main()
{
	int student1[] = {80, 90, 50};
	int student2[] = {60, 70, 80};
	int student3[] = {50, 80, 60};

	int count = sizeof(student1)/sizeof(int);
	int i = 0;
	int highest1, highest2, highest3;
	highest1 = highest2 =  highest3 = 0;	


	for(i = 0; i < count; i++){
		if(highest1 < student1[i]){
			highest1 = student1[i];

		}	
		if(highest2 < student2[i]){
                        highest2 = student2[i];
		}
		if(highest3 < student3[i]){
			highest3 = student3[i];
		}
	}
	printf("highest score for student1 is %d\n", highest1);
        printf("highest score for student2 is %d\n", highest2);
        printf("highest score for student3 is %d\n", highest3);





}


