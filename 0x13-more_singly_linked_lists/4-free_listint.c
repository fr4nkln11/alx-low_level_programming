#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to head node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *temp_node;

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
