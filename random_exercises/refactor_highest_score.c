/*
https://www.geeksforgeeks.org/using-sizof-operator-with-array-paratmeters/
//array parameters are treated like pointers

I want to efficiently get the highest score for each student by passing each array to the same expression that finds highest respective score
*/

#include <stdio.h>

void find_highest(int arr[], int count);

int main()
{
        int student1[] = {80, 90, 50};
	int student2[] = {60, 70, 80};
	int student3[] = {50, 80, 60};

        int count = sizeof(student1)/sizeof(int);
        int i = 0;
     
	find_highest(student1, count);
        find_highest(student2, count);
        find_highest(student3, count);



}	
//prints respective student highest score
void find_highest(int arr[], int count)
{
        int i = 0;
	int highest = 0;

	for(i = 0; i < count; i++){
                if(highest < arr[i]){
                        highest = arr[i];
                }       
        }
        printf("%d\n", highest);
}
