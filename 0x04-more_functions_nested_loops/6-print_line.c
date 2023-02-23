#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: The character to be checked
 *
 * Return: Integer value
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
