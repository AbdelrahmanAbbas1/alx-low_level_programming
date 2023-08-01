#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - Returns the number of elements in a linked list
 * @h: A pointer to the listint_t
 *
 * Return: the number of elements in a linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
