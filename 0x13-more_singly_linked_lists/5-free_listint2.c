#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to the pointer pointing to the head node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head)
	{
		if (*head)
		{
			while (*head)
			{
				temp_node = (*head)->next;
				free(*head);
				*head = temp_node;
			}
		}
		head = NULL;
	}
}
