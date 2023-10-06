/*
 * This program uses toupper and tolower to analyze all characters between 0x0
 * and 0x7F. It also applies _toupper and _tolower to any code in this range
 * for which these functions make sense.
 */

#include <ctype.h>
#include <string.h>
#include <stdio.h>

char msg[] = "Some of THESE letters are Uppercase.";
char *p;

int main(void)
{
	printf("%s\n", msg);

	/*
	 * reverse case of message
	 */
	for (p = msg; p < msg + strlen(msg); p++)
		if (islower(*p))
			putchar(_toupper(*p));
		else if (isupper(*p))
			putchar(_tolower(*p));
		else
			putchar(*p);

	putchar('\n');
	return 0;
}
