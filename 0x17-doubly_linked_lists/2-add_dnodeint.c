#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint -  a function that adds
 * a new node at the beginning of a dlistint_t list.
 * @head: double pointer to head
 * @n: number value
 *
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (head)
	{
		dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

		if (!new_node)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;

		if (*head)
			(*head)->prev = new_node;
		*head = new_node;

		return (new_node);
	}
	else
		return (NULL);
}
