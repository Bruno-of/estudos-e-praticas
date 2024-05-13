#include <stdio.h>

// copy its input to its output, replacing each string
// of one or more blanks by a single blank.

main()
{
	int ch;

	while ((ch = getchar()) != EOF) {
		putchar(ch);
		if (ch == ' ' || ch == '\t') {
			while ((ch = getchar()) == ' ' || (ch = getchar()) == '\t')
				;
			if (ch != ' ' || ch != '\t')
				putchar(ch);
		}
	}
}
