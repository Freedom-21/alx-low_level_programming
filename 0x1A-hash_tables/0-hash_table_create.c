#include "hash_tables.h"

/**
 *hash_table_create - a function that creates a hash table
 *@size: the size of the array
 *Return: a pointer to a newly created hash table or NULL if it failed
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (unsigned long int i = 0; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
