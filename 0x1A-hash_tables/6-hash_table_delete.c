#include "hash_tables.h"

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
