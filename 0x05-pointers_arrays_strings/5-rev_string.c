#include "main.h"
#include <stdio.h>

/**
 * rev_string - a function that reverses a string,
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int step, midpoint;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	midpoint = len / 2;

	for (step = 0; step < midpoint; step++)
	{
		char temp;

		temp = *(s - (step + 1));
		*(s - (step + 1)) = *(s - (len - step));
		*(s - (len - step)) = temp;
	}
}
