#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * swap - Swaps top two elements of stack
 * @stack: Pointer to address of head node of stack
 * @line_number: Line number
 *
 * Return: None
 */
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;
	int tmp = 0;

	if ((current == NULL) || (current->next == NULL))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit_free();
	}
	tmp = current->n;
	current->n = current->next->n;
	current->next->n = tmp;
}
