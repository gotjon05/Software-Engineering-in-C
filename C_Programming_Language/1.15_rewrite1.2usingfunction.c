
#include <stdio.h>
//float function paramater
float tem(int);

main()
{
    int i;

    printf("Fahrenheit-Celsius table\n\n");

//for loop for farenheight value passed to tem function
    for (i = 0; i <= 300; i += 20)
	//prints var cel to the calling function
        printf("%3d\t%6.2f\n", i, tem(i));
    return 0;
}

float tem(int fahr)
{
    float cel;
    cel = (5.0 / 9.0) * (fahr - 32.0);
    return cel;
}
