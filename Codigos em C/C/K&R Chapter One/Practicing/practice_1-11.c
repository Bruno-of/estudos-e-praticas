#include <stdio.h>

// prints its input one word per line

#define IN 1
#define OUT 0

main()

{
	int ch, state;

	state = OUT;
	while ((ch = getchar()) != EOF) {
		if (ch != ' ' && ch != '\t' && ch != '\n') {
			state = IN;
			putchar(ch);
		}
		else if (state == IN) {
			state = OUT;
			putchar('\n');
		}
	}
}
