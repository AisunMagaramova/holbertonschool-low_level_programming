#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
/**
 * struct hash_node_s - Node of a hash table (linked list for collisions)
 * @key: The key (string), unique in the hash table
 * @value: The value associated with the key
 * @next: Pointer to the next node in the list (for handling collisions)
 *
 * Description: Used to build the hash table's chains for collision handling
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;
/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of pointers to nodes (hash_node_t *)
 *
 * Description: Hash table with chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);

#endif
