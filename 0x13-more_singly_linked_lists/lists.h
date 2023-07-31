#ifndef LISTS_H

#define LISTS_H
#include <stddef.h>

/**
 * struct listint_s -sinly linked list
 * @n: integer
 * @next: Points to the next node
 *
 * Description: Singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif
