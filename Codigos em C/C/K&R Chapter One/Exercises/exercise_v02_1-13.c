#include <stdio.h>

main()
{
	int ch, i, nchar;
	int lengths[11];

	nchar = 0;
	for (i = 0; i < 11; ++i)
		lengths[i] = 0;

	while ((ch = getchar()) != EOF) {
		if (ch != ' ' && ch != '\t' && ch != '\n') {
			++nchar;
		}
		else {
			if (nchar > 0 && nchar <= 10) {
				++lengths[nchar - 1];
			nchar = 0;
			}
		}
	}

	for (i = 1; i < 11; ++i)
		printf("%2d |\n", i);

}
