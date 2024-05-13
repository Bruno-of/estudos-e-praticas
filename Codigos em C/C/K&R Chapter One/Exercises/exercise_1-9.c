#include <stdio.h>

/* copy its input to its output, replacing
   each string of one or more blanks by a single blank */

main()
{
	int ch;

	while ((ch = getchar()) != EOF) { /*Repeat until EOF*/
		putchar(ch); /*Print every character you come across including blanks */
		if (ch == ' ') { /*But when you come across a blank*/
			while ((ch = getchar()) == ' ') /*Do nothing until you come across a non-blank*/
				;
			if (ch != ' ')
				putchar(ch); /*If the 'ch' is a non-blank, print that.*/
		}
	}
}
/*https://stackoverflow.com/questions/31542494/exercise-1-9-of-kr-book*/
