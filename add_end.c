#include "monty.h"

/**
 * add_end_node - add new node at end of doubly linked list
 * @h: ptr to head of list
 * @n: int value stored in new node
 * Return: 0 on success, 1 on fail
 */

int add_end_node(stack_t **h, int n)
{
	stack_t *new_node, *current;

	if (h == NULL)
		return (-1);

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (-1);

	new_node->n = n;
	new_node->next = NULL;

	if (*h == NULL)
	{
		new_node->prev = NULL;
		*h = new_node;
	}
	else
	{
		current = *h;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
		new_node->prev = current;
	}

	return (0);
}
