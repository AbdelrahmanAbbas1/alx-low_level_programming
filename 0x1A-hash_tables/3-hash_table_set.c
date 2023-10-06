#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Hash Table
 * @key: The key to be stored in hash table
 * @value: The value to be stored in hash table
 *
 * Return: 1 on success and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash_index;
	char *value_copy;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	hash_index = key_index((unsigned char *)key, ht->size);

	if (strcmp(ht->array[hash_index]->key, key) == 0)
	{
		free(ht->array[hash_index]->value);
		ht->array[hash_index]->value = value_copy;
		return (1);
	}
	ht->array[hash_index]->value = value_copy;
	ht->array[hash_index]->key = strdup(key);

	return (1);
}
