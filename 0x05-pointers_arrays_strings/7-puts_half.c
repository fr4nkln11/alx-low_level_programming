#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * followed by a new line.
 * @str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int midpoint, step;

	while (*str != '\0')
	{
		str++;
		len++;
	}

	midpoint = len / 2;

	for (step = 0; step < midpoint; step++)
	{
		_putchar(*(str - (midpoint - step)));
	}
	_putchar('\n');
}
