#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to head node
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *cursor = head;
	list_t *temp;

	if (head)
	{
		while (cursor != NULL)
		{
			temp = cursor->next;
			free(cursor);
			cursor = temp;
		}
	}
}
