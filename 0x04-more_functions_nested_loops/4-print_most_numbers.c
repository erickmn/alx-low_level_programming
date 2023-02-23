#include "main.h"

/**
 * print_most_numbers - print numbers between 0 and 9
 * but do not print 2 and 4
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		if (n != 2 && n != 4)
		{
			_putchar((n % 10) + '0');
		}
	}

	_putchar('\n');

}
