#include "lists.h"
#include <stddef.h>

/**
 * listint_len - a function that returns
 * the number of elements in a linked listint_t list.
 * @h: pointer to the head node
 *
 * Return: number of elements (nodes)
 */

size_t listint_len(const listint_t *h)
{
	if (h == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + listint_len(h->next));
	}
}
