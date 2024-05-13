#include <stdio.h>

/* print a histogram of the lengths of
   of words in its input */

main()
{
	int ch;

	while ((ch = getchar()) != EOF) {
		if (ch == ' ' || ch == '\t' || ch == '\n') {
			putchar('\n');
		}
		else {
			putchar('\\');
		}
	}
}
