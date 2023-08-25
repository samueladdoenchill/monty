#include "monty.h"

/**
 * pall_print - Function that prints all elements of stack
 * @head: first element in stack
 * @line_number: None
 *
 * Return: None
 */

void pall_print(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current = *head;
	if (current == NULL)
		return;
	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
