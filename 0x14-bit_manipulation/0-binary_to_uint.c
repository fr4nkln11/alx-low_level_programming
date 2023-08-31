#include "main.h"

/**
 * binary_to_uint - a function that converts
 * a binary number to an unsigned int.
 * @b: pointer to binary string
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal, k, length;
	int i;

	decimal = 0;
	length = 0;
	k = 0;
	if (b)
	{
		while (*(b + length))
		{
			length++;
		}

		for (i = (length - 1); i >= 0; i--)
		{
			if (*(b + i) == '1')
			{
				decimal += 1 << k;
			}
			else if (*(b + i) == '0')
			{
				decimal += 0 << k;
			}
			else
			{
				return (0);
			}

			k++;
		}
	}
	return (decimal);
}
