#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - a function that inserts
 * a new node at a given position.
 * @h: double pointer to head node
 * @idx: index of node
 * @n: number data
 *
 * Return: inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *prev;
	dlistint_t *cursor;
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	unsigned int counter = 0;

	new_node->n = n;

	if (!h)
		return (NULL);
	if (!(*h))
		*h = new_node;

	if (idx > 0)
	{
		cursor = *h;
		for (counter = 0; counter < idx; counter++)
		{
			if (!cursor)
			{
				free(new_node);
				return (NULL);
			}
			cursor = cursor->next;
		}
		prev = cursor->prev;
		prev->next = new_node;
		cursor->prev = new_node;
		new_node->prev = prev;
		new_node->next = cursor;
	}
	else
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		(*h)->prev = NULL;
	}

	return (new_node);
}
