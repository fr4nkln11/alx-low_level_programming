#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: The returned pointer should point to a newly
 * allocated space in memory which contains the contents
 * of s1, followed by the contents of s2, and null terminated,
 * The function should return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int first_size = 0;
	int second_size = 0;
	int total_size, index;
	char *new_string;

	while (s1 && *(s1 + first_size) != '\0')
	{
		first_size++;
	}

	while (s2 && *(s2 + second_size) != '\0')
	{
		second_size++;
	}

	total_size = (first_size + second_size) + 1;
	new_string = (char *)malloc(total_size * sizeof(char));

	if (!new_string)
	{
		return (NULL);
	}

	index = 0;

	while (s1 && *s1 != '\0')
	{
		new_string[index] = *s1;
		s1++;
		index++;
	}
	while (s2 && *s2 != '\0')
	{
		new_string[index] = *s2;
		s2++;
		index++;
	}
	new_string[index] = '\0';

	return (new_string);
}
