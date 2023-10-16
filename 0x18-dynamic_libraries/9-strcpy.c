#include <stdio.h>
#include "main.h"

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @dest: destination buffer
 * @src: string being pointed to
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;
	char *copy = dest;

	while (*src != '\0')
	{
		*(dest + index) = *src;
		src++;
		index++;
	}

	*(dest + index) = '\0';

	return (copy);
}
