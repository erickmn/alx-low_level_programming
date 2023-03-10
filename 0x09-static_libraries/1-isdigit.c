#include <stdio.h>

/**
 * _isdigit - Checks for digit between 0 to 9
 * @c: Character to be checked
 *
 * Return: integer value
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
