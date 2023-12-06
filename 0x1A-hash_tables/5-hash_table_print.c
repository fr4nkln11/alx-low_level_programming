#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long i;
	int item_count = 0;
	hash_node_t *temp_node = NULL;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp_node = ht->array[i];

			if (item_count > 0)
				printf(", ");

			if (temp_node)
			{
				while (temp_node)
				{
					printf("'%s': '%s'", temp_node->key, temp_node->value);
					temp_node = temp_node->next;
				}
			}
		}
		printf("}\n");
	}
}
