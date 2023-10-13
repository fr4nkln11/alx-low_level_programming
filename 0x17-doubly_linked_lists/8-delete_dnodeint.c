#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a dlistint_t linked list.
 * @head: pointer to head node
 * @index: position of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cursor = *head;
	dlistint_t *prev;
	dlistint_t *post;
	dlistint_t *temp;
	unsigned int pos = 0;

	if (head && *head)
	{
		if (index <= 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			if (*head)
				(*head)->prev = NULL;
		}
		else
		{
			while (pos < index)
			{
				if (!cursor)
					break;

				cursor = cursor->next;
				pos++;
			}

			if (pos < index || cursor == NULL)
				return (-1);

			post = cursor->next;
			prev = cursor->prev;
			free(cursor);
			prev->next = post;
			post->prev = prev;

			return (1);
		}
	}

	return (-1);
}