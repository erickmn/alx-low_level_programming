#include "main.h"

/**
 * binary_to_uint - Entry point
 * @b: constant char
 *
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			uint <<= 1;
			uint += *b - '0';
			b++;
		}
		else
		{
			return (0);
		}
	}

	return (uint);
}
