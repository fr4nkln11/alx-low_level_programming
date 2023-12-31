#include "hash_tables.h"
#include <stdio.h>

void print_hash_table(hash_table_t *table)
{
	unsigned long table_size = table->size;
	unsigned long i;
	char *key;
	char *value;
	hash_node_t *temp_node = NULL;

	for (i = 0; i < table_size; i++)
	{
		temp_node = table->array[i];

		if (temp_node)
		{
			printf("[%lu] - ", i);
			while (temp_node)
			{
				key = temp_node->key;
				value = temp_node->value;

				printf("{[%s] : [%s]} --> ", key, value);
				temp_node = temp_node->next;
			}
			printf("NULL");
		}
		else
		{
			printf("[%lu] - {[-] : [-]}", i);
		}
		putchar('\n');
	}
}
