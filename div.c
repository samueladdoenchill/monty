#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * div_operation - Divides the second top element of
 * the stack by the top element of the stack.
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty file
 *
 * Return: No return value
 */
void div_op(stack_t **stack, unsigned int line_number)
{
	stack_t *current_top = *stack;

	if ((current_top == NULL) || (current_top->next == NULL))
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit_free();
	}
	if (current_top->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit_free();
	}
	current_top->next->n /= current_top->n;

	pop(stack, line_number);
}
