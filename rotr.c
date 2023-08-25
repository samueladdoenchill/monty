#include <stdlib.h>
#include "monty.h"

/**
 * rotr - Rotates stack to bottom
 * @stack: Pointer to address of thehead node of stack
 * @line_number: Line number
 *
 * Return: None
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *current = NULL;
	(void)line_number;

	if (stack != NULL && *stack != NULL)
	{
		current = *stack;
		while (current->next != NULL)
			current = current->next;
		if (*stack != current)
		{
			current->prev->next = NULL;
			current->prev = NULL;
			current->next = *stack;
			(*stack)->prev = current;
			*stack = current;
		}
	}
}
