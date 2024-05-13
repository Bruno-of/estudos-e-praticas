#include <stdio.h>

main()
{
	double nc;

	for (nc = 0; getchar() != EOF; ++nc) /* The FOR and WHILE loops tests the condition between parentheses BEFORE they proceed to the body. If there is nothing to do, nothing is done, even if that means not going through the loop body. */
		;

	printf("%.0f\n", nc);
}
