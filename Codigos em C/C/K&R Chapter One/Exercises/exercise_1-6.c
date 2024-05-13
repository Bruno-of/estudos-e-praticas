#include <stdio.h>

main ()
{
	int c;

	c = getchar() != EOF;

	printf("The value is: %d", c);

	/* Result: the expression "getchar() != EOF" is equal to "1" */
}
