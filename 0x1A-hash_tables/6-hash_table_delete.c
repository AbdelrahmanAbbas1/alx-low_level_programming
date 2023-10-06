#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hash_node, *tmp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			hash_node = ht->array[i];
			while (hash_node)
			{
				tmp = hash_node->next;
				free(hash_node->key);
				free(hash_node->value);
				free(hash_node);
				hash_node = tmp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
