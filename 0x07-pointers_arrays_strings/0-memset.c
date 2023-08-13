#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: pointer to memory area
 * @b: constant byte to fill memory area with
 * @n: number of bytes to fill
 *
 * Return: pointer to modified memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
