#include <stdio.h>

int main()
{
	
	//defines char array baseDigits and initalizes 16 elements to the 16 hexadecimal char
	const char baseDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', 'A', 'B', 'C', 'D', 'E', 'F'};

	int convertedNumber[64];
	long int numberToConvert;
	int nextDigit, base, index = 0;

	//get number and base
	printf("Number to be converted? ");
	scanf("%ld", &numberToConvert);
	printf("Base?");
	scanf("%i", &base);

	// do chosen so that at least one digit appears in convertedNumber array even if zero inputted
	//when do loop is completed, value of the variable index is the number of digits in the converted number- but in the wrong order
	do {
		//modulo of original number by base stored in array of convertedNumber
		convertedNumber[index] = numberToConvert % base;
		//index that increments where result is stored in array
		++index;
		//after every increment of index, number being modded is changed by dividing it by base
		numberToConvert = numberToConvert / base;

	}
	//end condition for do while 
	while(numberToConvert != 0);


	// display results in reverse order 
	printf("converted number = ");
	for(--index; index >= 0; --index){
		//each digit from convertedNUmber array is assigned to variable nextDigit
		//nextDigit stores array
		nextDigit = convertedNumber[index];
		//lookup is then made inside array baseDigits using nextDigit as index 
		printf("%c", baseDigits[nextDigit]);
	}	
	printf("\n");
	return 0;

}
