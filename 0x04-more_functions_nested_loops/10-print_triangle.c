#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int a, i, j, k;

	a = 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < (size - a); j++)
			{
				_putchar(' ');
			}

			for (k = 0; k < a; k++)
			{
				_putchar('#');
			}

			_putchar('\n');
			a++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
