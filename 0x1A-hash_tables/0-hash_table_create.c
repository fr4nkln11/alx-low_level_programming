#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - a function that creates a hash table
 * @size: size of the array
 *
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	new_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (new_table == NULL)
		return (NULL);

	new_table->size = size;
	new_table->array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);

	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	if (new_table->array == NULL)
		return (NULL);

	return (new_table);
}
