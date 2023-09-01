#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: the number to convert to binary
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int bitsize = (sizeof(unsigned long int) * 8);
	int counter;
	int mask;
	int start_flag = 0;

	for (counter = (bitsize - 1); counter >= 0; counter--)
	{
		mask = n >> counter;

		if (counter == 0 && !start_flag)
		{
			start_flag = 1;
		}

		if (mask & 1)
		{
			start_flag = 1;
			_putchar('1');
		}
		else
		{
			if (start_flag)
			{
				_putchar('0');
			}
		}
	}
}
