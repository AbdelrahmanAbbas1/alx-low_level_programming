#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Frees a list
 * @head: a pointer to a list_t
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
