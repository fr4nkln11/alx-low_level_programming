#include "lists.h"
#include <stdlib.h>

listint_t *get_node(listint_t *head, unsigned int idx);

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
	listint_t *new_node;
	listint_t *post_node;
	listint_t *pre_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (head)
	{
		if (*head)
		{

			if (idx > 0)
			{
				pre_node = get_node(*head, (idx - 1));
				if (pre_node)
				{
					post_node = pre_node->next;
					pre_node->next = new_node;
					new_node->next = post_node;
				}
				else
				{
					return (NULL);
				}
			}
			else
			{
				new_node->next = *head;
				*head = new_node;
			}

			return (new_node);
		}
		else
		{
			*head = new_node;
			return (new_node);
		}
	}
	return (NULL);
}

/**
 * get_node - a function that returns
 * the nth node of a listint_t linked list
 * @head: pointer to the head node
 * @idx: the position of the node
 *
 * Return: an address to the nth node
 */

listint_t *get_node(listint_t *head, unsigned int idx)
{
	if (head)
	{
		listint_t *cursor;
		unsigned int i = 0;

		cursor = head;

		while (cursor)
		{
			if (i == idx)
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
