#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - Gives the index of a key using hash_djb2
 * @key: The key to get the index of
 * @size: The size of the hash table array
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
