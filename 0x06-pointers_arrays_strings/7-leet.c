#include "main.h"

/**
 * leet -  a function that encodes a string into 1337.
 * @s: pointer to original string
 *
 * Return: char: pointer to modified string
 */

char *leet(char *s)
{
	int index;
	char leet_key[5] = "AEOTL";
	char leet_value[5] = "43071";

	index = 0;

	while (*(s + index) != '\0')
	{
		int i;

		/**
		 * loop through all possible letters
		 * that can be replaced.
		 */
		for (i = 0; i < 5; i++)
		{
			/**
			 * if a letter in the string matches
			 * a letter that can be replaced
			 */
			if (
			(*(s + index) == leet_key[i])
			|| (*(s + index) == (leet_key[i] + 32))
			)
			{
				*(s + index) = leet_value[i];
			}
		}

		index++;
	}

	return (s);
}
