#include <stdio.h>

main() 
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = upper;

	printf("Fahr | Celsius\n--------------\n");

	while (fahr >= lower) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %8.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
}