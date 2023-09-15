#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a linked list
 * @head: A pointer to the head node in the list
 * @index: The index of the node
 *
 * Return: A pointer to the nth node in the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *w_node;
	unsigned int i = 0;

	w_node = malloc(sizeof(dlistint_t));
	if (w_node == NULL)
		return (NULL);

	while (head)
	{
		i++;
		head = head->next;
		if (i == index)
			return (head);
	}
	return (NULL);
}
