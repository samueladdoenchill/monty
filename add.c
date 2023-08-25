#include <stdlib.h>
#include <stdio.h>
#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: pointer to the address
 * @line_number: the line number
 *
 * Return: void
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *h = *stack;

	if ((h == NULL) || (h->next == NULL))
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit_free();
	}
	h->next->n += h->n;
	pop(stack, line_number);
}
