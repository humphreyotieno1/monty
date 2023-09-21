#include "monty.h"

/**
 * delete_end_node - delete last node in a doubly linked list
 * @h: ptr to head of list
 */

void delete_end_node(stack_t **h)
{
	stack_t *current, *prev;

	if (h == NULL || *h == NULL)
		return;

	current = *h;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}

	if (prev != NULL)
		prev->next = NULL;
	else
		*h = NULL;

	free(current);
}
