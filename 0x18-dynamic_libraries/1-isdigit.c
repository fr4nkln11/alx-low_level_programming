#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit,
 * 0 if c is not a digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

