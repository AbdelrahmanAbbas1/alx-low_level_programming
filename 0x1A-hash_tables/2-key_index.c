#include "hash_tables.h"
/**
 * key_index - Gives you the index of a key
 * @key: The key string
 * @size: The size of the array of the hash table
 *
 * Return: The index at which key/value pair store in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key;

	hash_key = hash_djb2(key) % size;

	return (hash_key);
}
