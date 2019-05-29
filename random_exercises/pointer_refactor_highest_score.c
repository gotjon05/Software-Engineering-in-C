#include <stdio.h>

void find_highest(int arr[], int count);

int main()
{
        int student1[] = {80, 90, 50};
//      int student2[] = {60, 70, 80};
//      int student3[] = {50, 80, 60};

        int count = sizeof(student1)/sizeof(int);
        int i = 0;
	int *score = student1;

        for(i = 0; i < count; i++){
                find_highest(*(score + i) , count);

        }


}
//prints respective student highest score
void find_highest(score, int count)
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

