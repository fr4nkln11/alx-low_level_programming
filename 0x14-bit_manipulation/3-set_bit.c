#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: a pointer to an integer value
 * @index: position of bit to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_range = sizeof(unsigned long int);
	unsigned long int mask = 1;

	if (index <= bit_range)
	{
		mask <<= index;
		*n |= mask;

		return (1);
	}
	else
	{
		return (-1);
	}
}
