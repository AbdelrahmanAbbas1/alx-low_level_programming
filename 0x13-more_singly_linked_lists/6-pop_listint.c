#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head of the node of a list
 * @head: A pointer to a pointer to the list
 *
 * Return: the head nodes data (n) or 0 otherwsie
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	*head = temp;
	return (num);
}
