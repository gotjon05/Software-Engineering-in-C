#include <stdio.h>


int main()
{
	struct date
	{
		int month;
		int day;
		int year;
	
	};
	
	struct date today, tomorrow;
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	printf("enter todays date (mm dd yyyy):");
	scanf("%i%i%i", &today.month, &today.day, &today.year);
	
	if(today.day != daysPerMonth[today.month-1]){
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}







}





