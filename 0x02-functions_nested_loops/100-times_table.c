#include "main.h"

/**
 * print_times_table - prints time table
 * @n: length of time table
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;

	for (i = 0; i < n + 1; i++)
	{
		_putchar('0');

		for (j = 1; j < n + 1; j++)
		{
			int product = i * j;

			if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar(((product / 10) % 10) + '0');
				_putchar((product % 10) + '0');
			}
		}

		_putchar('\n');
	}

}

