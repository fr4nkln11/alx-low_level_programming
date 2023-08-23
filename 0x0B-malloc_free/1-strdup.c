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
		int len = 0;
		char *dup;
		unsigned int i = 0;

		while (*(str + len) != '\0')
		{
			len++;
		}

		dup = malloc(len * (sizeof(char)));

		if (dup == NULL)
		{
			return (NULL);
		}

		while (*(str + i) != '\0')
		{
			*(dup + i) = *(str + i);
			i++;
		}

		*(dup + i) = '\0';

		return (dup);
	}
}
