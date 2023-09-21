#include "monty.h"

/**
 * free_dlist - free doubly linked list
 * @h: ptr to head of list
 */

void free_dlist(stack_t **h)
{
	stack_t *current;

	if (h == NULL || *h == NULL)
		return;

	while (*h != NULL)
	{
		current = *h;
		*h = (*h)->next;
		free(current);
	}
}
