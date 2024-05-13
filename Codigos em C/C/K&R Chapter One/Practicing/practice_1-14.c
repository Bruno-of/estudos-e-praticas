#include <stdio.h>

// print a histogram of the frequencies of different characters in its input

#define TOTAL_CHARS_ASCII 128

main()
{
    int ch, i, j;
    int freqChar[TOTAL_CHARS_ASCII];

    for (i = 0; i < TOTAL_CHARS_ASCII; ++i)
        freqChar[i] = 0;

    while ((ch = getchar()) != EOF) {
        ++freqChar[ch];
    }

    for (i = 0; i < TOTAL_CHARS_ASCII; ++i) {
        putchar(i);
        printf("  ");
        for (j = 0; j < freqChar[i]; ++j)
            printf("*");
        putchar('\n');
    }
}
