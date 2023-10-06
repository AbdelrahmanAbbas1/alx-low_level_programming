#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table
 * @key: The key we are looking for
 *
 * Return: The value associated with the element or NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hash_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	hash_node = ht->array[index];
	while (hash_node)
	{
		if (strcmp(hash_node->key, key) == 0)
			return (hash_node->value);
		hash_node = hash_node->next;
	}
	return (NULL);
}
