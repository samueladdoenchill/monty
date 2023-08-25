#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * sub - Subtracts top element of stack from second top
 * element of stack
 * @stack: Pointer to address
 * @line_number: Line number
 *
 * Return: None
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if ((current == NULL) || (current->next == NULL))
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit_free();
	}
	current->next->n -= current->n;
	pop(stack, line_number);
}
