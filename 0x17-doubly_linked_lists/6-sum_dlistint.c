#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all the data of a linked list
 * @head: A pointer to the head node of the list
 *
 * Return: The sum of all the data or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
