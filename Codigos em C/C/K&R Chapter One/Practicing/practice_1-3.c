#include <stdio.h>

// print Fahrenheit-Celsius table

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
	float fahr, celsius;

	fahr = LOWER;
	printf("Fahr | Celsius\n");
	printf("-----+--------\n");

	while (fahr < UPPER) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f", fahr);
		printf("  |");
		printf("%8.3f\n", celsius);
		fahr += STEP;
	}

}
