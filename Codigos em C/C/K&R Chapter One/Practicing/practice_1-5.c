#include <stdio.h>

// print Fahrenheit-Celsius table reverse order

#define UPPER 300
#define LOWER 0
#define STEP 20

main()
{
	float fahr, celsius;

	printf("Fahr | Celsius\n");
	printf("-----+--------\n");
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
		celsius = (5.0/9.0) * (fahr - 32);
		printf("%3.0f", fahr);
		printf("  |");
		printf("%7.1f\n", celsius);
	}

}
