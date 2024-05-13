#include <stdio.h>

// print a histogram of the lengths of words in its input

#define MAX 12

main()
{
	int ch, chCount, wordsLength[MAX], i, j;

	for (i = 0; i < MAX; ++i)
		wordsLength[i] = 0;

	chCount = 0;
	while ((ch = getchar()) != EOF) {
		if (ch != ' ' && ch != '\t' && ch != '\n') {
			++chCount;
		}
		else {
			if (chCount > 0 && chCount <= MAX) {
				++wordsLength[chCount - 1];
				chCount = 0;
			}
		}
	}

	for (i = 0; i < MAX; ++i) {
		printf("%2d : ", i + 1);
		for (j = 0; j < wordsLength[i]; ++j)
			putchar('*');
		putchar('\n');
	}

}
