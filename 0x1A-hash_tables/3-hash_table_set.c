#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_hash_node - create a new hash node and return it
 * @key: the key
 * @value: the value
 *
 * Return: a pointer to the new node
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node = NULL;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));
	new_node->key = (char *)malloc(strlen(key) + 1);
	new_node->value = (char *)malloc(strlen(value) + 1);

	if (!new_node)
		return (NULL);

	if (!new_node->key)
	{
		free(new_node);
		return (NULL);
	}

	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	return (new_node);
}

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;
	hash_node_t *temp_node = NULL;

	if (ht == NULL)
		return (0);

	if (key[0] == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = create_hash_node(key, value);

	if (new_node == NULL)
		return (0);

	/* check if index is not occupied */

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		/* update */
		if (strcmp(ht->array[index]->key, new_node->key) == 0)
		{
			strcpy(ht->array[index]->value, value);
		}
		else
		{
			/* collision */
			temp_node = ht->array[index];
			new_node->next = temp_node;
			ht->array[index] = new_node;
		}
	}
	return (1);
}
