/* This program uses strcpy and strcat to build a phrase. */

#include <string.h>
#include <stdio.h>

int main(void)
{
	char string[80];

	/*
	 * If you change the previous line to
	 * char string[20];
	 * strcpy and strcat will happily overrun the string buffer.
	 */
	strcpy(string, "Hello, World! From ");
	strcat(string, "strcpy ");
	strcat(string, "and ");
	strcat(string, "strcat.");

	printf("String = %s\n", string);

	return 0;
}
