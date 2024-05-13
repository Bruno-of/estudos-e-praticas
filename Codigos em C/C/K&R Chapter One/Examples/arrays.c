#include <stdio.h>

/* counts digits, white spaces, others characters */

main()
{
	int ch, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;

	while ((ch = getchar()) != EOF) {
		if (ch >= '0' && ch <= '9') {
			++ndigit[ch-'0'];
		}
		else if (ch == ' ' || ch == '\t' || ch == '\n') {
			++nwhite;
		}
		else {
			++nother;
		}
	}

	printf("\ndigits ={");
	for (i = 0; i < 10; ++i) {
		printf(" %d", ndigit[i]);
	}
	printf("}, white space = %d, other = %d\n", nwhite, nother);
}
