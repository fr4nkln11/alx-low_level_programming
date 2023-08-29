#include "lists.h"
#include <stdlib.h>

listint_t *get_node(listint_t *head, unsigned int idx);

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: pointer to head node
 * @index: position of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (head)
	{
		if (*head)
		{
			listint_t *pre_node;
			listint_t *post_node;
			listint_t *temp_node;

			if (index > 0)
			{
				pre_node = get_node(*head, (index - 1));
				if (pre_node)
				{
					post_node = pre_node->next;
					temp_node = post_node->next;
					free(post_node);
					pre_node->next = temp_node;
				}
				else
				{
					return (-1);
				}
			}
			else
			{
				temp_node = (*head)->next;
				free(*head);
				*head = temp_node;
			}

			return (1);
		}
	}

	return (-1);
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
