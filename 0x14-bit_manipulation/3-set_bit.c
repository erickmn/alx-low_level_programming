#include "main.h"
/**
 * set_bit - a function that sets the value of a bit to 1 at a given index
 * @n: index of the bit to set (starting from 0)
 * @index: index
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | 1ul << index;
	return (1);
}
