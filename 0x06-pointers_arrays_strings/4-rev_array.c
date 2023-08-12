#include "main.h"
#include <stdio.h>

/**
 * reverse_array -  a function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int step, midpoint, last_index;

	last_index = n - 1;
	midpoint = n / 2;

	for (step = 0; step < midpoint; step++)
	{
		int temp;

		temp = *(a + step);
		*(a + step) = *(a + (last_index - step));
		*(a + (last_index - step)) = temp;
	}
}
