#include "main.h"

/**
 * print_square - a function that prints a square
 * @size: the character to be checked
 *
 * Return: integer value
 */
void print_square(int size)
{
	int len, wid;

	if (size > 0)
	{
		for (len = 0; len < size; len++)
		{
			for (wid = 0; wid < size; wid++)

				_putchar('#');

			if (len == size - 1)
				continue;

			_putchar('\n');
		}

	}

	_putchar('\n');
}
