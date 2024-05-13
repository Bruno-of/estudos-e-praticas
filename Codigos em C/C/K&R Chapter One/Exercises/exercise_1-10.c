#include <stdio.h>

/*Write a program to copy its input to its output,
  replacing each tab by \t, each backspace by\b, and
  each backslash by \\. This makes tabs and backspaces
  visible in an unambiguous way.*/

main()
{
	int ch;

		while ((ch = getchar()) != EOF) {
		if (ch == '\t') {
			putchar('\\'); /* The double backslash stands for the backslash itself on output.*/
			putchar('t');
		}
		else if (ch == '\b') {
			putchar('\\');
			putchar('b');
		}
		else if (ch == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else {
			putchar(ch); /* Prints every other character except for tab, */
		}				 /* backspace and backslash. */
	}
}

/*https://stackoverflow.com/questions/22903420/the-c-programming-language-ch-1-exercise-1-10-getchar-and-putchar*/
