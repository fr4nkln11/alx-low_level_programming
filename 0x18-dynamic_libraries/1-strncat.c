#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: dest string
 * @src: src string
 * @n: number of bytes
 *
 * Return: pointer to char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *cat = dest;
	int len, len2;

	len = 0;
	len2 = 0;

	while (*dest != '\0')
	{
		*(cat + len) = *dest;
		dest++;
		len++;
	}

	while (*src != '\0')
	{
		if (len2 == n)
		{
			break;
		}
		*(cat + len) = *src;
		len++;
		len2++;
		src++;
	}

	return (cat);
}
