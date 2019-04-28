#include <stdio.h>


/*Count white space, others */

main()
{
	int c, i, white_space, nother;
	int ndigit[10];

	white_space = nother = 0;
	for(i = 0; i < 10; i++)
		ndigit[i] = 0;

	while((c = getchar()) != EOF)
		if(c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if(c == ' ' || c == '\n' || c == '\t')
			++white_space;
		else
			++nother;

	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);

	printf(", white space = %d, other = %d\n", white_space, nother); 	

	



}
