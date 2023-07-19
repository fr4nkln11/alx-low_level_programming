#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: integer value of the character to check
 *
 * Return: 1 if char is lowercase,
 * 0 if char is not lowercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
