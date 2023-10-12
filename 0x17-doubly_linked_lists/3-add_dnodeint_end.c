#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - a function that adds
 * a new node at the end of a dlistint_t list.
 * @head: double pointer to head
 * @n: number value
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *cursor;

	if (head)
	{
		new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		if (*head)
		{
			cursor = *head;
			while (cursor->next)
				cursor = cursor->next;
			cursor->next = new_node;
			new_node->prev = cursor;
		}
		else
		{
			new_node->prev = NULL;
			*head = new_node;
		}

		return (new_node);
	}
	else
		return (NULL);
}
