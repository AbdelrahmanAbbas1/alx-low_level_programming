#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: A pointer to the pointer of the head node
 * @idx: The given index to add the node
 * @n: The data of the node to be added
 *
 * Return: The address of the new node or NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*h == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while (temp)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			if (temp->next)
				temp->next->prev = new_node;
			temp->next = new_node;
		}
		temp = temp->next;
		i++;
	}
	return (new_node);
}
