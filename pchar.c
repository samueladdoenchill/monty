#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pchar - prints char at top of stack followed by new line
 * @stack: first element of the stack
 * @line_number: The line number
 *
 * Return: void
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit_free();
	}
	current = *stack;
	if (!(current->n >= 0 && current->n <= 127))
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit_free();
	}
	printf("%c\n", current->n);
}
