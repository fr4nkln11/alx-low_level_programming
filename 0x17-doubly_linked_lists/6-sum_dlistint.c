#include "lists.h"

/**
 * sum_dlistint - a function that returns
 * the sum of all the data (n) of a dlistint_t linked list.
 * @head: a pointer to the head node
 *
 * Return: sum of all integer values stored in each node
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *cursor;

	sum = 0;

	if (head)
	{
		cursor = head;
		while (cursor)
		{
			sum += cursor->n;
			cursor = cursor->next;
		}
	}

	return (sum);
}
