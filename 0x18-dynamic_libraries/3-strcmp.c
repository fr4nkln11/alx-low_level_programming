#include "main.h"

/**
 * _strcmp - a function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: integer value indicating the relationship between the two strings.
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int cmp;

	while (*(s1 + index) != '\0' || *(s2 + index) != '\0')
	{
		cmp = (*(s1 + index) - *(s2 + index));

		if (cmp == 0)
		{
			index++;
		}
		else
		{
			break;
		}
	}

	return (cmp);
}
