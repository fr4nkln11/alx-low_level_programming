#include "hash_tables.h"

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
	unsigned long int size = ht->size;
	unsigned long int index = key_index((unsigned char *)key, size);
	hash_node_t *new_node = NULL;
	hash_node_t *temp_node = NULL;

	new_node = (hash_node_t *)malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (0);

	/* create the new node */
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;

	/* check if index is already occupied (collision) */

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		temp_node = ht->array[index];
		new_node->next = temp_node;
		ht->array[index] = new_node;
	}
	return (1);
}
