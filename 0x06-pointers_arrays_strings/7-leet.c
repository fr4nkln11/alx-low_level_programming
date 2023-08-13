#include "main.h"

/**
 * leet -  a function that encodes a string into 1337.
 * @s: pointer to original string
 *
 * Return: char: pointer to modified string
 */

char *leet(char *s)
{
	int index;

	index = 0;

	while (*(s + index) != '\0')
	{
		if (*(s + index) == 'A' || *(s + index) == 'a')
		{
			*(s + index) = '4';
		}
		else if (*(s + index) == 'E' || *(s + index) == 'e')
		{
			*(s + index) = '3';
		}
		else if (*(s + index) == 'O' || *(s + index) == 'o')
		{
			*(s + index) = '0';
		}
		else if (*(s + index) == 'T' || *(s + index) == 't')
		{
			*(s + index) = '7';
		}
		else if (*(s + index) == 'L' || *(s + index) == 'l')
		{
			*(s + index) = '1';
		}

		index++;
	}

	return (s);
}
