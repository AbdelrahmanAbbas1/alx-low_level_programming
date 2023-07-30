#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: a pointer to a pointer of list_t
 * @str: The string to be duplicated
 *
 * Return: The adress of the new element or NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_node;

	while (str[i] != '\0')
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
