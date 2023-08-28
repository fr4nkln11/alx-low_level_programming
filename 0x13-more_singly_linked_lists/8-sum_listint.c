#include "lists.h"

/**
 * sum_listint - a function that returns
 * the sum of all the data (n) of a listint_t linked list.
 * @head: a pointer to the head node
 *
 * Return: sum of all integer values stored in each node
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *cursor;

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
