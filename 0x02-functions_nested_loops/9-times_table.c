#include "main.h"

/**
 * times_table - print a time table to screen
 *
 * Return: void
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			int product = i * j;

			if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
