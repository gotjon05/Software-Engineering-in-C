#include <stdio.h>


//int setbits(int x, int p, int n, int y);

int main()
{

	int y, x, p, n;
	y = 171;
	x = 170;
	p = 5;
	n = 3;

        int bitmask_y = 87;     
	int bitmask_x = 164; 


	printf("The goal is to turn X into 166 from 170 by moving the least 3 bits of Y into position 5 of X");

 	printf("Step 0: Values X and Y without modification\n");
	printf("%25s\n", "XXXXXNNN");
	printf("%10d = y = 10101011\n", y);
        printf("%25s\n", "XXXXNNNX");
	printf("%10d = x = 10011010\n", x);


	printf("Step 1: Using And Bitmask to remove other bits besides the least three bits \n");
	y = y & bitmask_y;
	printf("%10d = 0000011 = y(171) & bitmask(87)\n", y);
	printf("%41s", "Representation in bits:\n");
	printf("%35s\n", "  10101011");
	printf("%35s\n", "& 01010111");
	printf("%35s\n", "00000011");
	printf("\n");
	
	
	printf("Step 2: Shift Y by 1 in order to be in position 5, lined up with values of interest in X\n");
	//y = y << 1;
	printf("%25s %d", "Y << 1\n", y << 1);
	printf("%35s", "00000011 << 1 = 00000110");

	printf("\n");

	printf("Step3: Modify X to remove 3 bits in position 5\n");
	x = x & bitmask_x;
        printf("%10d = X(170) & bitmask(164)\n", x);
	printf("%41s", "Representation in bits:\n");
        printf("%35s\n", "  "); 
        printf("%35s\n", "10011010");
        printf("%35s\n", "& 10100100");
        printf("%35s\n", "10100000");
        printf("\n");


        printf("Step4: Use OR on x and y\n");
	x = x | y;
        printf("%10d = x(170) | y(6)\n", x);
        printf("%41s", "Representation in bits:\n");
        printf("%35s\n", "  ");
        printf("%35s\n", "10101010");
        printf("%35s\n", "& 00000110");
        printf("%35s\n", "10100110");
        printf("\n");


}

