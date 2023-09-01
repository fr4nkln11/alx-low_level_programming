#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: the first integer value
 * @m: the second integer value
 *
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xor_mask;
	int bit_count;

	xor_mask = n ^ m;
	bit_count = 0;

	while (xor_mask)
	{
		/**
		 * bit_count += xor_mask & 1;
		 * xor_mask = xor_mask >> 1;
		 */

		bit_count++;
		xor_mask = xor_mask & (xor_mask - 1);
	}

	return (bit_count);
}
