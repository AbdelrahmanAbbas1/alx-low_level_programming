#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a list and sets the head to null
 * @head: A pointer to a pointer to a list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
}
