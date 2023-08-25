#include <stdlib.h>
#include "monty.h"

/**
 * free_stack - Deallocates a doubly linked list
 * @head: Pointer to the head of the doubly linked list
 *
 * Return: None
 */
void free_stack(stack_t *head)
{
	stack_t *current_top = NULL;

	while (head != NULL)
	{
		current_top = head;
		head = head->next;
		free(current_top);
	}
}
