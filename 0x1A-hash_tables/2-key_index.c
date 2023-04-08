#include "hash_tables.h"

/**
 * key_index - function that generates a distributed index
 * according to a given hash
 *
 * @key: the key to calculate the index for
 * @size: the size of the hash table array
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_cal;

	hash_cal = hash_djb2(key);
	return (hash_cal % size);
}
