#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to the hash table
 * @key: key of the hash
 * Return: value.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int k_index;
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	k_index = key_index((unsigned char *)key, ht->size);
	current = ht->array[k_index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
