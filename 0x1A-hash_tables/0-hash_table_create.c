#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 * Return: the created hash table, or NULL if function fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = calloc(1, sizeof(hash_table_t));

	if (hash_table == NULL)
	{
	return (NULL);
	}
	hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (hash_table->array == NULL)
	{
	free(hash_table);
	return (NULL);
	}
	hash_table->size = size;
	{
	return (hash_table);
	}
}
