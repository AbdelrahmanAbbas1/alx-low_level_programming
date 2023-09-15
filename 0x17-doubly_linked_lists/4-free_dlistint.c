#include "lists.h"
/**
 * free_dlistint - Frees a dlistint_t list
 * @head: A pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		free(head);
		head = head->next;
	}
}
