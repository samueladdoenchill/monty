#include <stdlib.h>
#include <stdio.h>
#include "monty.h"


/**
 * pop - Removes the top element from the stack
 * @stack: Pointer to the top node of the stack
 * @line_number: The line number where the operation is performed
 * Return: None
*/
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	if (current == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		exit_free();
	}
	*stack = current->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(current);
}
