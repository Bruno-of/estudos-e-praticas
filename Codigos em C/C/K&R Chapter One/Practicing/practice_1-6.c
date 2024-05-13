#include <stdio.h>

// verify that the expression getchar() != EOF is 0 or 1

main()
{
	int expression = getchar() != EOF;
	printf("%d", expression);
}
