#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: a pointer to a pointer to list_t
 * @str: the str to be duplicated
 *
 * Return: The address of the new element or NULL otherwise
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_node;
	list_t *temp;

	while (str[i] != '\0')
		i++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
