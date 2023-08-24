#include "lists.h"
#include <stddef.h>

/**
 * list_len - a function that returns the number of elements in a linked list_t list.
 * @h: pointer to the head node
 *
 * Return: the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t length;
	const list_t *cursor = h;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (cursor != NULL)
		{
			length++;
			cursor = cursor->next;
		}
	}

	return (length);
}
