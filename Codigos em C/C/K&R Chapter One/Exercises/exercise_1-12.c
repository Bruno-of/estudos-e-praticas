#include <stdio.h>

#define IN 1
#define OUT 0

main()
{
	int ch, state;

	state = OUT;
	while ((ch = getchar()) != EOF) {
		if (ch == ' ' || ch == '\t' || ch == '\n') {
			putchar('\n');
			state = OUT;
		}
		else if (state == OUT) {
			putchar(ch);
			state == IN;
		}
	}
}
