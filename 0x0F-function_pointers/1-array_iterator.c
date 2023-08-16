#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: an array of integers
 * @size: the size of an array
 * @action: the function to be executed
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
