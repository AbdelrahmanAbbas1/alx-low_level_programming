#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - Prints all the elements of the list
 * @h: A pointer to listint_t
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
