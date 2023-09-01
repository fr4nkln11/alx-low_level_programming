#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: an integer value
 * @index: the position of the bit to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit_range;
	unsigned long int bit_mask;

	bit_range = ((sizeof(unsigned long int) * 8) - 1);

	if (index <= bit_range)
	{
		bit_mask = ~(1 << index);
		*n &= bit_mask;
	}
	else
	{
		return (-1);
	}
	return (1);
}
