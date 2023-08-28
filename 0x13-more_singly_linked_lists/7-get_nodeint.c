#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to head node
 * @index: the position of the node
 *
 * Return: an address to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head)
	{
		listint_t *cursor;
		unsigned int i = 0;
		cursor = head;

		while (cursor)
		{
			if (i == index)
			{
				break;
			}
			else
			{
				cursor = cursor->next;
				i++;
			}
		}

		return (cursor);
	}
	else
	{
		return (NULL);
	}
}
