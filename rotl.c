#include <stdlib.h>
#include "monty.h"

/**
 * rotl - Rotates stack to top
 * @stack: Pointer to address of thehead node of stack
 * @line_number: Line number
 *
 * Return: None
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;
	int tmp = 0;
	(void)line_number;

	if (stack != NULL && *stack != NULL)
	{
		current = *stack;
		tmp = current->n;
		while (current->next != NULL)
		{
			current->n = current->next->n;
			current = current->next;
		}
		current->n = tmp;
	}
}
