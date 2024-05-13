#include <stdio.h>

#define TOTAL_CHARS 128

main()
{
	int ch, i, j;
	int char_count[TOTAL_CHARS];

	for (i = 0; i < TOTAL_CHARS; ++i)
		char_count[i] = 0;

	while ((ch = getchar()) != EOF) {
		++char_count[ch];
	}

	for (i = 0; i < TOTAL_CHARS; ++i) {
		putchar(i);
		printf(" : ");
		for (j = 0; j < char_count[i]; ++j)
			putchar('#');
		putchar('\n');
	}

}
