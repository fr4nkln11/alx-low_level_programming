#include "main.h"

/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	char *init = s;

	while (*s != '\0')
	{
		s++;
	}

	while (s > init)
	{
		s--;
		_putchar(*s);
	}
}
