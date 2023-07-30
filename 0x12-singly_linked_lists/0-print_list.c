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
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
