#include <stdio.h>

#define IN 1 /* Inside a word */
#define OUT 0 /* Outside a word  */

/* count lines, words and characters in input */
main()
{
	int ch, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((ch = getchar()) != EOF) {
		++nc;
	if (ch == '\n') {
		++nl;
		}
	if (ch == ' ' || ch == '\t' || ch == '\n') {
		state = OUT;
		}
	else if (state == OUT) {
		state = IN;
		++nw;
		}
	}
	printf("\nLines: %d\nWords: %d\nCharacters: %d", nl, nw, nc);
}
