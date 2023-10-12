#include "lists.h"
#include <stddef.h>

/**
 * dlistint_len - a function that returns
 * the number of elements in a linked dlistint_t list
 * @h: pointer to the head node
 *
 * Return: length of the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *cursor;
	size_t length = 0;

	cursor = h;

	if (h)
	{
		while (cursor)
		{
			cursor = cursor->next;
			length++;
		}

		return (length);
	}
	else
		return (0);
}
