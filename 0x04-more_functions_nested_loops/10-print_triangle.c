#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: The character to be checked
 *
 * Return: return newline
 */
void print_triangle(int size)
{
	int len, space;

	if (size > 0)
	{
		for (len = 1; len <= size; len++)
		{
			for (space = size - len; space > 0; space--)
			{
				_putchar(' ');
			}
			for (space = 0; space < len; space++)
			{
				_putchar('#');
			}

			if (len == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}


