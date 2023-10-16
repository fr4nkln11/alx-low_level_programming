#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	char *cat = dest;
	int len = 0;

	while (*dest != '\0')
	{
		*(cat + len) = *dest;
		len++;
		dest++;
	}
	while (*src != '\0')
	{
		*(cat + len) = *src;
		len++;
		src++;
	}
	*(cat + len) = '\0';

	return (cat);
}
