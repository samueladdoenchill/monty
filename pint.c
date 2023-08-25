#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_func - Function to print value at the top of
 * stack followed by a new line
 * @head: Pointer to the first element of stack
 * @line_number: The line number where operation is performed
 *
 * Return: None
*/

void pint_func(stack_t **head, unsigned int line_number)
{
	stack_t *current;

	current = *head;
	if (current == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
		exit_free();
	}
	printf("%d\n", current->n);
}
