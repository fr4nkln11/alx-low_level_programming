#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: pointer to the head node
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node;

	if (head)
	{
		while (head)
		{
			temp_node = head->next;
			free(head);
			head = temp_node;
		}
	}
}
