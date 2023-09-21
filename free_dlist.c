#include "monty.h"

/**
 * free_dlist - frees a doubly linked list with only int data, no strings
 * @h: pointer to head of list
 */
void free_dlist(stack_t **h)
{
	/* return if empty list */
	if (!h)
		return;

	while (*h && (*h)->next)
	{
		*h = (*h)->next;
		free((*h)->prev);
	}
	free(*h);
}
