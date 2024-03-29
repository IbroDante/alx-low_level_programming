#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds or updates an element in the hash table
 *
 * @ht: the hash table to add or update the element in
 * @key: the key to add or update
 * @value: the value associated with the key
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
	if (strcmp(tmp->key, key) == 0)
	{
		free(tmp->value);
		tmp->value = strdup(value);
		if (tmp->value == NULL)
		return (0);
		return (1);
	}
	tmp = tmp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
