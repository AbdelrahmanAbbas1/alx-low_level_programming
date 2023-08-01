#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a list
 * @head: A pointer to the list
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		free(head);
	else
	{
		while (head)
		{
			free(head);
			head = head->next;
		}
	}
}
