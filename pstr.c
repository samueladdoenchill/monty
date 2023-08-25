#include "monty.h"

/**
 * pstr - Prints string starting from top of stack,
 * followed by new line
 * @head: Pointer to the first element in the stack
 * @line_number: The line number
 * Return: None
 */

void pstr(stack_t **head, unsigned int line_number)
{
	stack_t *current;
	(void)line_number;

	current = *head;
	if (current != NULL)
	{
		while (current)
		{
			if (!(current->n > 0 && current->n <= 127))
				break;
			printf("%c", current->n);
			current = current->next;
		}
	}
	printf("\n");
}
