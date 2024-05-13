#include <stdio.h>

// copy its input to its output, replacing each
// tab by \t, each backspace by \b, and each backslash
// by \\.
// This makes tabs and backspaces visible in an unambiguous way.

main ()
{
	int ch;

	while ((ch = getchar()) != EOF) {
		if (ch == '\t') {
			putchar('\\');
			putchar ('t');
		}
		else if (ch == '\b') {
			putchar('\\');
			putchar('\b');
		}
		else if (ch == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else {
			putchar(ch);
		}
	}
}
