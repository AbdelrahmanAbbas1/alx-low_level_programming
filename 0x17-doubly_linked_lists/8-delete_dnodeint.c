#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given index of a list
 * @head: A pointer to a pointer of the head node of the list
 * @index: The index at which the node will be deleted
 *
 * Return: 1 on success or -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (i == index)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		i++;
	}
	return (-1);
}
