#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string.
 * @s: pointer to original string
 *
 * Return: char: pointer to modified string
 */

char *cap_string(char *s)
{
	int index;

	index = 0;

	while (*(s + index) != '\0')
	{
		char prev_char = *(s + (index - 1));
		char current_char = *(s + index);

		/* check if previous character is a non letter*/
		if (
		!((prev_char > 64 && prev_char < 91)
			|| (prev_char > 96 && prev_char < 123))
		&& !(prev_char > 47 && prev_char < 58)
		&& (prev_char != 45)
		)
		{
			if (current_char > 96 && current_char < 123)
			{
				*(s + index) -= 32;
			}
		}

		index++;
	}

	return (s);
}
