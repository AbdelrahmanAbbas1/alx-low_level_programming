#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma_flag;
	hash_node_t *hash_node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");
			hash_node = ht->array[i];
			while (hash_node)
			{
				printf("'%s': '%s'", hash_node->key, hash_node->value);
				hash_node = hash_node->next;
				if (hash_node != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
