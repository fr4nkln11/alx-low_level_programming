#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of array to be created
 * @c: char to initialize array with
 *
 * Return: pointer to the array,
 * NULL if array size is 0
 */

char *create_array(unsigned int size, char c)
{
	if (size > 0)
	{
		char *arr = malloc(sizeof(char) * size);
		unsigned int i;

		if (arr == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}

		return (arr);
	}
	else
	{
		return (NULL);
	}
}
