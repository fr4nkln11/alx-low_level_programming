#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;
	const dlistint_t *cursor;

	if (!h)
		return (0);

	cursor = h;

	while (cursor)
	{
		printf("%d\n", cursor->n);
		number_of_nodes++;
		cursor = cursor->next;
	}

	return (number_of_nodes);
}
