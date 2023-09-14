#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - a function that splits a string into words.
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words)
 */

char **strtow(char *str)
{
	char **tokens = NULL;
	char *current_token = NULL;
	int token_index = 0, token_length, token_pos, token_count;

	if (!str)
		return (NULL);
	token_count = get_token_count(str);
	if (token_count == 0)
		return (NULL);
	tokens = malloc(sizeof(char *) * (token_count + 1));
	if (tokens)
	{
		for (; token_index < token_count; token_index++)
		{
			token_length = get_token_length(str);
			tokens[token_index] = (char *)malloc(sizeof(char) * token_length);
			if (!tokens[token_index])
				return (NULL);
			current_token = tokens[token_index];
			token_pos = 0;
			while (*str != '\0')
			{
				if (*str != ' ')
				{
					current_token[token_pos] = *str;
					token_pos++;
					if (*(str + 1) == ' ' || *(str + 1) == '\0')
					{
						current_token[token_pos] = '\0';
						str++;
						break;
					}
				}
				str++;
			}
		}
		tokens[token_index] = NULL;
		return (tokens);
	}
	return (NULL);
}

/**
 * get_token_count - a function to count the number
 * of tokens in a string
 * @s: the string to check
 *
 * Return: the number of tokens counted
 */

int get_token_count(char *s)
{
	int i = 0;
	int token_count = 0;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) != ' ')
				&& ((*(s + (i + 1)) == ' ') || (*(s + (i + 1)) == '\0')))
		{
			token_count++;
		}
		i++;
	}

	return (token_count);
}

/**
 * get_token_length - a function that gets the length
 * of a token (including null byte)
 * @s: the string containing the token
 *
 * Return: the number of bytes in a token
 */

int get_token_length(char *s)
{
	int i, token_length;

	token_length = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != ' ')
		{
			token_length++;

			if (*(s + (i + 1)) == ' ' || *(s + (i + 1)) == '\0')
			{
				token_length++;
				break;
			}
		}

		i++;
	}

	return (token_length);
}
