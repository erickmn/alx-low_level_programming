#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
*/
void print_alphabet(void)
{
	/*Declare the character*/
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);

	/*Declare a new line*/
	_putchar('\n');
}
