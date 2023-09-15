#include "lists.h"
/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t
 * @h: a pointer to the node of the list
 *
 * Return: The number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
