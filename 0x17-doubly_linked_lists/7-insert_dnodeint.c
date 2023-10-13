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
	dlistint_t *next = *h;
	dlistint_t *prev;
	dlistint_t *new_node;
	unsigned int pos = 0;

	if (!h)
		return (NULL);

	if (*h == NULL || idx <= 0)
		return (add_dnodeint(h, n));

	while (pos < idx)
	{
		if (next == NULL)
			break;

		next = next->next;
		pos++;
	}
	if (pos < idx)
		return (NULL);
	if (next == NULL)
		return (add_dnodeint_end(h, n));

	prev = next->prev;
	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	new_node->n = n;
	prev->next = new_node;
	next->prev = new_node;
	new_node->next = next;
	new_node->prev = prev;

	return (new_node);
}
