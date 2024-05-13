#include <stdio.h>

#define MAX 10

main()
{
	int i, j, ch;
	char array[MAX];

	i = 0;
	while (i < MAX && (ch = getchar()) != EOF) {
		array[i] = ch;
		++i;
	}

	for (i = 0; i < MAX; ++i)
		printf("%c,", array[i]);
}
