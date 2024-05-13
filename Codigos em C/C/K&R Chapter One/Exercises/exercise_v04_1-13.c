#include <stdio.h>

#define MAX 20

main()
{
	int i, wordLength, input, state, lengths[MAX];

	for (i = 1; i < MAX; ++i) {
		lengths[i] = 0;
	}

	currentWordlength = 0;
	while ((input = getchar()) != EOF) {
		if (input == ' ' || input == '\t' || input == '\n') {
			if (currentWordLength > 0 && currentWordLength <= MAX) {
				++wordlenghts[currentWordLength - 1];
			}
		currentWordLength = 0;
		}
		else {
			++currentLength;
		}
	}
}
