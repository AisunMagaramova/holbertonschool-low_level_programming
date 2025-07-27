#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_djb2 - Hash function implementing djb2 algorithm
 * @str: The string to hash
 *
 * Return: The resulting hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
