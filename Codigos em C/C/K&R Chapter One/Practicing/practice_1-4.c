#include <stdio.h>

// print Celsius-Fahrenheit table

#define UPPER 150
#define LOWER 0
#define STEP 10

main()
{
	float celsius, fahr;

	celsius = LOWER;
	printf("Celsius | Fahr\n");
	printf("--------+-----\n");

	while (celsius < UPPER) {
		fahr = (celsius * 9.0/5.0) + 32.0;
		printf("%5.0f", celsius);
		printf("   |");
		printf("%5.0f\n", fahr);
		celsius += STEP;
	}
}
