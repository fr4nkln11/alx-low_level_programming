#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash_table
 * @key: the key
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *selected_node;

	if (key[0] == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	selected_node = ht->array[index];

	if (selected_node != NULL)
	{
		if (strcmp(selected_node->key, key) == 0)
			return (selected_node->value);
	}

	return (NULL);
}
