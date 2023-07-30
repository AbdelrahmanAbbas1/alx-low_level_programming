#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - Returns teh number of elements in a linked list
 * @h: a pointer to list_t
 *
 * Return: The number of elements in a linked list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
