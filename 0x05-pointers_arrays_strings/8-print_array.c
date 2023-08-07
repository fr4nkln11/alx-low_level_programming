#include "main.h"
#include <stdio.h>

/**
 * print_array - a function that prints,
 * n elements of an array of integers, followed by a new line.
 * @a: array to use
 * @n: number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int step;

	for (step = 0; step < n; step++)
	{
		if (step != 0)
		{
			printf(", ");
		}
		printf("%d", *(a + step));
	}
	putchar('\n');
}
