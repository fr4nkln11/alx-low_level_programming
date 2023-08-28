#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list.
 * @head: a pointer to the pointer pointing to the head node
 * @n: integer value to store in new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *cursor;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	if (!head)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head)
	{
		cursor = *head;
		while (cursor->next != NULL)
		{
			cursor = cursor->next;
		}
		cursor->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (new_node);
}
