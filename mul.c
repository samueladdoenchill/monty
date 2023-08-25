#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * mul_op - multiplies second top element of stack with
 * top element of stack
 * @stack: pointer to the address
 * @line_number: the line number
 *
 * Return: void
 */
void mul_op(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if ((current == NULL) || (current->next == NULL))
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit_free();
	}
	current->next->n *= current->n;
	pop(stack, line_number);
}
