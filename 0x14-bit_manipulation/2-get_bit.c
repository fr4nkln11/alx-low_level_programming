#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: an integer value
 * @index: position of the bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit_range = sizeof(unsigned long int) * 8;
	int mask;
	int bit_value;

	if (index <= bit_range)
	{
		mask = n >> index;
		bit_value = mask & 1;
		return (bit_value);
	}
	else
	{
		return (-1);
	}
}
