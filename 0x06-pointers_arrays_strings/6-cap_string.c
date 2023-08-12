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

	/* while current character is not a null character ('\0') */
	while (*(s + index) != '\0')
	{
		char prev_char = *(s + (index - 1));
		char current_char = *(s + index);

		/**
		 * check if previous character is a non letter,
		 * a non digit and not '-'
		 */
		if (
		!((prev_char > 64 && prev_char < 91)
			|| (prev_char > 96 && prev_char < 123))
		&& !(prev_char > 47 && prev_char < 58)
		&& (prev_char != 45)
		)
		{
			/* check if letter is lower case*/
			if (current_char > 96 && current_char < 123)
			{
				/* convert letter to upper case */
				*(s + index) -= 32;
			}
		}

		/* increment array index */
		index++;
	}

	return (s);
}
