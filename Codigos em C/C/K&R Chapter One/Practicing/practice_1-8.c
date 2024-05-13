#include <stdio.h>

// counts blanks, tabs & newlines

main()
{
	int ch, nb, nt, nl;

	nb = nt = nl = 0;
	while ((ch = getchar()) != EOF) {
		if (ch == ' ') {
			++nb;
		}
		else if (ch == '\t') {
			++nt;
		}
		else if (ch == '\n') {
			++nl;
		}
		else
			;
	}

	printf("blanks: %d tabs: %d newlines: %d", nb, nt, nl);
}
