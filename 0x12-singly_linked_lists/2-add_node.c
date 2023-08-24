#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - a function that adds
 * a new node at the beginning of a list_t list.
 * @head: pointer to the head pointer
 * @str: string to add
 *
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	int str_len = 0;
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	new_node->str = strdup(str);

	while (*(str + str_len) != '\0')
	{
		str_len++;
	}

	new_node->len = str_len;

	new_node->next = *head;
	*head = new_node;

	return (*head);
}
