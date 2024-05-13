#include <stdio.h>

/* write a program to print a histogram
   of the lenght of words in its input
   with the bars horizontal. */

main()
{
	int ch, nchar;

	for (nchar = 1; (ch = getchar()) != EOF; ++nchar) {
		if (ch != ' ' && ch != '\t' && ch != '\n') {
			printf("\\");
		}
		else {
			putchar('\n');
		}
	}
}
