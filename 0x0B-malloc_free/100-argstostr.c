#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int string_length(char *string);


/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: the number of arguments
 * @av: the argument vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	if (ac && av)
	{
		char *new_string;
		char *word;
		int index, char_position, total_size, word_pos;

		total_size = 0;
		for (index = 0; index < ac; index++)
		{
			total_size += string_length(av[index]) + 1;
		}

		new_string = (char *)malloc((total_size + 1) * sizeof(char));
		if (!new_string)
		{
			return (NULL);
		}
		char_position = 0;

		for (index = 0; index < ac; index++)
		{
			word = av[index];
			word_pos = 0;
			while (*(word + word_pos) != '\0')
			{
				new_string[char_position] = *(word + word_pos);
				word_pos++;
				char_position++;
			}
			new_string[char_position] = '\n';
			char_position++;
		}

		return (new_string);

	}

	return (NULL);
}

int string_length(char *string)
{
	int index = 0;

	while (*(string + index) != '\0')
	{
		index++;
	}

	return (index);
}
