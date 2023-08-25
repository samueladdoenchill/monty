#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * mod - computes rest of division of the second
 * top element of stack by top element of stack
 * @stack: pointer to address
 * @line_number: line number
 *
 * Return: None
 */
void mod(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if ((current == NULL) || (current->next == NULL))
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", line_number);
		exit_free();
	}
	if (current->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit_free();
	}
	current->next->n %= current->n;

	pop(stack, line_number);
}
