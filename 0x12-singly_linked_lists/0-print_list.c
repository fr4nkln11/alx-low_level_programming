#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: pointer to node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t list_size;
	const list_t *cursor;
	char *string;

	cursor = h;

	list_size = 0;
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (cursor != NULL)
		{
			if (cursor->str == NULL)
			{
				string = "(nil)";
			}
			else
			{
				string = cursor->str;
			}
			printf("[%d] %s\n", cursor->len, string);
			cursor = cursor->next;
			list_size++;
		}
	}

	return (list_size);
}
