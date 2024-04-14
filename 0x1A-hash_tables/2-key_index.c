#include "hash_tables.h"

/**
 * key_index - the function tath returns the index of a key
 * @key: the key
 * @size: size of the array of hash table
 * Return: the index which the key value pair should stored.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
