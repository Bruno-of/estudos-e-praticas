#include <stdio.h>

// count characters in input; 2nd version

main()
{
	double nch;

	for (nch = 0; getchar() != EOF; ++nch)
		;
	printf("%.0f\n", nch);

}
