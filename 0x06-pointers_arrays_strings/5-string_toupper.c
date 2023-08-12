#include "main.h"

/**
 * string_toupper - a function that changes,
 * all lowercase letters of a string to uppercase.
 * @s: pointer original string
 *
 * Return: pointer to modified string
 */

char *string_toupper(char *s)
{
	int index = 0;

	while (*(s + index) != '\0')
	{
		char current_char = *(s + index);

		if (current_char < 123 && current_char > 96)
		{
			*(s + index) -= 32;
		}

		index++;
	}

	return (s);
}
