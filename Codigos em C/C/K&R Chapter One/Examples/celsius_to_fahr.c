#include <stdio.h>

main()
{
	float celsius, fahr;
	float lower, upper, step;

	lower = 0;
	upper = 150;
	step = 10;

	celsius = lower;

	printf("Celsius | Fahr\n--------------\n");

	while (celsius <= upper) {
		fahr = (celsius * 9.0/5.0) + 32;
		printf("%6.1f %6.0f\n", celsius, fahr);
		celsius = celsius + step;
	}
}