#include "hash_tables.h"

/**
 * free_hash_node - a function that deletes a hash node
 * @node: the node to free
 *
 * Return: nothing
 */
void free_hash_node(hash_node_t *node)
{
	if (node)
	{
		if (node->value)
			free(node->value);
		if (node->key)
			free(node->key);

		free(node);
	}
}

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	if (ht)
	{
		unsigned long int cursor = 0;
		hash_node_t *current_node = NULL;
		hash_node_t *temp_node = NULL;

		for (cursor = 0; cursor < ht->size; cursor++)
		{
			current_node = ht->array[cursor];

			if (current_node)
			{
				while (current_node)
				{
					temp_node = current_node->next;
					free_hash_node(current_node);
					current_node = temp_node;
				}
			}
		}

		free(ht->array);
		free(ht);
	}
}
