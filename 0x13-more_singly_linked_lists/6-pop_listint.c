#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes
 * the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: a pointer to the pointer pointing to the head node
 *
 * Return: integer value stored in the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int data = 0;

	if (head)
	{
		if (*head)
		{
			temp_node = (*head)->next;
			data = (*head)->n;
			free(*head);
			*head = temp_node;
		}
	}

	return (data);
}
