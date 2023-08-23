#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to string to be copied
 *
 * Return: a pointer copied string
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		char *dup = malloc(sizeof(str));
		unsigned int i = 0;

		if (dup == NULL)
		{
			return (NULL);
		}

		while (*(str + i) != '\0')
		{
			*(dup + i) = *(str + i);
			i++;
		}

		return (dup);
	}
}
