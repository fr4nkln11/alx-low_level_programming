#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a dlistint_t linked list.
 * @head: pointer to head node
 * @index: the position of the node
 *
 * Return: an address to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head)
	{
		dlistint_t *cursor;
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
		return (NULL);

}
