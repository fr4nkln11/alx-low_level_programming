#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds
 * a new node at the beginning of a listint_t list.
 * @head: a pointer to the pointer to the head node
 * @n: integer value stored in new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

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
	new_node->next = *head;

	*head = new_node;

	return (*head);
}
