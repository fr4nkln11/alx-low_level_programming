#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: a pointer to the pointer pointing to the head node
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	if (head)
	{
		if (*head)
		{
			listint_t *cursor = *head;
			listint_t *prev = NULL;

			while (cursor)
			{
				cursor = cursor->next;
				(*head)->next = prev;
				prev = *head;
				*head = cursor;
			}

			*head = prev;
			return (*head);
		}
	}

	return (NULL);
}
