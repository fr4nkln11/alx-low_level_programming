#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - a function that adds
 * a new node at the end of a list_t list.
 * @head: pointer to the head pointer
 * @str: string to add
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int str_len = 0;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	list_t *cursor;

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (head == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	while (*(str + str_len) != '\0')
	{
		str_len++;
	}

	new_node->len = str_len;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		cursor = *head;
		while (cursor->next != NULL)
		{
			cursor = cursor->next;
		}
		cursor->next = new_node;
	}

	return (new_node);
}

