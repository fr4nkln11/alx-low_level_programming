#include "main.h"
#include <stdio.h>

/**
 * puts2 - a function that prints every other character of a string,
 * starting with the first character,
 * followed by a new line.
 * @str: string to print
 *
 * Return: void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);

		if (*(str + 1) == '\0')
		{
			break;
		}

		str += 2;
	}
	_putchar('\n');
}
