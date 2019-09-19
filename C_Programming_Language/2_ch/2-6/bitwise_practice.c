/*
Resources:
https://www.youtube.com/watch?v=nSKT6Ph8u9Q
much better -- https://www.youtube.com/watch?v=Ix9U1qR3c3Q


*/


#include <stdio.h>

int main()
{

	unsigned int a = 60;
	unsigned int b = 13;
	int c = 0; 

	//bitwise And operator 
	//1 if the two bits are 1
	c = a & b;
	printf("Bitwise And is %d\n", c);

	//bitwise Or operator 
	//1 if the two bits have any 1
	c = a | b; 
	printf("Bitwise Or is %d\n", c);

	//bitwise xor 
	//1 if the two bits are different
	c = a ^ b; 
	printf("Bitwise XOR is %d\n", c);

	//bitwise one's complement 
	//unary, inverts all bits of it 
	c = ~a;
	printf("Bitwise Ones Complement %d\n", c);


	//bitwise left shift operator 
	//left operands value is moved left by the number of bits specified by the right operand.

	printf("watch it multiply number by 2\n");
	c = a << 1;
	printf("a<<1 = %d\n", c);
	c = a << 2;
	printf("a<<1 = %d\n", c);
	c = a << 3;
        printf("a<<2 = %d\n", c);


}



