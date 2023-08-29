#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: a pointer to the pointer pointing to the head node
 * @idx: the index where the node should be added
 * @n: the intege value to store in the new node
 *
 * Return: the address to the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (head)
	{
		if (*head)
		{
			listint_t *new_node;
			listint_t *post_node;
			listint_t *pre_node;
			listint_t *cursor;
			unsigned int i = 0;

			cursor = *head;
			new_node = (listint_t *)malloc(sizeof(listint_t));

			if (!new_node)
			{
				return (NULL);
			}
			new_node->n = n;
			while (cursor)
			{
				if (i == (idx - 1))
				{
					break;
				}
				else
				{
					cursor = cursor->next;
					i++;
				}
			}
			pre_node = cursor;
			post_node = cursor->next;

			pre_node->next = new_node;
			new_node->next = post_node;

			return (new_node);
		}
	}
	return (NULL);
}
