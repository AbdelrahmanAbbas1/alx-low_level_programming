#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - Prints all the elements of a list_t list
 * @h: a pointer to list_t structure
 *
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 1;

	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%d] %s\n", h->len, h->str);

	while (h->next != NULL)
	{
		print_list(h->next);
		h = h->next;
		count++;
	}
	return (count);
}
