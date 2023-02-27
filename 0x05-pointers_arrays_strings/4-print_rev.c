#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first ount to end, n is to count bak
 * @s: str to put
 */
void print_rev(char *s)
{
	int fcounter = 0;
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		fcounter++;
	}

	for (n = (fcounter - 1); n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
