#include <stdio.h>

#define MAX 20

main()
{
	int ch, word, wordsLength[MAX], i, j;

	for (i = 0; i < MAX; ++i)
		wordsLength[i] = 0;

	word = 0;
	while ((ch = getchar()) != EOF) {
		if (ch != ' ' && ch != '\t' && ch != '\n') {
			++word;
		}
		else {
			if (word > 0 && word <= MAX) {
				++wordsLength[word - 1];
				word = 0;
			}
		}
	}

	for (i = 0; i < MAX; ++i) {
		printf("%2d : ", i + 1);
		for (j = 0; j < wordsLength[i]; ++j) { /* if wordsLength[8] has */
			putchar('#');					   /* 3 as a value at the array, then */
		}									   /* the intern 'for' expression */
		putchar('\n');						   /* will print '#' 3 times. */
	}
}											   /* for (j = 0; j < 3; ++j) */
											   /*     putchar('#'); */
