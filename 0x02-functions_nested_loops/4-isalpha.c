#include "main.h"

/**
 * _isalpha - check if character is an alphabet
 * @c: character to check
 *
 * Return: 1 if character is alphabet,
 * 0 if character is not alphabet
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
