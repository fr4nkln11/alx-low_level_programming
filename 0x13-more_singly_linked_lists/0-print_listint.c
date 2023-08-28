#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: pointer to head node
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t list_size;
	const listint_t *cursor;

	cursor = h;
	list_size = 0;

	if (h != NULL)
	{
		while (cursor != NULL)
		{
			printf("%d\n", cursor->n);
			cursor = cursor->next;
			list_size++;
		}
	}

	return (list_size);
}
