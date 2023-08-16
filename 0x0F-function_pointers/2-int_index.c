#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: an array of integers
 * @size: the number elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: the index of the first element
 * for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
