#include "main.h"
#include <stdio.h>

/**
 * _strncpy -  a function that copies a string.
 * @dest: pointer to the destination array
 * @src: string to be copied.
 * @n: number of bytes to copy
 *
 * Return: char pointer to the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *cpy = dest;
	int src_length = 0;
	int i;

	/* length of source string */
	while (*(src + src_length) != '\0')
	{
		src_length++;
	}

	for (i = 0; i < n; i++)
	{
		if (i <= src_length)
		{
			*(cpy + i) = *(src + i);
		}
		else
		{
			*(cpy + i) = '\0';
		}
	}

	return (cpy);
}
