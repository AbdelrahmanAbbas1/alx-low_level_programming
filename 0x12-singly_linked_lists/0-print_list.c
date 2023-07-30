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
	char *s = h->str;
	size_t l = h->len;

	if (s == NULL)
		printf("[0] (nil)");
	else
		printf("[%ld] %s\n", l, s);

	while (h->next != NULL)
	{
		print_list(h->next);
		h = h->next;
		count++;
	}
	return (count);
}
